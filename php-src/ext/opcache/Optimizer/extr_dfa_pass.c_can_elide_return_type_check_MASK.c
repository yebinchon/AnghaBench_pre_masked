
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int type; int ce; } ;
typedef TYPE_1__ zend_ssa_var_info ;
struct TYPE_10__ {size_t op1_use; size_t op1_def; } ;
typedef TYPE_2__ zend_ssa_op ;
struct TYPE_11__ {TYPE_1__* var_info; } ;
typedef TYPE_3__ zend_ssa ;
struct TYPE_12__ {TYPE_5__* arg_info; } ;
typedef TYPE_4__ zend_op_array ;
typedef int zend_bool ;
struct TYPE_13__ {int type; } ;
typedef TYPE_5__ zend_arg_info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static inline zend_bool FUNC_3(
  zend_op_array *VAR_5, zend_ssa *VAR_6, zend_ssa_op *VAR_7) {
 zend_arg_info *VAR_8 = &VAR_5->arg_info[-1];
 zend_ssa_var_info *VAR_9 = &VAR_6->var_info[VAR_7->op1_use];
 zend_ssa_var_info *VAR_10 = &VAR_6->var_info[VAR_7->op1_def];



 if (VAR_9->type & VAR_3) {
  return 0;
 }


 if ((VAR_9->type & (VAR_0|VAR_4)) & ~(VAR_10->type & VAR_0)) {
  return 0;
 }


 if (FUNC_0(VAR_8->type) & (VAR_1|VAR_2)) {
  return 0;
 }

 if (FUNC_1(VAR_8->type)) {
  if (!VAR_9->ce || !VAR_10->ce || !FUNC_2(VAR_9->ce, VAR_10->ce)) {
   return 0;
  }
 }

 return 1;
}
