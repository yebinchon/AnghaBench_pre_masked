
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct insn_state {TYPE_1__* regs; } ;
struct TYPE_2__ {int base; int offset; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char) ;

__attribute__((used)) static void FUNC_1(struct insn_state *VAR_1, unsigned char VAR_2, int VAR_3,
       int VAR_4)
{
 if (FUNC_0(VAR_2) &&
     VAR_1->regs[VAR_2].base == VAR_0) {
  VAR_1->regs[VAR_2].base = VAR_3;
  VAR_1->regs[VAR_2].offset = VAR_4;
 }
}
