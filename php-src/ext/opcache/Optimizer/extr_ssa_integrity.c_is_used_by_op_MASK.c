
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int op1_use; int op2_use; int result_use; } ;
typedef TYPE_1__ zend_ssa_op ;
struct TYPE_5__ {TYPE_1__* ops; } ;
typedef TYPE_2__ zend_ssa ;
typedef int zend_bool ;



__attribute__((used)) static inline zend_bool FUNC_0(zend_ssa *VAR_0, int VAR_1, int VAR_2) {
 zend_ssa_op *VAR_3 = &VAR_0->ops[VAR_1];
 return (VAR_3->op1_use == VAR_2)
  || (VAR_3->op2_use == VAR_2)
  || (VAR_3->result_use == VAR_2);
}
