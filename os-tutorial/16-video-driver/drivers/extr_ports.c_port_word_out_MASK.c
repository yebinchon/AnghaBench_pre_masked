
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0 (unsigned short VAR_0, unsigned short VAR_1) {
    __asm__("out %%ax, %%dx" : : "a" (VAR_1), "d" (VAR_0));
}
