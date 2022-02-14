
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * data; } ;
typedef TYPE_1__ RC2_KEY ;
typedef int RC2_INT ;


 unsigned int* VAR_0 ;

void FUNC_0(RC2_KEY *VAR_1, int VAR_2, const unsigned char *VAR_3, int VAR_4)
{
    int VAR_5, VAR_6;
    unsigned char *VAR_7;
    RC2_INT *VAR_8;
    unsigned int VAR_9, VAR_10;

    VAR_7 = (unsigned char *)&(VAR_1->data[0]);
    *VAR_7 = 0;

    if (VAR_2 > 128)
        VAR_2 = 128;
    if (VAR_4 <= 0)
        VAR_4 = 1024;
    if (VAR_4 > 1024)
        VAR_4 = 1024;

    for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
        VAR_7[VAR_5] = VAR_3[VAR_5];


    VAR_10 = VAR_7[VAR_2 - 1];
    VAR_6 = 0;
    for (VAR_5 = VAR_2; VAR_5 < 128; VAR_5++, VAR_6++) {
        VAR_10 = VAR_0[(VAR_7[VAR_6] + VAR_10) & 0xff];
        VAR_7[VAR_5] = VAR_10;
    }



    VAR_6 = (VAR_4 + 7) >> 3;
    VAR_5 = 128 - VAR_6;
    VAR_9 = (0xff >> (-VAR_4 & 0x07));

    VAR_10 = VAR_0[VAR_7[VAR_5] & VAR_9];
    VAR_7[VAR_5] = VAR_10;
    while (VAR_5--) {
        VAR_10 = VAR_0[VAR_7[VAR_5 + VAR_6] ^ VAR_10];
        VAR_7[VAR_5] = VAR_10;
    }


    VAR_8 = &(VAR_1->data[63]);
    for (VAR_5 = 127; VAR_5 >= 0; VAR_5 -= 2)
        *(VAR_8--) = ((VAR_7[VAR_5] << 8) | VAR_7[VAR_5 - 1]) & 0xffff;
}
