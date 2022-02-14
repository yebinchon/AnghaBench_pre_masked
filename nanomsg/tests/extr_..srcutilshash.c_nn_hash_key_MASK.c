
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



uint32_t FUNC_0 (uint32_t VAR_0)
{


    VAR_0 = (VAR_0 ^ 61) ^ (VAR_0 >> 16);
    VAR_0 += VAR_0 << 3;
    VAR_0 = VAR_0 ^ (VAR_0 >> 4);
    VAR_0 = VAR_0 * 0x27d4eb2d;
    VAR_0 = VAR_0 ^ (VAR_0 >> 15);

    return VAR_0;
}
