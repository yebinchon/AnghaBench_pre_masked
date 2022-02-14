
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int* fe51 ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(uint8_t *VAR_1, const fe51 VAR_2)
{
    uint64_t VAR_3 = VAR_2[0];
    uint64_t VAR_4 = VAR_2[1];
    uint64_t VAR_5 = VAR_2[2];
    uint64_t VAR_6 = VAR_2[3];
    uint64_t VAR_7 = VAR_2[4];
    uint64_t VAR_8;


    VAR_8 = (VAR_3 + 19) >> 51;
    VAR_8 = (VAR_4 + VAR_8) >> 51;
    VAR_8 = (VAR_5 + VAR_8) >> 51;
    VAR_8 = (VAR_6 + VAR_8) >> 51;
    VAR_8 = (VAR_7 + VAR_8) >> 51;


    VAR_3 += 19 * VAR_8;
    VAR_4 += VAR_3 >> 51; VAR_3 &= VAR_0;
    VAR_5 += VAR_4 >> 51; VAR_4 &= VAR_0;
    VAR_6 += VAR_5 >> 51; VAR_5 &= VAR_0;
    VAR_7 += VAR_6 >> 51; VAR_6 &= VAR_0;
                    VAR_7 &= VAR_0;


    VAR_1[0] = (uint8_t)(VAR_3 >> 0);
    VAR_1[1] = (uint8_t)(VAR_3 >> 8);
    VAR_1[2] = (uint8_t)(VAR_3 >> 16);
    VAR_1[3] = (uint8_t)(VAR_3 >> 24);
    VAR_1[4] = (uint8_t)(VAR_3 >> 32);
    VAR_1[5] = (uint8_t)(VAR_3 >> 40);
    VAR_1[6] = (uint8_t)((VAR_3 >> 48) | ((uint32_t)VAR_4 << 3));
    VAR_1[7] = (uint8_t)(VAR_4 >> 5);
    VAR_1[8] = (uint8_t)(VAR_4 >> 13);
    VAR_1[9] = (uint8_t)(VAR_4 >> 21);
    VAR_1[10] = (uint8_t)(VAR_4 >> 29);
    VAR_1[11] = (uint8_t)(VAR_4 >> 37);
    VAR_1[12] = (uint8_t)((VAR_4 >> 45) | ((uint32_t)VAR_5 << 6));
    VAR_1[13] = (uint8_t)(VAR_5 >> 2);
    VAR_1[14] = (uint8_t)(VAR_5 >> 10);
    VAR_1[15] = (uint8_t)(VAR_5 >> 18);
    VAR_1[16] = (uint8_t)(VAR_5 >> 26);
    VAR_1[17] = (uint8_t)(VAR_5 >> 34);
    VAR_1[18] = (uint8_t)(VAR_5 >> 42);
    VAR_1[19] = (uint8_t)((VAR_5 >> 50) | ((uint32_t)VAR_6 << 1));
    VAR_1[20] = (uint8_t)(VAR_6 >> 7);
    VAR_1[21] = (uint8_t)(VAR_6 >> 15);
    VAR_1[22] = (uint8_t)(VAR_6 >> 23);
    VAR_1[23] = (uint8_t)(VAR_6 >> 31);
    VAR_1[24] = (uint8_t)(VAR_6 >> 39);
    VAR_1[25] = (uint8_t)((VAR_6 >> 47) | ((uint32_t)VAR_7 << 4));
    VAR_1[26] = (uint8_t)(VAR_7 >> 4);
    VAR_1[27] = (uint8_t)(VAR_7 >> 12);
    VAR_1[28] = (uint8_t)(VAR_7 >> 20);
    VAR_1[29] = (uint8_t)(VAR_7 >> 28);
    VAR_1[30] = (uint8_t)(VAR_7 >> 36);
    VAR_1[31] = (uint8_t)(VAR_7 >> 44);
}
