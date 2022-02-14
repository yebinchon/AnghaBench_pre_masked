
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) __attribute__((always_inline)) static inline uint32_t FUNC_0(void) {
  uint32_t VAR_0;
  __asm__ __volatile__("rsr %0,ccount":"=a" (VAR_0));
  return VAR_0;
}
