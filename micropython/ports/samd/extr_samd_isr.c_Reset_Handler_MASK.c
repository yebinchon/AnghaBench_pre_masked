
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {unsigned long CPACR; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

void FUNC_2(void) {




    __asm volatile ("ldr r0, =_estack");
    __asm volatile ("mov sp, r0");


    for (uint32_t *VAR_7 = &VAR_5, *VAR_8 = &VAR_4; VAR_8 < &VAR_2;) {
        *VAR_8++ = *VAR_7++;
    }

    for (uint32_t *VAR_9 = &VAR_3; VAR_9 < &VAR_1;) {
        *VAR_9++ = 0;
    }
    *((volatile uint32_t*)0xe000ed08) = (uint32_t)&VAR_6;


    *((volatile uint32_t*)0xe000ed14) |= 1 << 9;


    FUNC_0();


    FUNC_1();


    for (;;) {
    }
}
