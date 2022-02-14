
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int definition; scalar_t__ definition_phi; } ;
typedef TYPE_3__ zend_ssa_var ;
typedef int zend_bool ;
struct TYPE_9__ {TYPE_2__* op_array; int instr_dead; int phi_dead; TYPE_1__* ssa; } ;
typedef TYPE_4__ context ;
struct TYPE_7__ {int last_var; } ;
struct TYPE_6__ {TYPE_3__* vars; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static inline zend_bool FUNC_1(context *VAR_0, int VAR_1) {
 zend_ssa_var *VAR_2 = &VAR_0->ssa->vars[VAR_1];
 if (VAR_2->definition_phi) {
  return FUNC_0(VAR_0->phi_dead, VAR_1);
 } else if (VAR_2->definition >= 0) {
  return FUNC_0(VAR_0->instr_dead, VAR_2->definition);
 } else {



  return VAR_1 >= VAR_0->op_array->last_var;
 }
}
