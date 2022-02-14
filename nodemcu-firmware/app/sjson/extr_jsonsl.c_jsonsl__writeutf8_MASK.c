
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static char *
FUNC_1(uint32_t VAR_0, char *VAR_1)
{


    if (VAR_0 < 0x80) {
        *VAR_1 = (char)(VAR_0); VAR_1++;;
    } else if (VAR_0 < 0x800) {
        *VAR_1 = (char)((VAR_0 >> 6) | 0xC0); VAR_1++;;
        *VAR_1 = (char)((VAR_0 & 0x3F) | 0x80); VAR_1++;;
    } else if (VAR_0 < 0x10000) {
        *VAR_1 = (char)((VAR_0 >> 12) | 0xE0); VAR_1++;;
        *VAR_1 = (char)(((VAR_0 >> 6) & 0x3F) | 0x80); VAR_1++;;
        *VAR_1 = (char)((VAR_0 & 0x3F) | 0x80); VAR_1++;;
    } else {
        *VAR_1 = (char)((VAR_0 >> 18) | 0xF0); VAR_1++;;
        *VAR_1 = (char)(((VAR_0 >> 12) & 0x3F) | 0x80); VAR_1++;;
        *VAR_1 = (char)(((VAR_0 >> 6) & 0x3F) | 0x80); VAR_1++;;
        *VAR_1 = (char)((VAR_0 & 0x3F) | 0x80); VAR_1++;;
    }
    return VAR_1;

}
