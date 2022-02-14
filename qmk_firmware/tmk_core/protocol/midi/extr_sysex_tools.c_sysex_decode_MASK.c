
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;



uint16_t FUNC_0(uint8_t *VAR_0, const uint8_t *VAR_1, const uint16_t VAR_2) {
    uint16_t VAR_3 = VAR_2 / 8;
    uint16_t VAR_4, VAR_5;

    if (VAR_2 < 2) return 0;


    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        uint16_t VAR_6 = VAR_4 * 8;
        uint16_t VAR_7 = VAR_4 * 7;
        for (VAR_5 = 0; VAR_5 < 7; VAR_5++) {
            VAR_0[VAR_7 + VAR_5] = 0x7F & VAR_1[VAR_6 + VAR_5 + 1];
            VAR_0[VAR_7 + VAR_5] |= (0x80 & (VAR_1[VAR_6] << (1 + VAR_5)));
        }
    }
    uint8_t VAR_8 = VAR_2 % 8;
    if (VAR_8) {
        uint16_t VAR_9 = VAR_3 * 8;
        uint16_t VAR_10 = VAR_3 * 7;
        for (VAR_5 = 0; VAR_5 < (VAR_8 - 1); VAR_5++) {
            VAR_0[VAR_10 + VAR_5] = 0x7F & VAR_1[VAR_9 + VAR_5 + 1];
            VAR_0[VAR_10 + VAR_5] |= (0x80 & (VAR_1[VAR_9] << (1 + VAR_5)));
        }
        return VAR_3 * 7 + VAR_8 - 1;
    } else {
        return VAR_3 * 7;
    }
}
