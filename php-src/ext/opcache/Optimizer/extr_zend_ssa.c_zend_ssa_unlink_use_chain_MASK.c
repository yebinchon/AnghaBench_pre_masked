
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_4__* ops; TYPE_1__* vars; } ;
typedef TYPE_2__ zend_ssa ;
struct TYPE_7__ {int result_use; int res_use_chain; int op1_use; int op1_use_chain; int op2_use; int op2_use_chain; } ;
struct TYPE_5__ {int use_chain; } ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (TYPE_4__*,int,int) ;

int FUNC_2(zend_ssa *VAR_0, int VAR_1, int VAR_2)
{
 if (VAR_0->vars[VAR_2].use_chain == VAR_1) {
  VAR_0->vars[VAR_2].use_chain = FUNC_1(VAR_0->ops, VAR_2, VAR_1);
  return 1;
 } else {
  int VAR_3 = VAR_0->vars[VAR_2].use_chain;

  while (VAR_3 >= 0) {
   if (VAR_0->ops[VAR_3].result_use == VAR_2) {
    if (VAR_0->ops[VAR_3].res_use_chain == VAR_1) {
     VAR_0->ops[VAR_3].res_use_chain = FUNC_1(VAR_0->ops, VAR_2, VAR_1);
     return 1;
    } else {
     VAR_3 = VAR_0->ops[VAR_3].res_use_chain;
    }
   } else if (VAR_0->ops[VAR_3].op1_use == VAR_2) {
    if (VAR_0->ops[VAR_3].op1_use_chain == VAR_1) {
     VAR_0->ops[VAR_3].op1_use_chain = FUNC_1(VAR_0->ops, VAR_2, VAR_1);
     return 1;
    } else {
     VAR_3 = VAR_0->ops[VAR_3].op1_use_chain;
    }
   } else if (VAR_0->ops[VAR_3].op2_use == VAR_2) {
    if (VAR_0->ops[VAR_3].op2_use_chain == VAR_1) {
     VAR_0->ops[VAR_3].op2_use_chain = FUNC_1(VAR_0->ops, VAR_2, VAR_1);
     return 1;
    } else {
     VAR_3 = VAR_0->ops[VAR_3].op2_use_chain;
    }
   } else {
    break;
   }
  }

  FUNC_0(0);
  return 0;
 }
}
