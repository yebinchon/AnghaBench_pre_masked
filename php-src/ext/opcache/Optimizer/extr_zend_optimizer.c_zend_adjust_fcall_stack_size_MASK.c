
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* script; } ;
typedef TYPE_3__ zend_optimizer_ctx ;
struct TYPE_12__ {int last; TYPE_5__* opcodes; } ;
typedef TYPE_4__ zend_op_array ;
struct TYPE_10__ {int num; } ;
struct TYPE_13__ {scalar_t__ opcode; int extended_value; TYPE_2__ op1; int op2; } ;
typedef TYPE_5__ zend_op ;
typedef int zend_function ;
struct TYPE_9__ {int function_table; } ;


 int FUNC_0 (TYPE_5__*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(zend_op_array *VAR_1, zend_optimizer_ctx *VAR_2)
{
 zend_function *VAR_3;
 zend_op *VAR_4, *VAR_5;

 VAR_4 = VAR_1->opcodes;
 VAR_5 = VAR_4 + VAR_1->last;
 while (VAR_4 < VAR_5) {
  if (VAR_4->opcode == VAR_0) {
   VAR_3 = FUNC_2(
    &VAR_2->script->function_table,
    FUNC_1(FUNC_0(VAR_4, VAR_4->op2)));
   if (VAR_3) {
    VAR_4->op1.num = FUNC_3(VAR_4->extended_value, VAR_3);
   }
  }
  VAR_4++;
 }
}
