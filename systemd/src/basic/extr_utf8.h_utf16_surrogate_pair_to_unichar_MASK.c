
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int char32_t ;
typedef scalar_t__ char16_t ;



__attribute__((used)) static inline char32_t FUNC_0(char16_t VAR_0, char16_t VAR_1) {
        return ((((char32_t) VAR_0 - 0xd800U) << 10) + ((char32_t) VAR_1 - 0xdc00U) + 0x10000U);
}
