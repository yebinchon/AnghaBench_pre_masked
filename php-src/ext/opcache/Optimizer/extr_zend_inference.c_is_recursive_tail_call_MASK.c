
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_17__ {TYPE_6__* opcodes; } ;
typedef TYPE_5__ zend_op_array ;
struct TYPE_18__ {scalar_t__ opcode; } ;
typedef TYPE_6__ zend_op ;
struct TYPE_15__ {TYPE_2__* ops; TYPE_1__* vars; } ;
struct TYPE_19__ {TYPE_8__** call_map; TYPE_3__ ssa; } ;
typedef TYPE_7__ zend_func_info ;
struct TYPE_20__ {TYPE_4__* callee_func; } ;
typedef TYPE_8__ zend_call_info ;
struct TYPE_16__ {TYPE_5__ const op_array; } ;
struct TYPE_14__ {size_t op1_use; } ;
struct TYPE_13__ {scalar_t__ definition; } ;


 scalar_t__ VAR_0 ;
 TYPE_7__* FUNC_0 (TYPE_5__ const*) ;

__attribute__((used)) static int FUNC_1(const zend_op_array *VAR_1,
                                  zend_op *VAR_2)
{
 zend_func_info *VAR_3 = FUNC_0(VAR_1);

 if (VAR_3->ssa.ops && VAR_3->ssa.vars && VAR_3->call_map &&
     VAR_3->ssa.ops[VAR_2 - VAR_1->opcodes].op1_use >= 0 &&
     VAR_3->ssa.vars[VAR_3->ssa.ops[VAR_2 - VAR_1->opcodes].op1_use].definition >= 0) {

  zend_op *VAR_4 = VAR_1->opcodes + VAR_3->ssa.vars[VAR_3->ssa.ops[VAR_2 - VAR_1->opcodes].op1_use].definition;

  if (VAR_4->opcode == VAR_0) {
   zend_call_info *VAR_5 = VAR_3->call_map[VAR_4 - VAR_1->opcodes];
   if (VAR_5 && VAR_1 == &VAR_5->callee_func->op_array) {
    return 1;
   }
  }
 }
 return 0;
}
