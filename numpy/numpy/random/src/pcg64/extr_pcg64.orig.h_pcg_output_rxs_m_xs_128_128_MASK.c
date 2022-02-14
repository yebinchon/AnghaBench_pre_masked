
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int pcg128_t ;


 unsigned int FUNC_0 (unsigned long long,unsigned long long) ;

inline pcg128_t FUNC_1(pcg128_t VAR_0) {
  pcg128_t VAR_1 =
      ((VAR_0 >> ((VAR_0 >> 122u) + 6u)) ^ VAR_0) *
      (FUNC_0(17766728186571221404ULL, 12605985483714917081ULL));

  return (VAR_1 >> 86u) ^ VAR_1;
}
