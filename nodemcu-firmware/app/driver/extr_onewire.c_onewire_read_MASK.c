
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 scalar_t__ FUNC_0 (int) ;

uint8_t FUNC_1(uint8_t VAR_0) {
  uint8_t VAR_1;
  uint8_t VAR_2 = 0;

  for (VAR_1 = 0x01; VAR_1; VAR_1 <<= 1) {
   if (FUNC_0(VAR_0)) VAR_2 |= VAR_1;
  }
  return VAR_2;
}
