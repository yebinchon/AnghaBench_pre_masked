
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
unsigned long FUNC_0(const char *VAR_0)
{
    unsigned long VAR_1 = 0;
    long VAR_2;
    unsigned long VAR_3;
    int VAR_4;

    if ((VAR_0 == ((void*)0)) || (*VAR_0 == '\0'))
        return VAR_1;

    VAR_2 = 0x100;
    while (*VAR_0) {
        VAR_3 = VAR_2 | (*VAR_0);
        VAR_2 += 0x100;
        VAR_4 = (int)((VAR_3 >> 2) ^ VAR_3) & 0x0f;
        VAR_1 = (VAR_1 << VAR_4) | (VAR_1 >> (32 - VAR_4));
        VAR_1 &= 0xFFFFFFFFL;
        VAR_1 ^= VAR_3 * VAR_3;
        VAR_0++;
    }
    return (VAR_1 >> 16) ^ VAR_1;
}
