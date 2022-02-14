
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



uint32_t FUNC_0(uint32_t VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
    uint32_t VAR_3 = VAR_2 - VAR_1;
    if (VAR_3 == 0xffffffff) {
      return VAR_0;
    }
    return VAR_1 + VAR_0 % (VAR_3 + 1);
}
