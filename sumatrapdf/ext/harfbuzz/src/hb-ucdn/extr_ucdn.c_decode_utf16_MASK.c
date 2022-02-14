
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static uint32_t FUNC_0(const unsigned short **VAR_0)
{
    const unsigned short *VAR_1 = *VAR_0;

    if (VAR_1[0] < 0xd800 || VAR_1[0] > 0xdc00) {
        *VAR_0 += 1;
        return (uint32_t)VAR_1[0];
    } else {
        *VAR_0 += 2;
        return 0x10000 + ((uint32_t)VAR_1[1] - 0xdc00) +
            (((uint32_t)VAR_1[0] - 0xd800) << 10);
    }
}
