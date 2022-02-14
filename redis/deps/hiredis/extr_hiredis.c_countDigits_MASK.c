
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;



__attribute__((used)) static uint32_t FUNC_0(uint64_t VAR_0) {
  uint32_t VAR_1 = 1;
  for (;;) {
    if (VAR_0 < 10) return VAR_1;
    if (VAR_0 < 100) return VAR_1 + 1;
    if (VAR_0 < 1000) return VAR_1 + 2;
    if (VAR_0 < 10000) return VAR_1 + 3;
    VAR_0 /= 10000U;
    VAR_1 += 4;
  }
}
