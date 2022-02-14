
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int ULONG ;


 int* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 int* VAR_9 ;

VOID FUNC_0()
{
    ULONG VAR_10;

    VAR_7[0] = 255;
    VAR_7[1] = 1;
    VAR_7[2] = 3;
    VAR_7[3] = 7;
    VAR_7[4] = 15;
    VAR_7[5] = 31;
    VAR_7[6] = 63;
    VAR_7[7] = 127;

    VAR_5[0] = 0;
    VAR_5[1] = 128;
    VAR_5[2] = 192;
    VAR_5[3] = 224;
    VAR_5[4] = 240;
    VAR_5[5] = 248;
    VAR_5[6] = 252;
    VAR_5[7] = 254;

    for (VAR_10 = 0; VAR_10 < 80; VAR_10++)
    {
        VAR_6[VAR_10*8] = 128;
        VAR_6[VAR_10*8+1] = 64;
        VAR_6[VAR_10*8+2] = 32;
        VAR_6[VAR_10*8+3] = 16;
        VAR_6[VAR_10*8+4] = 8;
        VAR_6[VAR_10*8+5] = 4;
        VAR_6[VAR_10*8+6] = 2;
        VAR_6[VAR_10*8+7] = 1;

        VAR_4[VAR_10*8] = 7;
        VAR_4[VAR_10*8+1] = 6;
        VAR_4[VAR_10*8+2] = 5;
        VAR_4[VAR_10*8+3] = 4;
        VAR_4[VAR_10*8+4] = 3;
        VAR_4[VAR_10*8+5] = 2;
        VAR_4[VAR_10*8+6] = 1;
        VAR_4[VAR_10*8+7] = 0;
    }
    for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++)
        VAR_9[VAR_10] = VAR_10*80;
    for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++)
        VAR_8[VAR_10] = VAR_10 >> 3;

    for (VAR_10 = 0; VAR_10 < 256; VAR_10++)
    {
        VAR_0[VAR_10] =
            (((VAR_10 >> 0) & 0x1) << 7) |
            (((VAR_10 >> 1) & 0x1) << 6) |
            (((VAR_10 >> 2) & 0x1) << 5) |
            (((VAR_10 >> 3) & 0x1) << 4) |
            (((VAR_10 >> 4) & 0x1) << 3) |
            (((VAR_10 >> 5) & 0x1) << 2) |
            (((VAR_10 >> 6) & 0x1) << 1) |
            (((VAR_10 >> 7) & 0x1) << 0);
    }

    for (VAR_10 = 0; VAR_10 < 256; VAR_10++)
    {
        VAR_3[VAR_10] =
            (((VAR_10 >> 0) & 0x1) << 4) |
            (((VAR_10 >> 1) & 0x1) << 0) |
            (((VAR_10 >> 2) & 0x1) << 12) |
            (((VAR_10 >> 3) & 0x1) << 8) |
            (((VAR_10 >> 4) & 0x1) << 20) |
            (((VAR_10 >> 5) & 0x1) << 16) |
            (((VAR_10 >> 6) & 0x1) << 28) |
            (((VAR_10 >> 7) & 0x1) << 24);
    }
}
