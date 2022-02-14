
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {size_t opcodes; int last; } ;
typedef TYPE_2__ zend_op_array ;
struct TYPE_11__ {TYPE_4__* callee_info; } ;
typedef TYPE_3__ zend_func_info ;
struct TYPE_12__ {size_t caller_init_opline; size_t caller_call_opline; int num_args; TYPE_1__* arg_info; struct TYPE_12__* next_callee; } ;
typedef TYPE_4__ zend_call_info ;
typedef int zend_arena ;
struct TYPE_9__ {size_t opline; } ;


 TYPE_4__** FUNC_0 (int **,int,int ) ;

zend_call_info **FUNC_1(zend_arena **VAR_0, zend_func_info *VAR_1, zend_op_array *VAR_2)
{
 zend_call_info **VAR_3, *VAR_4;
 if (!VAR_1->callee_info) {

  return ((void*)0);
 }

 VAR_3 = FUNC_0(VAR_0, sizeof(zend_call_info *), VAR_2->last);
 for (VAR_4 = VAR_1->callee_info; VAR_4; VAR_4 = VAR_4->next_callee) {
  int VAR_5;
  VAR_3[VAR_4->caller_init_opline - VAR_2->opcodes] = VAR_4;
  VAR_3[VAR_4->caller_call_opline - VAR_2->opcodes] = VAR_4;
  for (VAR_5 = 0; VAR_5 < VAR_4->num_args; VAR_5++) {
   if (VAR_4->arg_info[VAR_5].opline) {
    VAR_3[VAR_4->arg_info[VAR_5].opline - VAR_2->opcodes] = VAR_4;
   }
  }
 }
 return VAR_3;
}
