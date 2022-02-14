
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef unsigned long long uint64_t ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (char const*) ;

uint64_t FUNC_2(const char* VAR_0) {
  size_t VAR_1 = FUNC_1(VAR_0);
  FUNC_0(VAR_1 < 128);
  uint64_t VAR_2 = 0;
  for (int VAR_3=127; VAR_3>=0; VAR_3--) {
    VAR_2 *= 65599ULL;
    VAR_2 += (uint8_t)VAR_0[VAR_3<VAR_1 ? VAR_1-1-VAR_3 : VAR_1];
  }
  return VAR_2 ^ (VAR_2 >> 32);
}
