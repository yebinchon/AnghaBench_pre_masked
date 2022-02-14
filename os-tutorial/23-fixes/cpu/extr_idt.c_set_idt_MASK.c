
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int idt_gate_t ;
struct TYPE_2__ {int limit; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

void FUNC_0() {
    VAR_2.base = (uint32_t) &VAR_1;
    VAR_2.limit = VAR_0 * sizeof(idt_gate_t) - 1;

    asm volatile("lidtl (%0)" : : "r" (&VAR_2));
}
