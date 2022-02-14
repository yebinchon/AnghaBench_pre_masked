
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static inline uint32_t FUNC_0(void) {
  uint32_t VAR_0;
  __asm volatile("rsr.ccount %0" : "=a"(VAR_0));
  return VAR_0;
}
