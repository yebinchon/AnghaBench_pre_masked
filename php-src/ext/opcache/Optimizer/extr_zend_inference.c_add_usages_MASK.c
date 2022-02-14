
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ ssa_var; } ;
typedef TYPE_3__ zend_ssa_phi ;
struct TYPE_16__ {scalar_t__ result_def; scalar_t__ op1_def; scalar_t__ op2_def; } ;
typedef TYPE_4__ zend_ssa_op ;
struct TYPE_17__ {TYPE_4__* ops; TYPE_1__* vars; } ;
typedef TYPE_5__ zend_ssa ;
struct TYPE_18__ {TYPE_2__* opcodes; } ;
typedef TYPE_6__ zend_op_array ;
typedef int zend_bitset ;
struct TYPE_14__ {scalar_t__ opcode; } ;
struct TYPE_13__ {int use_chain; TYPE_3__* phi_use_chain; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (TYPE_4__*,int,int) ;
 TYPE_3__* FUNC_2 (TYPE_5__*,int,TYPE_3__*) ;

__attribute__((used)) static void FUNC_3(const zend_op_array *VAR_1, zend_ssa *VAR_2, zend_bitset VAR_3, int VAR_4)
{
 if (VAR_2->vars[VAR_4].phi_use_chain) {
  zend_ssa_phi *VAR_5 = VAR_2->vars[VAR_4].phi_use_chain;
  do {
   FUNC_0(VAR_3, VAR_5->ssa_var);
   VAR_5 = FUNC_2(VAR_2, VAR_4, VAR_5);
  } while (VAR_5);
 }
 if (VAR_2->vars[VAR_4].use_chain >= 0) {
  int VAR_6 = VAR_2->vars[VAR_4].use_chain;
  zend_ssa_op *VAR_7;

  do {
   VAR_7 = VAR_2->ops + VAR_6;
   if (VAR_7->result_def >= 0) {
    FUNC_0(VAR_3, VAR_7->result_def);
   }
   if (VAR_7->op1_def >= 0) {
    FUNC_0(VAR_3, VAR_7->op1_def);
   }
   if (VAR_7->op2_def >= 0) {
    FUNC_0(VAR_3, VAR_7->op2_def);
   }
   if (VAR_1->opcodes[VAR_6].opcode == VAR_0) {
    VAR_7--;
    if (VAR_7->result_def >= 0) {
     FUNC_0(VAR_3, VAR_7->result_def);
    }
    if (VAR_7->op1_def >= 0) {
     FUNC_0(VAR_3, VAR_7->op1_def);
    }
    if (VAR_7->op2_def >= 0) {
     FUNC_0(VAR_3, VAR_7->op2_def);
    }
   }
   VAR_6 = FUNC_1(VAR_2->ops, VAR_4, VAR_6);
  } while (VAR_6 >= 0);
 }
}
