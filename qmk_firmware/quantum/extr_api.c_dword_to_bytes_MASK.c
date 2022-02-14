
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;



void FUNC_0(uint32_t VAR_0, uint8_t* VAR_1) {
    VAR_1[0] = (VAR_0 >> 24) & 0xFF;
    VAR_1[1] = (VAR_0 >> 16) & 0xFF;
    VAR_1[2] = (VAR_0 >> 8) & 0xFF;
    VAR_1[3] = (VAR_0 >> 0) & 0xFF;
}
