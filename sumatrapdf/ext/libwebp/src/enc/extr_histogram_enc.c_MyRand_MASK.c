
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;
typedef scalar_t__ uint32_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static uint32_t FUNC_1(uint32_t* const VAR_0) {
  *VAR_0 = (uint32_t)(((uint64_t)(*VAR_0) * 48271u) % 2147483647u);
  FUNC_0(*VAR_0 > 0);
  return *VAR_0;
}
