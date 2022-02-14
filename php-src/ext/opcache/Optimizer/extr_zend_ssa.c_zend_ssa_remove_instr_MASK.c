
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int result_use; int res_use_chain; int op1_use; int op2_use; int op2_use_chain; int op1_use_chain; int result_def; int op1_def; int op2_def; } ;
typedef TYPE_1__ zend_ssa_op ;
struct TYPE_8__ {int ops; } ;
typedef TYPE_2__ zend_ssa ;
typedef int zend_op ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,int) ;

void FUNC_3(zend_ssa *VAR_0, zend_op *VAR_1, zend_ssa_op *VAR_2)
{
 if (VAR_2->result_use >= 0) {
  FUNC_2(VAR_0, VAR_2 - VAR_0->ops, VAR_2->result_use);
  VAR_2->result_use = -1;
  VAR_2->res_use_chain = -1;
 }
 if (VAR_2->op1_use >= 0) {
  if (VAR_2->op1_use != VAR_2->op2_use) {
   FUNC_2(VAR_0, VAR_2 - VAR_0->ops, VAR_2->op1_use);
  } else {
   VAR_2->op2_use_chain = VAR_2->op1_use_chain;
  }
  VAR_2->op1_use = -1;
  VAR_2->op1_use_chain = -1;
 }
 if (VAR_2->op2_use >= 0) {
  FUNC_2(VAR_0, VAR_2 - VAR_0->ops, VAR_2->op2_use);
  VAR_2->op2_use = -1;
  VAR_2->op2_use_chain = -1;
 }


 FUNC_1(VAR_2->result_def == -1);
 FUNC_1(VAR_2->op1_def == -1);
 FUNC_1(VAR_2->op2_def == -1);

 FUNC_0(VAR_1);
}
