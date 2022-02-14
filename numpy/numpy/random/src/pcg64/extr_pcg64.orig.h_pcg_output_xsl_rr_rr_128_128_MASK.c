
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;
typedef unsigned int uint32_t ;
typedef unsigned int pcg128_t ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;

inline pcg128_t FUNC_1(pcg128_t VAR_0) {
  uint32_t VAR_1 = (uint32_t)(VAR_0 >> 122u);
  uint64_t VAR_2 = (uint64_t)(VAR_0 >> 64u);
  uint64_t VAR_3 = (uint64_t)VAR_0;
  uint64_t VAR_4 = VAR_2 ^ VAR_3;
  uint64_t VAR_5 = FUNC_0(VAR_4, VAR_1);
  uint64_t VAR_6 = FUNC_0(VAR_2, VAR_5 & 63u);
  return (((pcg128_t)VAR_6) << 64u) | VAR_5;
}
