
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int definition; int use_chain; int * phi_use_chain; } ;
typedef TYPE_4__ zend_ssa_var ;
struct TYPE_14__ {int result_def; } ;
typedef TYPE_5__ zend_ssa_op ;
struct TYPE_12__ {int var; } ;
struct TYPE_15__ {int opcode; TYPE_3__ result; int result_type; } ;
typedef TYPE_6__ zend_op ;
typedef int zend_bool ;
struct TYPE_16__ {TYPE_2__* op_array; TYPE_1__* ssa; } ;
typedef TYPE_7__ context ;
struct TYPE_11__ {TYPE_6__* opcodes; } ;
struct TYPE_10__ {TYPE_5__* ops; TYPE_4__* vars; } ;


 int VAR_0 ;
__attribute__((used)) static zend_bool FUNC_0(context *VAR_1, int VAR_2, int VAR_3, zend_op *VAR_4) {
 if (VAR_3 >= 0) {
  return 0;
 }
 zend_ssa_var *VAR_5 = &VAR_1->ssa->vars[VAR_2];
 int VAR_6 = VAR_5->definition;

 if (VAR_6 >= 0) {
  zend_ssa_op *VAR_7 = &VAR_1->ssa->ops[VAR_6];

  if (VAR_7->result_def == VAR_2
    && VAR_5->phi_use_chain == ((void*)0)
    && VAR_5->use_chain == (VAR_4 - VAR_1->op_array->opcodes)) {
   zend_op *VAR_8 = &VAR_1->op_array->opcodes[VAR_6];

   switch (VAR_8->opcode) {
    case 151:
    case 144:
    case 150:
    case 148:
    case 146:
    case 143:
    case 141:
    case 145:
    case 149:
    case 147:
    case 142:
    case 131:
    case 133:
    case 130:
    case 134:
    case 132:
    case 135:
    case 138:
    case 137:
    case 139:
    case 140:
    case 136:
    case 129:
    case 128:
    case 152:
     VAR_8->result_type = VAR_0;
     VAR_8->result.var = 0;
     VAR_7->result_def = -1;
     VAR_5->definition = -1;
     return 1;
    default:
     break;
   }
  }
 }
 return 0;
}
