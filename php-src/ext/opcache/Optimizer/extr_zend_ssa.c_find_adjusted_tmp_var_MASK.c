
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zval ;
struct TYPE_10__ {TYPE_3__* opcodes; } ;
typedef TYPE_2__ zend_op_array ;
struct TYPE_12__ {int var; } ;
struct TYPE_9__ {scalar_t__ var; } ;
struct TYPE_11__ {scalar_t__ result_type; scalar_t__ opcode; scalar_t__ op1_type; scalar_t__ op2_type; TYPE_8__ op1; TYPE_8__ op2; TYPE_1__ result; } ;
typedef TYPE_3__ zend_op ;
typedef int zend_long ;
typedef scalar_t__ uint32_t ;


 int * FUNC_0 (TYPE_2__ const*,TYPE_3__*,TYPE_8__) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(const zend_op_array *VAR_9, uint32_t VAR_10, zend_op *VAR_11, uint32_t VAR_12, zend_long *VAR_13)
{
 zend_op *VAR_14 = VAR_11;
 zval *VAR_15;

 while (VAR_14 != VAR_9->opcodes) {
  VAR_14--;
  if (VAR_14->result_type != VAR_3 || VAR_14->result.var != VAR_12) {
   continue;
  }

  if (VAR_14->opcode == VAR_6) {
   if (VAR_14->op1_type == VAR_1) {
    *VAR_13 = -1;
    return FUNC_1(VAR_14->op1.var);
   }
  } else if (VAR_14->opcode == VAR_7) {
   if (VAR_14->op1_type == VAR_1) {
    *VAR_13 = 1;
    return FUNC_1(VAR_14->op1.var);
   }
  } else if (VAR_14->opcode == VAR_4) {
   if (VAR_14->op1_type == VAR_1 && VAR_14->op2_type == VAR_0) {
    VAR_15 = FUNC_0(VAR_9, VAR_14, VAR_14->op2);
    if (FUNC_3(VAR_15) == VAR_2
     && FUNC_2(VAR_15) != VAR_5) {
     *VAR_13 = -FUNC_2(VAR_15);
     return FUNC_1(VAR_14->op1.var);
    }
   } else if (VAR_14->op2_type == VAR_1 && VAR_14->op1_type == VAR_0) {
    VAR_15 = FUNC_0(VAR_9, VAR_14, VAR_14->op1);
    if (FUNC_3(VAR_15) == VAR_2
     && FUNC_2(VAR_15) != VAR_5) {
     *VAR_13 = -FUNC_2(VAR_15);
     return FUNC_1(VAR_14->op2.var);
    }
   }
  } else if (VAR_14->opcode == VAR_8) {
   if (VAR_14->op1_type == VAR_1 && VAR_14->op2_type == VAR_0) {
    VAR_15 = FUNC_0(VAR_9, VAR_14, VAR_14->op2);
    if (FUNC_3(VAR_15) == VAR_2) {
     *VAR_13 = FUNC_2(VAR_15);
     return FUNC_1(VAR_14->op1.var);
    }
   }
  }
  break;
 }
 return -1;
}
