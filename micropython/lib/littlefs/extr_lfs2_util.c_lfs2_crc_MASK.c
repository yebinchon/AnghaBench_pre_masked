
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;



uint32_t FUNC_0(uint32_t VAR_0, const void *VAR_1, size_t VAR_2) {
    static const uint32_t VAR_3[16] = {
        0x00000000, 0x1db71064, 0x3b6e20c8, 0x26d930ac,
        0x76dc4190, 0x6b6b51f4, 0x4db26158, 0x5005713c,
        0xedb88320, 0xf00f9344, 0xd6d6a3e8, 0xcb61b38c,
        0x9b64c2b0, 0x86d3d2d4, 0xa00ae278, 0xbdbdf21c,
    };

    const uint8_t *VAR_4 = VAR_1;

    for (size_t VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
        VAR_0 = (VAR_0 >> 4) ^ VAR_3[(VAR_0 ^ (VAR_4[VAR_5] >> 0)) & 0xf];
        VAR_0 = (VAR_0 >> 4) ^ VAR_3[(VAR_0 ^ (VAR_4[VAR_5] >> 4)) & 0xf];
    }

    return VAR_0;
}
