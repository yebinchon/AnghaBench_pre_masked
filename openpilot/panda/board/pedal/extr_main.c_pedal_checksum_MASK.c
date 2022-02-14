
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



uint8_t FUNC_0(uint8_t *VAR_0, int VAR_1) {
  uint8_t VAR_2 = 0xFF;
  uint8_t VAR_3 = 0xD5;
  int VAR_4, VAR_5;
  for (VAR_4 = VAR_1 - 1; VAR_4 >= 0; VAR_4--) {
    VAR_2 ^= VAR_0[VAR_4];
    for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
      if ((VAR_2 & 0x80U) != 0U) {
        VAR_2 = (uint8_t)((VAR_2 << 1) ^ VAR_3);
      }
      else {
        VAR_2 <<= 1;
      }
    }
  }
  return VAR_2;
}
