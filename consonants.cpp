// Copyright (c) 2022 Zaida Hammel All rights reserved
//
// Created by: Zaida Hammel
// Created on: October 2022
// This program detects if your letter is a consonant or vowel

#include <iostream>
#include <string>

int main() {
    // this function checks if your letter is a consonant or vowel
    std::string letterAsString;
    int letterAsInt;

    // input
    std::cout <<\
    "Enter a number that equals to it's letter in the alphabet.(Ex: 3 for C): ";
    std::cin >> letterAsString;

    letterAsInt = atoi(letterAsString.c_str());

    // process
    switch (letterAsInt) {
        case 1:
            std::cout << "The letter A is a vowel." << std::endl;
            break;
        case 2:
            std::cout << "The letter B is a consonant." << std::endl;
            break;
        case 3:
            std::cout << "The letter C is a consonant." << std::endl;
            break;
        case 4:
            std::cout << "The letter D is a consonant." << std::endl;
            break;
        case 5:
            std::cout << "The letter E is a vowel." << std::endl;
            break;
        case 6:
            std::cout << "The letter F is a consonant." << std::endl;
            break;
        case 7:
            std::cout << "The letter G is a consonant." << std::endl;
            break;
        case 8:
            std::cout << "The  letter H is a consonant." << std::endl;
            break;
        case 9:
            std::cout << "The letter I is a vowel." << std::endl;
            break;
        case 10:
            std::cout << "The letter J is a consonant." << std::endl;
            break;
        case 11:
            std::cout << "The letter K is a consonant." << std::endl;
            break;
        case 12:
            std::cout << "The letter L is a consonant." << std::endl;
            break;
        case 13:
            std::cout << "The letter M is a consonant." << std::endl;
            break;
        case 14:
            std::cout << "The letter N is a consonant." << std::endl;
            break;
        case 15:
            std::cout << "The letter O is a vowel." << std::endl;
            break;
        case 16:
            std::cout << "The letter P is a consonant." << std::endl;
            break;
        case 17:
            std::cout << "The letter Q is a consonant." << std::endl;
            break;
        case 18:
            std::cout << "The letter R is a consonant." << std::endl;
            break;
        case 19:
            std::cout << "The letter S is a consonant." << std::endl;
            break;
        case 20:
            std::cout << "The letter T is a vowel." << std::endl;
            break;
        case 21:
            std::cout << "The letter U is a consonant." << std::endl;
            break;
        case 22:
            std::cout << "The letter V is a consonant." << std::endl;
            break;
        case 23:
            std::cout << "The letter W is a consonant." << std::endl;
            break;
        case 24:
            std::cout << "The letter X is a consonant." << std::endl;
            break;
        case 25:
            std::cout <<\
            "The letter Y is a sometimes a consonant and sometimes a vowel."\
            << std::endl;
            break;
        case 26:
            std::cout << "The letter Z is a consonant." << std::endl;
            break;
        default:
            std::cout << "Invalid letter." << std::endl;

            std::cout << std::endl;
            std::cout << "\nDone." << std::endl;
    }
}
