
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ op1_def; scalar_t__ op2_def; scalar_t__ result_def; } ;
typedef TYPE_1__ zend_ssa_op ;
typedef int zend_ssa ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,scalar_t__) ;

__attribute__((used)) static inline void FUNC_4(zend_ssa *VAR_0, zend_ssa_op *VAR_1)
{
 if (VAR_1->op1_def >= 0) {
  FUNC_3(VAR_0, VAR_1->op1_def);
  FUNC_0(VAR_0, VAR_1);
 }
 if (VAR_1->op2_def >= 0) {
  FUNC_3(VAR_0, VAR_1->op2_def);
  FUNC_1(VAR_0, VAR_1);
 }
 if (VAR_1->result_def >= 0) {
  FUNC_3(VAR_0, VAR_1->result_def);
  FUNC_2(VAR_0, VAR_1);
 }
}
