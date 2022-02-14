
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;
typedef int* fe ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(uint8_t *VAR_2, const fe VAR_3)
{
    int32_t VAR_4 = VAR_3[0];
    int32_t VAR_5 = VAR_3[1];
    int32_t VAR_6 = VAR_3[2];
    int32_t VAR_7 = VAR_3[3];
    int32_t VAR_8 = VAR_3[4];
    int32_t VAR_9 = VAR_3[5];
    int32_t VAR_10 = VAR_3[6];
    int32_t VAR_11 = VAR_3[7];
    int32_t VAR_12 = VAR_3[8];
    int32_t VAR_13 = VAR_3[9];
    int32_t VAR_14;

    VAR_14 = (19 * VAR_13 + (((int32_t) 1) << 24)) >> 25;
    VAR_14 = (VAR_4 + VAR_14) >> 26;
    VAR_14 = (VAR_5 + VAR_14) >> 25;
    VAR_14 = (VAR_6 + VAR_14) >> 26;
    VAR_14 = (VAR_7 + VAR_14) >> 25;
    VAR_14 = (VAR_8 + VAR_14) >> 26;
    VAR_14 = (VAR_9 + VAR_14) >> 25;
    VAR_14 = (VAR_10 + VAR_14) >> 26;
    VAR_14 = (VAR_11 + VAR_14) >> 25;
    VAR_14 = (VAR_12 + VAR_14) >> 26;
    VAR_14 = (VAR_13 + VAR_14) >> 25;


    VAR_4 += 19 * VAR_14;


    VAR_5 += VAR_4 >> 26; VAR_4 &= VAR_1;
    VAR_6 += VAR_5 >> 25; VAR_5 &= VAR_0;
    VAR_7 += VAR_6 >> 26; VAR_6 &= VAR_1;
    VAR_8 += VAR_7 >> 25; VAR_7 &= VAR_0;
    VAR_9 += VAR_8 >> 26; VAR_8 &= VAR_1;
    VAR_10 += VAR_9 >> 25; VAR_9 &= VAR_0;
    VAR_11 += VAR_10 >> 26; VAR_10 &= VAR_1;
    VAR_12 += VAR_11 >> 25; VAR_11 &= VAR_0;
    VAR_13 += VAR_12 >> 26; VAR_12 &= VAR_1;
                    VAR_13 &= VAR_0;
    VAR_2[ 0] = (uint8_t) (VAR_4 >> 0);
    VAR_2[ 1] = (uint8_t) (VAR_4 >> 8);
    VAR_2[ 2] = (uint8_t) (VAR_4 >> 16);
    VAR_2[ 3] = (uint8_t)((VAR_4 >> 24) | ((uint32_t)(VAR_5) << 2));
    VAR_2[ 4] = (uint8_t) (VAR_5 >> 6);
    VAR_2[ 5] = (uint8_t) (VAR_5 >> 14);
    VAR_2[ 6] = (uint8_t)((VAR_5 >> 22) | ((uint32_t)(VAR_6) << 3));
    VAR_2[ 7] = (uint8_t) (VAR_6 >> 5);
    VAR_2[ 8] = (uint8_t) (VAR_6 >> 13);
    VAR_2[ 9] = (uint8_t)((VAR_6 >> 21) | ((uint32_t)(VAR_7) << 5));
    VAR_2[10] = (uint8_t) (VAR_7 >> 3);
    VAR_2[11] = (uint8_t) (VAR_7 >> 11);
    VAR_2[12] = (uint8_t)((VAR_7 >> 19) | ((uint32_t)(VAR_8) << 6));
    VAR_2[13] = (uint8_t) (VAR_8 >> 2);
    VAR_2[14] = (uint8_t) (VAR_8 >> 10);
    VAR_2[15] = (uint8_t) (VAR_8 >> 18);
    VAR_2[16] = (uint8_t) (VAR_9 >> 0);
    VAR_2[17] = (uint8_t) (VAR_9 >> 8);
    VAR_2[18] = (uint8_t) (VAR_9 >> 16);
    VAR_2[19] = (uint8_t)((VAR_9 >> 24) | ((uint32_t)(VAR_10) << 1));
    VAR_2[20] = (uint8_t) (VAR_10 >> 7);
    VAR_2[21] = (uint8_t) (VAR_10 >> 15);
    VAR_2[22] = (uint8_t)((VAR_10 >> 23) | ((uint32_t)(VAR_11) << 3));
    VAR_2[23] = (uint8_t) (VAR_11 >> 5);
    VAR_2[24] = (uint8_t) (VAR_11 >> 13);
    VAR_2[25] = (uint8_t)((VAR_11 >> 21) | ((uint32_t)(VAR_12) << 4));
    VAR_2[26] = (uint8_t) (VAR_12 >> 4);
    VAR_2[27] = (uint8_t) (VAR_12 >> 12);
    VAR_2[28] = (uint8_t)((VAR_12 >> 20) | ((uint32_t)(VAR_13) << 6));
    VAR_2[29] = (uint8_t) (VAR_13 >> 2);
    VAR_2[30] = (uint8_t) (VAR_13 >> 10);
    VAR_2[31] = (uint8_t) (VAR_13 >> 18);
}
