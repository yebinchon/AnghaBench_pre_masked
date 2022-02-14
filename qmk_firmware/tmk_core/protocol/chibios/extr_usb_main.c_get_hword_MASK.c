
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef unsigned int uint16_t ;



__attribute__((used)) static uint16_t FUNC_0(uint8_t *VAR_0) {
    uint16_t VAR_1;

    VAR_1 = (uint16_t)*VAR_0++;
    VAR_1 |= (uint16_t)*VAR_0 << 8U;
    return VAR_1;
}
