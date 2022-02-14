
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int op1_use; size_t op1_def; int op2_use; int result_use; } ;
typedef TYPE_2__ zend_ssa_op ;
struct TYPE_10__ {TYPE_1__* vars; TYPE_2__* ops; } ;
typedef TYPE_3__ zend_ssa ;
struct TYPE_11__ {TYPE_5__* opcodes; } ;
typedef TYPE_4__ zend_op_array ;
struct TYPE_12__ {int opcode; int extended_value; int result_type; int op2_type; int op1_type; } ;
typedef TYPE_5__ zend_op ;
struct TYPE_8__ {int alias; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

 int VAR_4 ;
__attribute__((used)) static int FUNC_2(zend_op_array *VAR_5, zend_ssa *VAR_6, int VAR_7, int VAR_8)
{
 zend_ssa_op *VAR_9 = VAR_6->ops + VAR_7;
 zend_op *VAR_10 = VAR_5->opcodes + VAR_7;

 if (VAR_9->op1_use == VAR_8) {
  switch (VAR_10->opcode) {
   case 148:

    break;
   case 128:
    if (VAR_10->op1_type == VAR_0) {
     if (FUNC_0() & VAR_2) {

      return 1;
     }
    }
    break;
   case 135:
   case 134:
   case 139:
   case 137:
   case 140:
   case 138:
    break;
   case 142:
    return 1;
   case 146:
   case 144:
   case 141:
   case 147:
   case 145:
   case 143:
    break;
   case 129:
   case 130:
   case 131:
   case 132:
    break;
   case 136:
   case 149:
    if (VAR_10->extended_value & VAR_4) {
     return 1;
    }
    if (FUNC_0() & VAR_2) {

     return 1;
    }

    break;
   case 133:
    if ((VAR_10-1)->opcode != 147
     && (VAR_10-1)->opcode != 145) {
     return 1;
    }
    if (FUNC_0() & VAR_2) {

     return 1;
    }
    VAR_10--;
    VAR_9--;
    if (VAR_10->op1_type != VAR_0
     || (FUNC_0() & VAR_3)
     || (VAR_9->op1_def >= 0 && VAR_6->vars[VAR_9->op1_def].alias)) {

     return 1;
    }

    break;
   default:
    return 1;
  }
 }

 if (VAR_9->op2_use == VAR_8) {
  switch (VAR_10->opcode) {
   case 148:
    if (VAR_10->op1_type != VAR_0
     || (FUNC_0() & VAR_3)
     || (VAR_9->op1_def >= 0 && VAR_6->vars[VAR_9->op1_def].alias)) {

     return 1;
    }
    if (VAR_10->op2_type == VAR_0 || VAR_10->result_type != VAR_1) {
     if (FUNC_1() & VAR_2) {

      return 1;
     }
    }
    break;
   default:
    return 1;
  }
 }

 if (VAR_9->result_use == VAR_8) {
  switch (VAR_10->opcode) {
   case 148:
   case 128:
   case 136:
   case 149:
    break;
   default:
    return 1;
  }
 }

 return 0;
}
