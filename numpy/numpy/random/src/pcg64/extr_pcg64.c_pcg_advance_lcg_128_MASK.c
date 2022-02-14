
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pcg128_t ;



pcg128_t FUNC_0(pcg128_t VAR_0, pcg128_t VAR_1, pcg128_t VAR_2,
                             pcg128_t VAR_3) {
  pcg128_t VAR_4 = 1u;
  pcg128_t VAR_5 = 0u;
  while (VAR_1 > 0) {
    if (VAR_1 & 1) {
      VAR_4 *= VAR_2;
      VAR_5 = VAR_5 * VAR_2 + VAR_3;
    }
    VAR_3 = (VAR_2 + 1) * VAR_3;
    VAR_2 *= VAR_2;
    VAR_1 /= 2;
  }
  return VAR_4 * VAR_0 + VAR_5;
}
