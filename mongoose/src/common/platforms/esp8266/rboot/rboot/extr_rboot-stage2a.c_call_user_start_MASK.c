
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;



void FUNC_0(uint32 VAR_0) {
 __asm volatile (
  "mov a15, a0\n"
  "call0 load_rom\n"
  "mov a0, a15\n"
  "jx a2\n"
 );
}
