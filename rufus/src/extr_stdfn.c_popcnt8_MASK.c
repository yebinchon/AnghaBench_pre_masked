
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



uint8_t FUNC_0(uint8_t VAR_0)
{
 static const uint8_t VAR_1[16] = {
  0, 1, 1, 2, 1, 2, 2, 3,
  1, 2, 2, 3, 2, 3, 3, 4
 };
 return VAR_1[VAR_0 & 0x0F] + VAR_1[VAR_0 >> 4];
}
