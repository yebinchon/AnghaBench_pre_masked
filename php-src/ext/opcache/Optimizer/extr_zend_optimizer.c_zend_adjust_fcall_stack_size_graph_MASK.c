
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zend_op_array ;
struct TYPE_6__ {int num; } ;
struct TYPE_7__ {scalar_t__ opcode; int extended_value; TYPE_1__ op1; } ;
typedef TYPE_2__ zend_op ;
struct TYPE_8__ {TYPE_4__* callee_info; } ;
typedef TYPE_3__ zend_func_info ;
struct TYPE_9__ {struct TYPE_9__* next_callee; scalar_t__ callee_func; TYPE_2__* caller_init_opline; } ;
typedef TYPE_4__ zend_call_info ;


 TYPE_3__* FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(zend_op_array *VAR_1)
{
 zend_func_info *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2) {
  zend_call_info *VAR_3 =VAR_2->callee_info;

  while (VAR_3) {
   zend_op *VAR_4 = VAR_3->caller_init_opline;

   if (VAR_4 && VAR_3->callee_func && VAR_4->opcode == VAR_0) {
    VAR_4->op1.num = FUNC_1(VAR_4->extended_value, VAR_3->callee_func);
   }
   VAR_3 = VAR_3->next_callee;
  }
 }
}
