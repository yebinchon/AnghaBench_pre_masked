
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int last; TYPE_3__* opcodes; } ;
typedef TYPE_2__ zend_op_array ;
struct TYPE_6__ {scalar_t__ num; } ;
struct TYPE_8__ {scalar_t__ opcode; TYPE_1__ op1; } ;
typedef TYPE_3__ zend_op ;
typedef scalar_t__ uint32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static zend_op* FUNC_0(zend_op_array *VAR_3, uint32_t VAR_4)
{
 zend_op *VAR_5 = VAR_3->opcodes;
 zend_op *VAR_6 = VAR_5 + VAR_3->last;

 ++VAR_4;
 while (VAR_5 < VAR_6) {
  if ((VAR_5->opcode == VAR_0 || VAR_5->opcode == VAR_1
      || VAR_5->opcode == VAR_2) && VAR_5->op1.num == VAR_4)
  {
   return VAR_5;
  }
  ++VAR_5;
 }
 return ((void*)0);
}
