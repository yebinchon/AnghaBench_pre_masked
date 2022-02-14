
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint64_t ;


 int FUNC_0 (int*,scalar_t__ const*,int) ;

uint64_t FUNC_1 (const void * VAR_0, int VAR_1, unsigned int VAR_2) {
    const uint64_t VAR_3 = 0xc6a4a7935bd1e995;
    const int VAR_4 = 47;
    uint64_t VAR_5 = VAR_2 ^ (VAR_1 * VAR_3);
    const uint8_t *VAR_6 = (const uint8_t *)VAR_0;
    const uint8_t *VAR_7 = VAR_6 + (VAR_1-(VAR_1&7));

    while(VAR_6 != VAR_7) {
        uint64_t VAR_8;





        VAR_8 = *((uint64_t*)VAR_6);
        VAR_8 *= VAR_3;
        VAR_8 ^= VAR_8 >> VAR_4;
        VAR_8 *= VAR_3;
        VAR_5 ^= VAR_8;
        VAR_5 *= VAR_3;
        VAR_6 += 8;
    }

    switch(VAR_1 & 7) {
    case 7: VAR_5 ^= (uint64_t)VAR_6[6] << 48;
    case 6: VAR_5 ^= (uint64_t)VAR_6[5] << 40;
    case 5: VAR_5 ^= (uint64_t)VAR_6[4] << 32;
    case 4: VAR_5 ^= (uint64_t)VAR_6[3] << 24;
    case 3: VAR_5 ^= (uint64_t)VAR_6[2] << 16;
    case 2: VAR_5 ^= (uint64_t)VAR_6[1] << 8;
    case 1: VAR_5 ^= (uint64_t)VAR_6[0];
            VAR_5 *= VAR_3;
    };

    VAR_5 ^= VAR_5 >> VAR_4;
    VAR_5 *= VAR_3;
    VAR_5 ^= VAR_5 >> VAR_4;
    return VAR_5;
}
