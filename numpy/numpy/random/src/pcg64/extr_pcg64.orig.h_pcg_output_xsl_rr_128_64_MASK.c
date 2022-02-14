
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef unsigned int pcg128_t ;


 int FUNC_0 (int,unsigned int) ;

inline uint64_t FUNC_1(pcg128_t VAR_0) {
  return FUNC_0(((uint64_t)(VAR_0 >> 64u)) ^ (uint64_t)VAR_0,
                     VAR_0 >> 122u);
}
