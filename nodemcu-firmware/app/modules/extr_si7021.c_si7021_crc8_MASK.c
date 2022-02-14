
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



uint8_t FUNC_0(uint8_t VAR_0, uint8_t *VAR_1, uint8_t VAR_2) {
 while (VAR_2--) {
  VAR_0 ^= *VAR_1++;
  for (uint8_t VAR_3 = 0; VAR_3 < 8; VAR_3++) {
   if (VAR_0 & 0x80) {
    VAR_0 = (VAR_0 << 1) ^ 0x31;
   } else VAR_0 <<= 1;
  }
 }
 return VAR_0;
}
