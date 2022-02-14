
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_4__* opcodes; } ;
typedef TYPE_3__ zend_op_array ;
struct TYPE_8__ {scalar_t__ var; } ;
struct TYPE_9__ {scalar_t__ var; } ;
struct TYPE_11__ {scalar_t__ opcode; scalar_t__ extended_value; int result_type; TYPE_1__ result; TYPE_2__ op1; } ;
typedef TYPE_4__ zend_op ;
typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

zend_op *FUNC_1(const zend_op_array *VAR_5, zend_op *VAR_6) {
 uint32_t VAR_7 = VAR_6->op1.var;
 FUNC_0(VAR_6->opcode == VAR_2 ||
  (VAR_6->opcode == VAR_3 && VAR_6->extended_value == VAR_4));

 while (--VAR_6 >= VAR_5->opcodes) {
  if ((VAR_6->result_type & (VAR_0|VAR_1)) && VAR_6->result.var == VAR_7) {
   return VAR_6;
  }
 }
 return ((void*)0);
}
