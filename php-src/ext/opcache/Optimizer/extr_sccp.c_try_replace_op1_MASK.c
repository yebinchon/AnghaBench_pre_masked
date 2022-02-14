
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int zval ;
struct TYPE_16__ {int op1_use; int op2_use; int op2_def; int op2_use_chain; } ;
typedef TYPE_3__ zend_ssa_op ;
struct TYPE_14__ {void* constant; } ;
struct TYPE_17__ {int opcode; int op2_type; TYPE_1__ op1; void* op1_type; } ;
typedef TYPE_4__ zend_op ;
typedef int zend_bool ;
struct TYPE_15__ {TYPE_6__* ssa; int op_array; } ;
struct TYPE_18__ {TYPE_2__ scdf; } ;
typedef TYPE_5__ sccp_ctx ;
struct TYPE_19__ {int ops; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;



 int VAR_3 ;
 int VAR_4 ;


 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,TYPE_4__*,TYPE_3__*) ;
 void* FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ,TYPE_4__*,int *) ;
 int FUNC_8 (TYPE_6__*,TYPE_3__*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static zend_bool FUNC_11(
  sccp_ctx *VAR_5, zend_op *VAR_6, zend_ssa_op *VAR_7, int VAR_8, zval *VAR_9) {
 if (VAR_7->op1_use == VAR_8 && FUNC_5(VAR_5->scdf.op_array, VAR_6, VAR_7)) {
  zval VAR_10;
  FUNC_1(&VAR_10, VAR_9);
  if (FUNC_7(VAR_5->scdf.op_array, VAR_6, &VAR_10)) {
   return 1;
  } else {

   switch (VAR_6->opcode) {
    case 132:
     VAR_6->opcode = VAR_3;

    case 131:
    case 128:
    case 129:
     if (FUNC_4(VAR_10) == VAR_1) {
      FUNC_9(FUNC_3(VAR_10));
     }
     VAR_6->op1.constant = FUNC_6(VAR_5->scdf.op_array, &VAR_10);
     VAR_6->op1_type = VAR_0;
     return 1;
    case 130:
     FUNC_10(&VAR_10);
     FUNC_2(&VAR_10);
     VAR_6->opcode = VAR_4;
     VAR_6->op1_type = VAR_0;
     VAR_6->op1.constant = FUNC_6(VAR_5->scdf.op_array, &VAR_10);
     VAR_6->op2_type = VAR_2;
     if (VAR_7->op2_use >= 0) {
      FUNC_0(VAR_7->op2_def == -1);
      FUNC_8(VAR_5->scdf.ssa, VAR_7 - VAR_5->scdf.ssa->ops, VAR_7->op2_use);
      VAR_7->op2_use = -1;
      VAR_7->op2_use_chain = -1;
     }
     return 1;
    default:
     break;
   }
   FUNC_10(&VAR_10);
  }
 }
 return 0;
}
