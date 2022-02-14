
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int zend_uchar ;
struct TYPE_26__ {size_t op1_use; size_t op2_use; struct TYPE_26__* op1_use_chain; struct TYPE_26__* op2_use_chain; } ;
typedef TYPE_5__ zend_ssa_op ;
struct TYPE_27__ {int ops; TYPE_4__* vars; TYPE_1__* var_info; } ;
typedef TYPE_6__ zend_ssa ;
struct TYPE_24__ {uintptr_t var; } ;
struct TYPE_28__ {scalar_t__ opcode; int op1_type; int op2_type; TYPE_3__ op1; } ;
typedef TYPE_7__ zend_op ;
typedef int zend_bool ;
struct TYPE_29__ {TYPE_6__* ssa; TYPE_2__* op_array; int instr_dead; } ;
typedef TYPE_8__ context ;
struct TYPE_25__ {TYPE_5__* use_chain; int var; } ;
struct TYPE_23__ {int opcodes; } ;
struct TYPE_22__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (TYPE_8__*,size_t) ;
 int FUNC_2 (TYPE_8__*,size_t,TYPE_5__*,TYPE_7__*) ;
 int FUNC_3 (int ,TYPE_7__*) ;
 int FUNC_4 (TYPE_6__*,TYPE_7__*,TYPE_5__*) ;
 int FUNC_5 (TYPE_6__*,TYPE_5__*) ;

__attribute__((used)) static zend_bool FUNC_6(context *VAR_10, zend_op *VAR_11, zend_ssa_op *VAR_12) {
 zend_ssa *VAR_13 = VAR_10->ssa;
 int VAR_14 = -1;
 zend_uchar VAR_15;

 if (VAR_11->opcode == VAR_9) {
  return 0;
 }


 if (VAR_11->opcode == VAR_8
   && (VAR_13->var_info[VAR_12->op1_use].type & (VAR_6|VAR_2|VAR_3|VAR_5|VAR_4))
   && !FUNC_1(VAR_10, VAR_12->op1_use)) {
  return 0;
 }

 if ((VAR_11->op1_type & (VAR_1|VAR_0))&& !FUNC_1(VAR_10, VAR_12->op1_use)) {
  if (!FUNC_2(VAR_10, VAR_12->op1_use, VAR_12->op1_use_chain, VAR_11)) {
   if (VAR_13->var_info[VAR_12->op1_use].type & (VAR_6|VAR_2|VAR_3|VAR_5|VAR_4)
    && VAR_11->opcode != VAR_7) {
    VAR_14 = VAR_12->op1_use;
    VAR_15 = VAR_11->op1_type;
   }
  }
 }
 if ((VAR_11->op2_type & (VAR_1|VAR_0)) && !FUNC_1(VAR_10, VAR_12->op2_use)) {
  if (!FUNC_2(VAR_10, VAR_12->op2_use, VAR_12->op2_use_chain, VAR_11)) {
   if (VAR_13->var_info[VAR_12->op2_use].type & (VAR_6|VAR_2|VAR_3|VAR_5|VAR_4)) {
    if (VAR_14 >= 0) {

     FUNC_3(VAR_10->instr_dead, VAR_11 - VAR_10->op_array->opcodes);
     return 0;
    }
    VAR_14 = VAR_12->op2_use;
    VAR_15 = VAR_11->op2_type;
   }
  }
 }

 FUNC_5(VAR_10->ssa, VAR_12);
 FUNC_4(VAR_10->ssa, VAR_11, VAR_12);

 if (VAR_14 >= 0) {
  VAR_11->opcode = VAR_8;
  VAR_11->op1.var = (uintptr_t) FUNC_0(((void*)0), VAR_13->vars[VAR_14].var);
  VAR_11->op1_type = VAR_15;

  VAR_12->op1_use = VAR_14;
  VAR_12->op1_use_chain = VAR_13->vars[VAR_14].use_chain;
  VAR_13->vars[VAR_14].use_chain = VAR_12 - VAR_13->ops;
  return 0;
 }
 return 1;
}
