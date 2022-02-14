
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int asm_label; struct TYPE_4__* next; } ;
typedef TYPE_1__ Sym ;


 int FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;

void FUNC_1(Sym *VAR_1) {
 VAR_1->next = VAR_0;
 FUNC_0 (VAR_1->asm_label);
 VAR_0 = VAR_1;
}
