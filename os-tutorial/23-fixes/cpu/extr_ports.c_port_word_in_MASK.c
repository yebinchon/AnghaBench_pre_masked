
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;



uint16_t FUNC_0 (uint16_t VAR_0) {
    uint16_t VAR_1;
    asm("in %%dx, %%ax" : "=a" (VAR_1) : "d" (VAR_0));
    return VAR_1;
}
