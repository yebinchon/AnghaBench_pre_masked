
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static __attribute__((always_inline)) inline unsigned int FUNC_0(void) {
  unsigned VAR_0;

  asm volatile(".byte 0xc7,0xf8,0x00,0x00,0x00,0x00" : "=a"(VAR_0) : "a"(-1UL) : "memory");
  return VAR_0;
}
