
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint16_t ;



void FUNC_0(uint8_t *VAR_0, uint64_t VAR_1, uint8_t VAR_2, uint16_t VAR_3) {



    VAR_0[0] = 0xA7;
    VAR_0[1] = VAR_2 << 4;
    VAR_0[2] = VAR_3 >> 8;
    VAR_0[3] = VAR_3;
    VAR_0[4] = VAR_1 >> 16;
    VAR_0[5] = VAR_1 >> 8;
    VAR_0[6] = VAR_1;






    uint8_t VAR_4 = 0;
    for(uint8_t VAR_5 = 0; VAR_5 < 7; VAR_5++) {
        VAR_4 = VAR_4 ^ VAR_0[VAR_5] ^ (VAR_0[VAR_5] >> 4);
    }
    VAR_4 &= 0b1111;


    VAR_0[1] |= VAR_4;



    for(uint8_t VAR_6 = 1; VAR_6 < 7; VAR_6++) {
        VAR_0[VAR_6] ^= VAR_0[VAR_6-1];
    }

}
