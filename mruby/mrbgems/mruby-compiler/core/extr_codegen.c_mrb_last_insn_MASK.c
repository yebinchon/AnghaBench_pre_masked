
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mrb_insn_data {int insn; } ;
struct TYPE_3__ {size_t pc; size_t lastpc; int * iseq; } ;
typedef TYPE_1__ codegen_scope ;


 int VAR_0 ;
 struct mrb_insn_data FUNC_0 (int *) ;

__attribute__((used)) static struct mrb_insn_data
FUNC_1(codegen_scope *VAR_1)
{
  if (VAR_1->pc == VAR_1->lastpc) {
    struct mrb_insn_data VAR_2;

    VAR_2.insn = VAR_0;
    return VAR_2;
  }
  return FUNC_0(&VAR_1->iseq[VAR_1->lastpc]);
}
