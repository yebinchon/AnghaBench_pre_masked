
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ulong32 ;
struct TYPE_3__ {int Nr; int* eK; int* dK; } ;
typedef TYPE_1__ aes_key ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,unsigned char const*) ;
 int FUNC_1 (int,int) ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 size_t FUNC_2 (int,int) ;
 int* VAR_7 ;
 int FUNC_3 (int) ;

int FUNC_4(const unsigned char *VAR_8, int VAR_9, int VAR_10, aes_key *VAR_11)
{
    int VAR_12, VAR_13;
    ulong32 VAR_14, *VAR_15;
    ulong32 *VAR_16;

    if (VAR_9 != 16 && VAR_9 != 24 && VAR_9 != 32) {
       return VAR_0;
    }

    if (VAR_10 != 0 && VAR_10 != (10 + ((VAR_9/8)-2)*2)) {
       return VAR_1;
    }

    VAR_11->Nr = 10 + ((VAR_9/8)-2)*2;


    VAR_12 = 0;
    VAR_15 = VAR_11->eK;
    FUNC_0(VAR_15[0], VAR_8 );
    FUNC_0(VAR_15[1], VAR_8 + 4);
    FUNC_0(VAR_15[2], VAR_8 + 8);
    FUNC_0(VAR_15[3], VAR_8 + 12);
    if (VAR_9 == 16) {
        VAR_13 = 44;
        for (;;) {
            VAR_14 = VAR_15[3];
            VAR_15[4] = VAR_15[0] ^ FUNC_3(VAR_14) ^ VAR_7[VAR_12];
            VAR_15[5] = VAR_15[1] ^ VAR_15[4];
            VAR_15[6] = VAR_15[2] ^ VAR_15[5];
            VAR_15[7] = VAR_15[3] ^ VAR_15[6];
            if (++VAR_12 == 10) {
               break;
            }
            VAR_15 += 4;
        }
    } else if (VAR_9 == 24) {
        VAR_13 = 52;
        FUNC_0(VAR_15[4], VAR_8 + 16);
        FUNC_0(VAR_15[5], VAR_8 + 20);
        for (;;) {
            VAR_14 = VAR_15[5];
            VAR_15[ 6] = VAR_15[ 0] ^ FUNC_3(VAR_14) ^ VAR_7[VAR_12];
            VAR_15[ 7] = VAR_15[ 1] ^ VAR_15[ 6];
            VAR_15[ 8] = VAR_15[ 2] ^ VAR_15[ 7];
            VAR_15[ 9] = VAR_15[ 3] ^ VAR_15[ 8];
            if (++VAR_12 == 8) {
                break;
            }
            VAR_15[10] = VAR_15[ 4] ^ VAR_15[ 9];
            VAR_15[11] = VAR_15[ 5] ^ VAR_15[10];
            VAR_15 += 6;
        }
    } else if (VAR_9 == 32) {
        VAR_13 = 60;
        FUNC_0(VAR_15[4], VAR_8 + 16);
        FUNC_0(VAR_15[5], VAR_8 + 20);
        FUNC_0(VAR_15[6], VAR_8 + 24);
        FUNC_0(VAR_15[7], VAR_8 + 28);
        for (;;) {
            VAR_14 = VAR_15[7];
            VAR_15[ 8] = VAR_15[ 0] ^ FUNC_3(VAR_14) ^ VAR_7[VAR_12];
            VAR_15[ 9] = VAR_15[ 1] ^ VAR_15[ 8];
            VAR_15[10] = VAR_15[ 2] ^ VAR_15[ 9];
            VAR_15[11] = VAR_15[ 3] ^ VAR_15[10];
            if (++VAR_12 == 7) {
                break;
            }
            VAR_14 = VAR_15[11];
            VAR_15[12] = VAR_15[ 4] ^ FUNC_3(FUNC_1(VAR_14, 8));
            VAR_15[13] = VAR_15[ 5] ^ VAR_15[12];
            VAR_15[14] = VAR_15[ 6] ^ VAR_15[13];
            VAR_15[15] = VAR_15[ 7] ^ VAR_15[14];
            VAR_15 += 8;
        }
    } else {
       VAR_13 = 4;
    }

    VAR_15 = VAR_11->dK;
    VAR_16 = VAR_11->eK + VAR_13 - 4;

    *VAR_15++ = *VAR_16++;
    *VAR_15++ = *VAR_16++;
    *VAR_15++ = *VAR_16++;
    *VAR_15 = *VAR_16;
    VAR_15 -= 3; VAR_16 -= 3;

    for (VAR_12 = 1; VAR_12 < VAR_11->Nr; VAR_12++) {
        VAR_16 -= 4;
        VAR_15 += 4;
        VAR_14 = VAR_16[0];
        VAR_15[0] =
            VAR_3[FUNC_2(VAR_14, 3)] ^
            VAR_4[FUNC_2(VAR_14, 2)] ^
            VAR_5[FUNC_2(VAR_14, 1)] ^
            VAR_6[FUNC_2(VAR_14, 0)];
        VAR_14 = VAR_16[1];
        VAR_15[1] =
            VAR_3[FUNC_2(VAR_14, 3)] ^
            VAR_4[FUNC_2(VAR_14, 2)] ^
            VAR_5[FUNC_2(VAR_14, 1)] ^
            VAR_6[FUNC_2(VAR_14, 0)];
        VAR_14 = VAR_16[2];
        VAR_15[2] =
            VAR_3[FUNC_2(VAR_14, 3)] ^
            VAR_4[FUNC_2(VAR_14, 2)] ^
            VAR_5[FUNC_2(VAR_14, 1)] ^
            VAR_6[FUNC_2(VAR_14, 0)];
        VAR_14 = VAR_16[3];
        VAR_15[3] =
            VAR_3[FUNC_2(VAR_14, 3)] ^
            VAR_4[FUNC_2(VAR_14, 2)] ^
            VAR_5[FUNC_2(VAR_14, 1)] ^
            VAR_6[FUNC_2(VAR_14, 0)];
    }

    VAR_16 -= 4;
    VAR_15 += 4;
    *VAR_15++ = *VAR_16++;
    *VAR_15++ = *VAR_16++;
    *VAR_15++ = *VAR_16++;
    *VAR_15 = *VAR_16;

    return VAR_2;
}
