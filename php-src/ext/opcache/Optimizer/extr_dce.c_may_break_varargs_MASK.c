
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {size_t op1_def; size_t op2_def; size_t result_def; } ;
typedef TYPE_2__ zend_ssa_op ;
struct TYPE_10__ {TYPE_1__* vars; } ;
typedef TYPE_3__ zend_ssa ;
struct TYPE_11__ {scalar_t__ num_args; } ;
typedef TYPE_4__ zend_op_array ;
typedef int zend_bool ;
struct TYPE_8__ {scalar_t__ var; } ;



__attribute__((used)) static inline zend_bool FUNC_0(const zend_op_array *VAR_0, const zend_ssa *VAR_1, const zend_ssa_op *VAR_2) {
 if (VAR_2->op1_def >= 0
   && VAR_1->vars[VAR_2->op1_def].var < VAR_0->num_args) {
  return 1;
 }
 if (VAR_2->op2_def >= 0
   && VAR_1->vars[VAR_2->op2_def].var < VAR_0->num_args) {
  return 1;
 }
 if (VAR_2->result_def >= 0
   && VAR_1->vars[VAR_2->result_def].var < VAR_0->num_args) {
  return 1;
 }
 return 0;
}
