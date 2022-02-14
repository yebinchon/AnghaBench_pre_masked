
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;



uint8_t FUNC_0(uint16_t VAR_0) {
    uint8_t VAR_1 = 0;
    if (VAR_0 >> 8) {
        VAR_0 >>= 8;
        VAR_1 += 8;
    }
    if (VAR_0 >> 4) {
        VAR_0 >>= 4;
        VAR_1 += 4;
    }
    if (VAR_0 >> 2) {
        VAR_0 >>= 2;
        VAR_1 += 2;
    }
    if (VAR_0 >> 1) {
        VAR_0 >>= 1;
        VAR_1 += 1;
    }
    return VAR_1;
}
