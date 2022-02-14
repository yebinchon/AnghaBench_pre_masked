
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int last; TYPE_2__* opcodes; } ;
typedef TYPE_1__ zend_op_array ;
struct TYPE_5__ {scalar_t__ opcode; int lineno; } ;
typedef TYPE_2__ zend_op ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;

__attribute__((used)) static void FUNC_0(zend_op_array *VAR_2)
{
 zend_op *VAR_3 = VAR_2->opcodes, *VAR_4=VAR_3+VAR_2->last;

 while (VAR_3<VAR_4) {
  if (VAR_3->opcode == VAR_0) {
   if (VAR_3+1<VAR_4) {
    if ((VAR_3+1)->opcode == VAR_0) {
     VAR_3->opcode = VAR_1;
     VAR_3++;
     continue;
    }
    if (VAR_3+1<VAR_4) {
     VAR_3->lineno = (VAR_3+1)->lineno;
    }
   } else {
    VAR_3->opcode = VAR_1;
   }
  }
  VAR_3++;
 }
}
