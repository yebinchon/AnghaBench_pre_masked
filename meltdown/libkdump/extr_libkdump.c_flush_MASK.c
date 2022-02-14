
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(void *VAR_0) {
  asm volatile("clflush 0(%0)\n" : : "c"(VAR_0) : "rax");
}
