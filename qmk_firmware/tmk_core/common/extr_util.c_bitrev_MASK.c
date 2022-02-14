
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



uint8_t FUNC_0(uint8_t VAR_0) {
    VAR_0 = (VAR_0 & 0x0f) << 4 | (VAR_0 & 0xf0) >> 4;
    VAR_0 = (VAR_0 & 0b00110011) << 2 | (VAR_0 & 0b11001100) >> 2;
    VAR_0 = (VAR_0 & 0b01010101) << 1 | (VAR_0 & 0b10101010) >> 1;
    return VAR_0;
}
