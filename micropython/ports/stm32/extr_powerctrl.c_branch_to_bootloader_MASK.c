
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static __attribute__((naked)) void FUNC_0(uint32_t VAR_0, uint32_t VAR_1) {
    __asm volatile (
        "ldr r2, [r1, #0]\n"
        "msr msp, r2\n"
        "ldr r2, [r1, #4]\n"
        "bx r2\n"
    );
}
