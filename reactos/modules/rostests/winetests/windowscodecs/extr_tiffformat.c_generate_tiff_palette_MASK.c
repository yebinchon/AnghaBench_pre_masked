
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(void *VAR_0, unsigned VAR_1)
{
    unsigned short *VAR_2, *VAR_3, *VAR_4;
    unsigned VAR_5;

    VAR_2 = VAR_0;
    VAR_3 = VAR_2 + VAR_1;
    VAR_4 = VAR_3 + VAR_1;

    VAR_2[0] = 0x11 * 257;
    VAR_3[0] = 0x22 * 257;
    VAR_4[0] = 0x33 * 257;
    VAR_2[1] = 0x44 * 257;
    VAR_3[1] = 0x55 * 257;
    VAR_4[1] = 0x66 * 257;
    VAR_2[2] = 0x77 * 257;
    VAR_3[2] = 0x88 * 257;
    VAR_4[2] = 0x99 * 257;
    VAR_2[3] = 0xa1 * 257;
    VAR_3[3] = 0xb5 * 257;
    VAR_4[3] = 0xff * 257;

    for (VAR_5 = 4; VAR_5 < VAR_1; VAR_5++)
    {
        VAR_2[VAR_5] = VAR_5 * 257;
        VAR_3[VAR_5] = (VAR_5 | 0x40) * 257;
        VAR_4[VAR_5] = (VAR_5 | 0x80) * 257;
    }
}
