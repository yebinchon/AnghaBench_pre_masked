
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t base; } ;
struct insn_state {TYPE_2__* regs; scalar_t__ drap; TYPE_1__ cfa; } ;
struct TYPE_4__ {size_t base; int offset; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct insn_state *VAR_2)
{
 if (VAR_2->cfa.base == VAR_0 && VAR_2->regs[VAR_0].base == VAR_1 &&
     VAR_2->regs[VAR_0].offset == -16)
  return 1;

 if (VAR_2->drap && VAR_2->regs[VAR_0].base == VAR_0)
  return 1;

 return 0;
}
