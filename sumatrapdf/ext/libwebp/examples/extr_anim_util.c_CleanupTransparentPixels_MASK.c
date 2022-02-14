
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static void FUNC_0(uint32_t* VAR_0,
                                     uint32_t VAR_1, uint32_t VAR_2) {
  const uint32_t* const VAR_3 = VAR_0 + VAR_1 * VAR_2;
  while (VAR_0 < VAR_3) {
    const uint8_t VAR_4 = (*VAR_0 >> 24) & 0xff;
    if (VAR_4 == 0) {
      *VAR_0 = 0;
    }
    ++VAR_0;
  }
}
