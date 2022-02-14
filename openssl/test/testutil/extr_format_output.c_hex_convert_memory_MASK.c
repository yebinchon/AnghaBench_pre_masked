
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(const unsigned char *VAR_0, size_t VAR_1, char *VAR_2,
                               size_t VAR_3)
{
    size_t VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
        const unsigned char VAR_5 = *VAR_0++;

        *VAR_2++ = "0123456789abcdef"[VAR_5 >> 4];
        *VAR_2++ = "0123456789abcdef"[VAR_5 & 15];
        if (VAR_4 % VAR_3 == VAR_3 - 1 && VAR_4 != VAR_1 - 1)
            *VAR_2++ = ' ';
    }
    *VAR_2 = '\0';
}
