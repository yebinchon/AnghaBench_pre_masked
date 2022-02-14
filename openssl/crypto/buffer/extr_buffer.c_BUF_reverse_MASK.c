
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(unsigned char *VAR_0, const unsigned char *VAR_1, size_t VAR_2)
{
    size_t VAR_3;
    if (VAR_1) {
        VAR_0 += VAR_2 - 1;
        for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
            *VAR_0-- = *VAR_1++;
    } else {
        unsigned char *VAR_4;
        char VAR_5;
        VAR_4 = VAR_0 + VAR_2 - 1;
        for (VAR_3 = 0; VAR_3 < VAR_2 / 2; VAR_3++) {
            VAR_5 = *VAR_4;
            *VAR_4-- = *VAR_0;
            *VAR_0++ = VAR_5;
        }
    }
}
