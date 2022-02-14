
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static size_t FUNC_0(const uint8_t* VAR_0, size_t VAR_1)
{
    uint32_t VAR_2 = 0xffffffff;
    for (size_t VAR_3 = 1; VAR_3 < VAR_1; ++VAR_3) {
        VAR_2 = (VAR_2 << 8) | VAR_0[VAR_3];
        if (0x00000100 == (VAR_2 & 0xffffff00)) {
            return VAR_3 - 3;
        }
    }
    return 0;
}
