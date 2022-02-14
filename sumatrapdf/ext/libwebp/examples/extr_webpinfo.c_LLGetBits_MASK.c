
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef size_t uint32_t ;



__attribute__((used)) static int FUNC_0(const uint8_t* const VAR_0, size_t VAR_1, size_t VAR_2,
                     int* VAR_3, uint64_t* const VAR_4) {
  uint32_t VAR_5 = 0;
  *VAR_3 = 0;
  while (VAR_5 < VAR_2) {
    const uint64_t VAR_6 = (*VAR_4)++;
    if ((VAR_6 >> 3) >= VAR_1) {
      return 0;
    } else {
      const int VAR_7 = !!(VAR_0[VAR_6 >> 3] & (1 << ((VAR_6 & 7))));
      *VAR_3 = *VAR_3 | (VAR_7 << VAR_5);
      ++VAR_5;
    }
  }
  return 1;
}
