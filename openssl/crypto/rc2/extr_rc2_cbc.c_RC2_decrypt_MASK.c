
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* data; } ;
typedef TYPE_1__ RC2_KEY ;
typedef int RC2_INT ;



void FUNC_0(unsigned long *VAR_0, RC2_KEY *VAR_1)
{
    int VAR_2, VAR_3;
    register RC2_INT *VAR_4, *VAR_5;
    register RC2_INT VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
    unsigned long VAR_11;

    VAR_11 = VAR_0[0];
    VAR_6 = (RC2_INT) VAR_11 & 0xffff;
    VAR_7 = (RC2_INT) (VAR_11 >> 16L);
    VAR_11 = VAR_0[1];
    VAR_8 = (RC2_INT) VAR_11 & 0xffff;
    VAR_9 = (RC2_INT) (VAR_11 >> 16L);

    VAR_3 = 3;
    VAR_2 = 5;

    VAR_4 = &(VAR_1->data[63]);
    VAR_5 = &(VAR_1->data[0]);
    for (;;) {
        VAR_10 = ((VAR_9 << 11) | (VAR_9 >> 5)) & 0xffff;
        VAR_9 = (VAR_10 - (VAR_6 & ~VAR_8) - (VAR_7 & VAR_8) - *(VAR_4--)) & 0xffff;
        VAR_10 = ((VAR_8 << 13) | (VAR_8 >> 3)) & 0xffff;
        VAR_8 = (VAR_10 - (VAR_9 & ~VAR_7) - (VAR_6 & VAR_7) - *(VAR_4--)) & 0xffff;
        VAR_10 = ((VAR_7 << 14) | (VAR_7 >> 2)) & 0xffff;
        VAR_7 = (VAR_10 - (VAR_8 & ~VAR_6) - (VAR_9 & VAR_6) - *(VAR_4--)) & 0xffff;
        VAR_10 = ((VAR_6 << 15) | (VAR_6 >> 1)) & 0xffff;
        VAR_6 = (VAR_10 - (VAR_7 & ~VAR_9) - (VAR_8 & VAR_9) - *(VAR_4--)) & 0xffff;

        if (--VAR_2 == 0) {
            if (--VAR_3 == 0)
                break;
            VAR_2 = (VAR_3 == 2) ? 6 : 5;

            VAR_9 = (VAR_9 - VAR_5[VAR_8 & 0x3f]) & 0xffff;
            VAR_8 = (VAR_8 - VAR_5[VAR_7 & 0x3f]) & 0xffff;
            VAR_7 = (VAR_7 - VAR_5[VAR_6 & 0x3f]) & 0xffff;
            VAR_6 = (VAR_6 - VAR_5[VAR_9 & 0x3f]) & 0xffff;
        }
    }

    VAR_0[0] =
        (unsigned long)(VAR_6 & 0xffff) | ((unsigned long)(VAR_7 & 0xffff) << 16L);
    VAR_0[1] =
        (unsigned long)(VAR_8 & 0xffff) | ((unsigned long)(VAR_9 & 0xffff) << 16L);
}
