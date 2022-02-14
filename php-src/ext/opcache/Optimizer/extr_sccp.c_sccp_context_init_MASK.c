
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int zval ;
struct TYPE_11__ {int vars_count; TYPE_1__* vars; } ;
typedef TYPE_2__ zend_ssa ;
struct TYPE_12__ {int arena; } ;
typedef TYPE_3__ zend_optimizer_ctx ;
struct TYPE_13__ {int last_var; } ;
typedef TYPE_4__ zend_op_array ;
typedef int zend_call_info ;
struct TYPE_14__ {int * values; int bot; int top; int ** call_map; } ;
typedef TYPE_5__ sccp_ctx ;
struct TYPE_10__ {scalar_t__ alias; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3(zend_optimizer_ctx *VAR_0, sccp_ctx *VAR_1,
  zend_ssa *VAR_2, zend_op_array *VAR_3, zend_call_info **VAR_4) {
 int VAR_5;
 VAR_1->call_map = VAR_4;
 VAR_1->values = FUNC_2(&VAR_0->arena, sizeof(zval) * VAR_2->vars_count);

 FUNC_1(&VAR_1->top);
 FUNC_0(&VAR_1->bot);

 VAR_5 = 0;
 for (; VAR_5 < VAR_3->last_var; ++VAR_5) {


  FUNC_0(&VAR_1->values[VAR_5]);
 }
 for (; VAR_5 < VAR_2->vars_count; ++VAR_5) {
  if (VAR_2->vars[VAR_5].alias) {
   FUNC_0(&VAR_1->values[VAR_5]);
  } else {
   FUNC_1(&VAR_1->values[VAR_5]);
  }
 }
}
