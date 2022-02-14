
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int offset; int base; } ;
struct cfi_state {TYPE_2__* regs; TYPE_1__ cfa; } ;
struct TYPE_4__ {int offset; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_0(struct cfi_state *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_4->regs[VAR_5].base = VAR_3;
  VAR_4->regs[VAR_5].offset = 0;
 }


 VAR_4->cfa.base = VAR_2;
 VAR_4->cfa.offset = 8;


 VAR_4->regs[16].base = VAR_0;
 VAR_4->regs[16].offset = -8;
}
