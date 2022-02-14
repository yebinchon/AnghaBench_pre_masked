
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



bool FUNC_0(uint8_t VAR_0, uint8_t VAR_1) {
    VAR_0 &= 0xF;
    VAR_1 &= 0xF;

    return (VAR_0 & VAR_1) == VAR_1;
}
