
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;



uint16_t FUNC_0(uint8_t *VAR_0, const uint8_t *VAR_1, const uint16_t VAR_2) {
    uint16_t VAR_3 = VAR_2 / 7;
    uint16_t VAR_4, VAR_5;


    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        uint16_t VAR_6 = VAR_4 * 8;
        uint16_t VAR_7 = VAR_4 * 7;
        VAR_0[VAR_6] = 0;
        for (VAR_5 = 0; VAR_5 < 7; VAR_5++) {
            uint8_t VAR_8 = VAR_1[VAR_7 + VAR_5];
            VAR_0[VAR_6] |= (0x80 & VAR_8) >> (1 + VAR_5);
            VAR_0[VAR_6 + 1 + VAR_5] = 0x7F & VAR_8;
        }
    }


    uint8_t VAR_9 = VAR_2 % 7;
    if (VAR_9) {
        uint16_t VAR_10 = VAR_3 * 8;
        uint16_t VAR_11 = VAR_3 * 7;
        VAR_0[VAR_10] = 0;
        for (VAR_5 = 0; VAR_5 < VAR_9; VAR_5++) {
            uint8_t VAR_12 = VAR_1[VAR_11 + VAR_5];
            VAR_0[VAR_10] |= (0x80 & VAR_12) >> (1 + VAR_5);
            VAR_0[VAR_10 + 1 + VAR_5] = 0x7F & VAR_12;
        }
        return VAR_10 + VAR_9 + 1;
    } else {
        return VAR_3 * 8;
    }
}
