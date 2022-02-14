
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static uint32_t FUNC_0(uint32_t VAR_0, const uint8_t VAR_1[], size_t VAR_2,
                        uint32_t* const VAR_3) {
  uint32_t VAR_4 = 0;
  int VAR_5 = 1;
  while (*VAR_3 < 8 * VAR_2 && VAR_5 <= VAR_0) {
    const uint8_t VAR_6 = 1u << (*VAR_3 & 7);
    VAR_4 = (VAR_4 << 1) | !!(VAR_1[*VAR_3 >> 3] & VAR_6);
    VAR_5 <<= 1;
    ++*VAR_3;
  }
  return VAR_4 % (VAR_0 + 1);
}
