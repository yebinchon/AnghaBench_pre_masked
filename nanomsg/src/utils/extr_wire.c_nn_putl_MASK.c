
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;



void FUNC_0 (uint8_t *VAR_0, uint32_t VAR_1)
{
    VAR_0 [0] = (uint8_t) (((VAR_1) >> 24) & 0xff);
    VAR_0 [1] = (uint8_t) (((VAR_1) >> 16) & 0xff);
    VAR_0 [2] = (uint8_t) (((VAR_1) >> 8) & 0xff);
    VAR_0 [3] = (uint8_t) (VAR_1 & 0xff);
}
