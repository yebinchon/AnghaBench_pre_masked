
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static void FUNC_0(unsigned char *VAR_0, int VAR_1, int VAR_2,
                          int VAR_3, unsigned char *VAR_4, size_t VAR_5,
                          int VAR_6, int VAR_7, uint32_t VAR_8)
{
    const unsigned int VAR_9 = (VAR_8 >> 24) & 0xff;
    const unsigned int VAR_10 = (VAR_8 >> 16) & 0xff;
    const unsigned int VAR_11 = (VAR_8 >> 8) & 0xff;
    const unsigned int VAR_12 = 0xff - (VAR_8 & 0xff);

    VAR_4 += VAR_7 * VAR_5 + VAR_6 * 4;

    for (int VAR_13 = 0; VAR_13 < VAR_2; VAR_13++, VAR_4 += VAR_5, VAR_0 += VAR_3) {
        uint32_t *VAR_14 = (uint32_t *) VAR_4;
        for (int VAR_15 = 0; VAR_15 < VAR_1; VAR_15++) {
            const unsigned int VAR_16 = VAR_0[VAR_15];
            int VAR_17 = (VAR_9 * VAR_12 * VAR_16);
            int VAR_18 = (VAR_10 * VAR_12 * VAR_16);
            int VAR_19 = (VAR_11 * VAR_12 * VAR_16);
            int VAR_20 = VAR_12 * VAR_16;
            uint32_t VAR_21 = VAR_14[VAR_15];
            unsigned int VAR_22 = VAR_21 & 0xFF;
            unsigned int VAR_23 = (VAR_21 >> 8) & 0xFF;
            unsigned int VAR_24 = (VAR_21 >> 16) & 0xFF;
            unsigned int VAR_25 = (VAR_21 >> 24) & 0xFF;
            VAR_22 = (VAR_19 + VAR_22 * (255 * 255 - VAR_20)) / (255 * 255);
            VAR_23 = (VAR_18 + VAR_23 * (255 * 255 - VAR_20)) / (255 * 255);
            VAR_24 = (VAR_17 + VAR_24 * (255 * 255 - VAR_20)) / (255 * 255);
            VAR_25 = (VAR_20 * 255 + VAR_25 * (255 * 255 - VAR_20)) / (255 * 255);
            VAR_14[VAR_15] = VAR_22 | (VAR_23 << 8) | (VAR_24 << 16) | (VAR_25 << 24);
        }
    }
}
