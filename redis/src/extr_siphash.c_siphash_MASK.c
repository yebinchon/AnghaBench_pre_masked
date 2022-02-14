
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int const*) ;

uint64_t FUNC_2(const uint8_t *VAR_1, const size_t VAR_2, const uint8_t *VAR_3) {

    uint64_t VAR_4;
    uint8_t *VAR_5 = (uint8_t*) &VAR_4;

    uint64_t VAR_6 = 0x736f6d6570736575ULL;
    uint64_t VAR_7 = 0x646f72616e646f6dULL;
    uint64_t VAR_8 = 0x6c7967656e657261ULL;
    uint64_t VAR_9 = 0x7465646279746573ULL;
    uint64_t VAR_10 = FUNC_1(VAR_3);
    uint64_t VAR_11 = FUNC_1(VAR_3 + 8);
    uint64_t VAR_12;
    const uint8_t *VAR_13 = VAR_1 + VAR_2 - (VAR_2 % sizeof(uint64_t));
    const int VAR_14 = VAR_2 & 7;
    uint64_t VAR_15 = ((uint64_t)VAR_2) << 56;
    VAR_9 ^= VAR_11;
    VAR_8 ^= VAR_10;
    VAR_7 ^= VAR_11;
    VAR_6 ^= VAR_10;

    for (; VAR_1 != VAR_13; VAR_1 += 8) {
        VAR_12 = FUNC_1(VAR_1);
        VAR_9 ^= VAR_12;

        VAR_0;

        VAR_6 ^= VAR_12;
    }

    switch (VAR_14) {
    case 7: VAR_15 |= ((uint64_t)VAR_1[6]) << 48;
    case 6: VAR_15 |= ((uint64_t)VAR_1[5]) << 40;
    case 5: VAR_15 |= ((uint64_t)VAR_1[4]) << 32;
    case 4: VAR_15 |= ((uint64_t)VAR_1[3]) << 24;
    case 3: VAR_15 |= ((uint64_t)VAR_1[2]) << 16;
    case 2: VAR_15 |= ((uint64_t)VAR_1[1]) << 8;
    case 1: VAR_15 |= ((uint64_t)VAR_1[0]); break;
    case 0: break;
    }

    VAR_9 ^= VAR_15;

    VAR_0;

    VAR_6 ^= VAR_15;
    VAR_8 ^= 0xff;

    VAR_0;
    VAR_0;

    VAR_15 = VAR_6 ^ VAR_7 ^ VAR_8 ^ VAR_9;

    FUNC_0(VAR_5, VAR_15);
    return VAR_4;



}
