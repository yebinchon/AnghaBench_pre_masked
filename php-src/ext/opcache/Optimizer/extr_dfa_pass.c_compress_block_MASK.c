
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* opcodes; } ;
typedef TYPE_1__ zend_op_array ;
struct TYPE_7__ {scalar_t__ opcode; } ;
typedef TYPE_2__ zend_op ;
struct TYPE_8__ {int len; int start; } ;
typedef TYPE_3__ zend_basic_block ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(zend_op_array *VAR_1, zend_basic_block *VAR_2)
{
 while (VAR_2->len > 0) {
  zend_op *VAR_3 = &VAR_1->opcodes[VAR_2->start + VAR_2->len - 1];

  if (VAR_3->opcode == VAR_0) {
   VAR_2->len--;
  } else {
   break;
  }
 }
}
