
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static void FUNC_0(uint32_t *VAR_0, size_t VAR_1, bool VAR_2)
{
    for (int VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
        uint32_t VAR_4 = VAR_0[VAR_3];
        uint32_t VAR_5 = VAR_4 & 0xFF;
        uint32_t VAR_6 = (VAR_4 >> 8) & 0xFF;
        uint32_t VAR_7 = (VAR_4 >> 16) & 0xFF;
        uint32_t VAR_8 = (VAR_4 >> 24) & 0xFF;
        if (VAR_2)
            VAR_7 = VAR_6 = VAR_5 = (VAR_7 + VAR_6 + VAR_5) / 3;

        VAR_5 = VAR_5 * VAR_8 / 255;
        VAR_6 = VAR_6 * VAR_8 / 255;
        VAR_7 = VAR_7 * VAR_8 / 255;
        VAR_0[VAR_3] = VAR_5 | (VAR_6 << 8) | (VAR_7 << 16) | (VAR_8 << 24);
    }
}
