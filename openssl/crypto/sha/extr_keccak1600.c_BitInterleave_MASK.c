
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static uint64_t FUNC_0(uint64_t VAR_1)
{
    if (VAR_0) {
        uint32_t VAR_2 = (uint32_t)(VAR_1 >> 32), VAR_3 = (uint32_t)VAR_1;
        uint32_t VAR_4, VAR_5;

        VAR_4 = VAR_3 & 0x55555555;
        VAR_4 |= VAR_4 >> 1; VAR_4 &= 0x33333333;
        VAR_4 |= VAR_4 >> 2; VAR_4 &= 0x0f0f0f0f;
        VAR_4 |= VAR_4 >> 4; VAR_4 &= 0x00ff00ff;
        VAR_4 |= VAR_4 >> 8; VAR_4 &= 0x0000ffff;

        VAR_5 = VAR_2 & 0x55555555;
        VAR_5 |= VAR_5 >> 1; VAR_5 &= 0x33333333;
        VAR_5 |= VAR_5 >> 2; VAR_5 &= 0x0f0f0f0f;
        VAR_5 |= VAR_5 >> 4; VAR_5 &= 0x00ff00ff;
        VAR_5 |= VAR_5 >> 8; VAR_5 <<= 16;

        VAR_3 &= 0xaaaaaaaa;
        VAR_3 |= VAR_3 << 1; VAR_3 &= 0xcccccccc;
        VAR_3 |= VAR_3 << 2; VAR_3 &= 0xf0f0f0f0;
        VAR_3 |= VAR_3 << 4; VAR_3 &= 0xff00ff00;
        VAR_3 |= VAR_3 << 8; VAR_3 >>= 16;

        VAR_2 &= 0xaaaaaaaa;
        VAR_2 |= VAR_2 << 1; VAR_2 &= 0xcccccccc;
        VAR_2 |= VAR_2 << 2; VAR_2 &= 0xf0f0f0f0;
        VAR_2 |= VAR_2 << 4; VAR_2 &= 0xff00ff00;
        VAR_2 |= VAR_2 << 8; VAR_2 &= 0xffff0000;

        VAR_1 = ((uint64_t)(VAR_2 | VAR_3) << 32) | (VAR_5 | VAR_4);
    }

    return VAR_1;
}
