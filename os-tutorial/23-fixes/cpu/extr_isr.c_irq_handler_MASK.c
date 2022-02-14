
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int int_no; } ;
typedef TYPE_1__ registers_t ;
typedef int (* isr_t ) (TYPE_1__*) ;


 scalar_t__* VAR_0 ;
 int FUNC_0 (int,int) ;

void FUNC_1(registers_t *VAR_1) {


    if (VAR_1->int_no >= 40) FUNC_0(0xA0, 0x20);
    FUNC_0(0x20, 0x20);


    if (VAR_0[VAR_1->int_no] != 0) {
        isr_t VAR_2 = VAR_0[VAR_1->int_no];
        VAR_2(VAR_1);
    }
}
