
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zval ;
struct TYPE_11__ {int op1_use; } ;
typedef TYPE_3__ zend_ssa_op ;
struct TYPE_10__ {int constant; } ;
struct TYPE_12__ {scalar_t__ op1_type; TYPE_2__ op1; } ;
typedef TYPE_4__ zend_op ;
struct TYPE_9__ {int op_array; } ;
struct TYPE_13__ {int * values; TYPE_1__ scdf; } ;
typedef TYPE_5__ sccp_ctx ;


 int * FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static zval *FUNC_1(sccp_ctx *VAR_1, zend_op *VAR_2, zend_ssa_op *VAR_3) {
 if (VAR_2->op1_type == VAR_0) {
  return FUNC_0(VAR_1->scdf.op_array, VAR_2->op1.constant);
 } else if (VAR_3->op1_use != -1) {
  return &VAR_1->values[VAR_3->op1_use];
 } else {
  return ((void*)0);
 }
}
