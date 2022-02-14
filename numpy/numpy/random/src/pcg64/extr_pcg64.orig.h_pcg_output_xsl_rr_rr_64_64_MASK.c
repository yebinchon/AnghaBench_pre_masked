
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;
typedef unsigned int uint32_t ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;

inline uint64_t FUNC_1(uint64_t VAR_0) {
  uint32_t VAR_1 = (uint32_t)(VAR_0 >> 59u);
  uint32_t VAR_2 = (uint32_t)(VAR_0 >> 32u);
  uint32_t VAR_3 = (uint32_t)VAR_0;
  uint32_t VAR_4 = VAR_2 ^ VAR_3;
  uint32_t VAR_5 = FUNC_0(VAR_4, VAR_1);
  uint32_t VAR_6 = FUNC_0(VAR_2, VAR_5 & 31u);
  return (((uint64_t)VAR_6) << 32u) | VAR_5;
}
