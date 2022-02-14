
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ type; } ;
typedef TYPE_2__ zend_ssa_var_info ;
struct TYPE_16__ {int use_chain; TYPE_4__* sym_use_chain; TYPE_4__* phi_use_chain; } ;
typedef TYPE_3__ zend_ssa_var ;
struct TYPE_17__ {size_t ssa_var; struct TYPE_17__* sym_use_chain; } ;
typedef TYPE_4__ zend_ssa_phi ;
struct TYPE_18__ {size_t op1_def; size_t op2_def; size_t result_def; } ;
typedef TYPE_5__ zend_ssa_op ;
struct TYPE_19__ {TYPE_3__* vars; TYPE_2__* var_info; TYPE_5__* ops; } ;
typedef TYPE_6__ zend_ssa ;
struct TYPE_20__ {TYPE_1__* opcodes; } ;
typedef TYPE_7__ zend_op_array ;
typedef int zend_bitset ;
struct TYPE_14__ {scalar_t__ opcode; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (TYPE_5__*,int,int) ;
 TYPE_4__* FUNC_2 (TYPE_6__*,int,TYPE_4__*) ;

__attribute__((used)) static void FUNC_3(const zend_op_array *VAR_1, zend_ssa *VAR_2, zend_bitset VAR_3, int VAR_4)
{
 zend_ssa_op *VAR_5 = VAR_2->ops;
 zend_ssa_var *VAR_6 = VAR_2->vars;
 zend_ssa_var_info *VAR_7 = VAR_2->var_info;
 zend_ssa_phi *VAR_8;
 int VAR_9;

 VAR_8 = VAR_6[VAR_4].phi_use_chain;
 while (VAR_8) {
  if (VAR_7[VAR_8->ssa_var].type) {
   VAR_7[VAR_8->ssa_var].type = 0;
   FUNC_0(VAR_3, VAR_8->ssa_var);
   FUNC_3(VAR_1, VAR_2, VAR_3, VAR_8->ssa_var);
  }
  VAR_8 = FUNC_2(VAR_2, VAR_4, VAR_8);
 }
 VAR_9 = VAR_6[VAR_4].use_chain;
 while (VAR_9 >= 0) {
  if (VAR_5[VAR_9].op1_def >= 0 && VAR_7[VAR_5[VAR_9].op1_def].type) {
   VAR_7[VAR_5[VAR_9].op1_def].type = 0;
   FUNC_0(VAR_3, VAR_5[VAR_9].op1_def);
   FUNC_3(VAR_1, VAR_2, VAR_3, VAR_5[VAR_9].op1_def);
  }
  if (VAR_5[VAR_9].op2_def >= 0 && VAR_7[VAR_5[VAR_9].op2_def].type) {
   VAR_7[VAR_5[VAR_9].op2_def].type = 0;
   FUNC_0(VAR_3, VAR_5[VAR_9].op2_def);
   FUNC_3(VAR_1, VAR_2, VAR_3, VAR_5[VAR_9].op2_def);
  }
  if (VAR_5[VAR_9].result_def >= 0 && VAR_7[VAR_5[VAR_9].result_def].type) {
   VAR_7[VAR_5[VAR_9].result_def].type = 0;
   FUNC_0(VAR_3, VAR_5[VAR_9].result_def);
   FUNC_3(VAR_1, VAR_2, VAR_3, VAR_5[VAR_9].result_def);
  }
  if (VAR_1->opcodes[VAR_9+1].opcode == VAR_0) {
   if (VAR_5[VAR_9+1].op1_def >= 0 && VAR_7[VAR_5[VAR_9+1].op1_def].type) {
    VAR_7[VAR_5[VAR_9+1].op1_def].type = 0;
    FUNC_0(VAR_3, VAR_5[VAR_9+1].op1_def);
    FUNC_3(VAR_1, VAR_2, VAR_3, VAR_5[VAR_9+1].op1_def);
   }
   if (VAR_5[VAR_9+1].op2_def >= 0 && VAR_7[VAR_5[VAR_9+1].op2_def].type) {
    VAR_7[VAR_5[VAR_9+1].op2_def].type = 0;
    FUNC_0(VAR_3, VAR_5[VAR_9+1].op2_def);
    FUNC_3(VAR_1, VAR_2, VAR_3, VAR_5[VAR_9+1].op2_def);
   }
   if (VAR_5[VAR_9+1].result_def >= 0 && VAR_7[VAR_5[VAR_9+1].result_def].type) {
    VAR_7[VAR_5[VAR_9+1].result_def].type = 0;
    FUNC_0(VAR_3, VAR_5[VAR_9+1].result_def);
    FUNC_3(VAR_1, VAR_2, VAR_3, VAR_5[VAR_9+1].result_def);
   }
  }
  VAR_9 = FUNC_1(VAR_5, VAR_4, VAR_9);
 }
}
