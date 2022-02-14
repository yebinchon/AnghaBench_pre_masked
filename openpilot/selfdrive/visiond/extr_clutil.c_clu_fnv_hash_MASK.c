
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;



uint64_t FUNC_0(const uint8_t *VAR_0, size_t VAR_1) {

  uint64_t VAR_2 = 0xcbf29ce484222325ULL;
  const uint8_t *VAR_3 = VAR_0;
  const uint8_t *VAR_4 = VAR_0 + VAR_1;
  while (VAR_3 < VAR_4) {
    VAR_2 ^= (uint64_t) *VAR_3++;
    VAR_2 += (VAR_2 << 1) + (VAR_2 << 4) + (VAR_2 << 5) +
        (VAR_2 << 7) + (VAR_2 << 8) + (VAR_2 << 40);
  }

  return VAR_2;
}
