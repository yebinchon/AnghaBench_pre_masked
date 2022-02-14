
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ base; scalar_t__ offset; } ;
struct insn_state {scalar_t__ stack_size; TYPE_3__* regs; scalar_t__ drap; TYPE_1__ cfa; } ;
struct TYPE_7__ {scalar_t__ base; scalar_t__ offset; } ;
struct TYPE_10__ {TYPE_4__* regs; TYPE_2__ cfa; } ;
struct TYPE_9__ {scalar_t__ base; scalar_t__ offset; } ;
struct TYPE_8__ {scalar_t__ base; scalar_t__ offset; } ;


 int VAR_0 ;
 TYPE_5__ VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct insn_state *VAR_2)
{
 int VAR_3;

 if (VAR_2->cfa.base != VAR_1.cfa.base ||
     VAR_2->cfa.offset != VAR_1.cfa.offset ||
     VAR_2->stack_size != VAR_1.cfa.offset ||
     VAR_2->drap)
  return 1;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (VAR_2->regs[VAR_3].base != VAR_1.regs[VAR_3].base ||
      VAR_2->regs[VAR_3].offset != VAR_1.regs[VAR_3].offset)
   return 1;

 return 0;
}
