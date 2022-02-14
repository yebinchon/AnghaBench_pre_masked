
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int zval ;
struct TYPE_17__ {int op2_use; int result_def; int op2_use_chain; } ;
typedef TYPE_2__ zend_ssa_op ;
struct TYPE_18__ {int opcode; } ;
typedef TYPE_3__ zend_op ;
typedef int zend_bool ;
struct TYPE_16__ {TYPE_5__* ssa; int op_array; } ;
struct TYPE_19__ {TYPE_1__ scdf; } ;
typedef TYPE_4__ sccp_ctx ;
struct TYPE_20__ {int ops; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int) ;

 int VAR_1 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,TYPE_3__*,TYPE_2__*) ;
 scalar_t__ FUNC_5 (int ,TYPE_3__*,int *) ;
 int FUNC_6 (TYPE_5__*,TYPE_2__*) ;
 int FUNC_7 (TYPE_5__*,TYPE_2__*,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static zend_bool FUNC_9(
  sccp_ctx *VAR_2, zend_op *VAR_3, zend_ssa_op *VAR_4, int VAR_5, zval *VAR_6) {
 if (VAR_4->op2_use == VAR_5 && FUNC_4(VAR_2->scdf.op_array, VAR_3, VAR_4)) {
  zval VAR_7;
  FUNC_2(&VAR_7, VAR_6);
  if (FUNC_5(VAR_2->scdf.op_array, VAR_3, &VAR_7)) {
   return 1;
  } else {
   switch (VAR_3->opcode) {
    case 128:
     if (FUNC_3(VAR_7) == VAR_0) {
      FUNC_1((VAR_3 + 1)->opcode == VAR_1);
      FUNC_1(VAR_4->result_def == (VAR_4 + 1)->op2_use);
      if (FUNC_5(VAR_2->scdf.op_array, VAR_3 + 1, &VAR_7)) {
       zend_ssa_op *VAR_8 = VAR_4 + 1;
       FUNC_7(VAR_2->scdf.ssa, VAR_8 - VAR_2->scdf.ssa->ops, VAR_8->op2_use);
       VAR_8->op2_use = -1;
       VAR_8->op2_use_chain = -1;
       FUNC_6(VAR_2->scdf.ssa, VAR_4);
       FUNC_0(VAR_3);
       return 1;
      }
     }
    default:
     break;
   }
   FUNC_8(&VAR_7);
  }
 }
 return 0;
}
