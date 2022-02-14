
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (int,unsigned int) ;

inline uint32_t FUNC_1(uint64_t VAR_0) {
  return FUNC_0(((uint32_t)(VAR_0 >> 32u)) ^ (uint32_t)VAR_0,
                     VAR_0 >> 59u);
}
