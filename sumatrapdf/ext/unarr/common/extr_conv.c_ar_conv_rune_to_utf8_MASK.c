
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;



size_t FUNC_0(wchar_t VAR_0, char *VAR_1, size_t VAR_2)
{
    if (VAR_2 < 1)
        return 0;
    if (VAR_0 < 0x0080) {
        *VAR_1++ = VAR_0 & 0x7F;
        return 1;
    }
    if (VAR_0 < 0x0800 && VAR_2 >= 2) {
        *VAR_1++ = 0xC0 | ((VAR_0 >> 6) & 0x1F);
        *VAR_1++ = 0x80 | (VAR_0 & 0x3F);
        return 2;
    }
    if (VAR_2 >= 3) {
        if ((0xD800 <= VAR_0 && VAR_0 <= 0xDFFF) || VAR_0 >= 0x10000)
            VAR_0 = 0xFFFD;
        *VAR_1++ = 0xE0 | ((VAR_0 >> 12) & 0x0F);
        *VAR_1++ = 0x80 | ((VAR_0 >> 6) & 0x3F);
        *VAR_1++ = 0x80 | (VAR_0 & 0x3F);
        return 3;
    }
    *VAR_1++ = '?';
    return 1;
}
