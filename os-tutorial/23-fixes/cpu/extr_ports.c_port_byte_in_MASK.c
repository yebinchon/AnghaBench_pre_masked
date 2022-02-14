
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;



uint8_t FUNC_0 (uint16_t VAR_0) {
    uint8_t VAR_1;
    asm("in %%dx, %%al" : "=a" (VAR_1) : "d" (VAR_0));
    return VAR_1;
}
