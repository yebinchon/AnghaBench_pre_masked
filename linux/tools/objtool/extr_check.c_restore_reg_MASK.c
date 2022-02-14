
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct insn_state {TYPE_1__* regs; } ;
struct TYPE_2__ {scalar_t__ offset; int base; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct insn_state *VAR_1, unsigned char VAR_2)
{
 VAR_1->regs[VAR_2].base = VAR_0;
 VAR_1->regs[VAR_2].offset = 0;
}
