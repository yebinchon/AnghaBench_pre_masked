
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int* xkey; } ;
typedef TYPE_1__ rc2_key ;



void FUNC_0( const unsigned char *VAR_0,
                            unsigned char *VAR_1,
                            rc2_key *VAR_2)
{
    unsigned VAR_3, VAR_4, VAR_5, VAR_6;
    unsigned *VAR_7;
    int VAR_8;

    VAR_7 = VAR_2->xkey;

    VAR_3 = ((unsigned)VAR_0[7] << 8) + (unsigned)VAR_0[6];
    VAR_4 = ((unsigned)VAR_0[5] << 8) + (unsigned)VAR_0[4];
    VAR_5 = ((unsigned)VAR_0[3] << 8) + (unsigned)VAR_0[2];
    VAR_6 = ((unsigned)VAR_0[1] << 8) + (unsigned)VAR_0[0];

    for (VAR_8 = 15; VAR_8 >= 0; VAR_8--) {
        if (VAR_8 == 4 || VAR_8 == 10) {
            VAR_3 = (VAR_3 - VAR_7[VAR_4 & 63]) & 0xFFFF;
            VAR_4 = (VAR_4 - VAR_7[VAR_5 & 63]) & 0xFFFF;
            VAR_5 = (VAR_5 - VAR_7[VAR_6 & 63]) & 0xFFFF;
            VAR_6 = (VAR_6 - VAR_7[VAR_3 & 63]) & 0xFFFF;
        }

        VAR_3 = ((VAR_3 << 11) | (VAR_3 >> 5));
        VAR_3 = (VAR_3 - ((VAR_6 & ~VAR_4) + (VAR_5 & VAR_4) + VAR_7[4*VAR_8+3])) & 0xFFFF;

        VAR_4 = ((VAR_4 << 13) | (VAR_4 >> 3));
        VAR_4 = (VAR_4 - ((VAR_3 & ~VAR_5) + (VAR_6 & VAR_5) + VAR_7[4*VAR_8+2])) & 0xFFFF;

        VAR_5 = ((VAR_5 << 14) | (VAR_5 >> 2));
        VAR_5 = (VAR_5 - ((VAR_4 & ~VAR_6) + (VAR_3 & VAR_6) + VAR_7[4*VAR_8+1])) & 0xFFFF;

        VAR_6 = ((VAR_6 << 15) | (VAR_6 >> 1));
        VAR_6 = (VAR_6 - ((VAR_5 & ~VAR_3) + (VAR_4 & VAR_3) + VAR_7[4*VAR_8+0])) & 0xFFFF;
    }

    VAR_1[0] = (unsigned char)VAR_6;
    VAR_1[1] = (unsigned char)(VAR_6 >> 8);
    VAR_1[2] = (unsigned char)VAR_5;
    VAR_1[3] = (unsigned char)(VAR_5 >> 8);
    VAR_1[4] = (unsigned char)VAR_4;
    VAR_1[5] = (unsigned char)(VAR_4 >> 8);
    VAR_1[6] = (unsigned char)VAR_3;
    VAR_1[7] = (unsigned char)(VAR_3 >> 8);
}
