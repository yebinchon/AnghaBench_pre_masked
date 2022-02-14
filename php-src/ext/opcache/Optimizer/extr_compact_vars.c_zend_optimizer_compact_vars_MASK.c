
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
struct TYPE_10__ {int last_var; int T; int last; int ** vars; TYPE_5__* opcodes; } ;
typedef TYPE_4__ zend_op_array ;
struct TYPE_9__ {void* var; } ;
struct TYPE_8__ {void* var; } ;
struct TYPE_7__ {void* var; } ;
struct TYPE_11__ {int op1_type; int op2_type; int result_type; scalar_t__ opcode; int extended_value; TYPE_3__ result; TYPE_2__ op2; TYPE_1__ op1; } ;
typedef TYPE_5__ zend_op ;
typedef int* zend_bitset ;
typedef int uint32_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int) ;
 size_t FUNC_2 (void*) ;
 int FUNC_3 (int) ;
 int* FUNC_4 (int,int ) ;
 scalar_t__ VAR_3 ;
 int* FUNC_5 (int,int ) ;
 int FUNC_6 (int **) ;
 int FUNC_7 (int*,int ) ;
 int ** FUNC_8 (int,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int*,int) ;
 scalar_t__ FUNC_10 (int*,int) ;
 int FUNC_11 (int*,size_t) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int *,int ) ;

void FUNC_14(zend_op_array *VAR_6) {
 int VAR_7;

 FUNC_0(VAR_4);
 FUNC_0(VAR_5);
 uint32_t VAR_8 = FUNC_12(VAR_6->last_var + VAR_6->T);
 zend_bitset VAR_9 = FUNC_4(VAR_8, VAR_4);
 uint32_t *VAR_10 = FUNC_5((VAR_6->last_var + VAR_6->T) * sizeof(uint32_t), VAR_5);
 uint32_t VAR_11, VAR_12;


 FUNC_9(VAR_9, VAR_8);
 for (VAR_7 = 0; VAR_7 < VAR_6->last; VAR_7++) {
  zend_op *VAR_13 = &VAR_6->opcodes[VAR_7];
  if (VAR_13->op1_type & (VAR_0|VAR_2|VAR_1)) {
   FUNC_11(VAR_9, FUNC_2(VAR_13->op1.var));
  }
  if (VAR_13->op2_type & (VAR_0|VAR_2|VAR_1)) {
   FUNC_11(VAR_9, FUNC_2(VAR_13->op2.var));
  }
  if (VAR_13->result_type & (VAR_0|VAR_2|VAR_1)) {
   FUNC_11(VAR_9, FUNC_2(VAR_13->result.var));
   if (VAR_13->opcode == VAR_3) {
    uint32_t VAR_14 = ((VAR_13->extended_value * sizeof(zend_string*)) + (sizeof(zval) - 1)) / sizeof(zval);
    while (VAR_14 > 1) {
     VAR_14--;
     FUNC_11(VAR_9, FUNC_2(VAR_13->result.var) + VAR_14);
    }
   }
  }
 }

 VAR_11 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_6->last_var; VAR_7++) {
  if (FUNC_10(VAR_9, VAR_7)) {
   VAR_10[VAR_7] = VAR_11++;
  } else {
   VAR_10[VAR_7] = (uint32_t) -1;
  }
 }

 VAR_12 = 0;
 for (VAR_7 = VAR_6->last_var; VAR_7 < VAR_6->last_var + VAR_6->T; VAR_7++) {
  if (FUNC_10(VAR_9, VAR_7)) {
   VAR_10[VAR_7] = VAR_11 + VAR_12++;
  } else {
   VAR_10[VAR_7] = (uint32_t) -1;
  }
 }

 FUNC_7(VAR_9, VAR_4);
 if (VAR_11 == VAR_6->last_var && VAR_12 == VAR_6->T) {
  FUNC_7(VAR_10, VAR_5);
  return;
 }

 FUNC_3(VAR_11 <= VAR_6->last_var);
 FUNC_3(VAR_12 <= VAR_6->T);


 for (VAR_7 = 0; VAR_7 < VAR_6->last; VAR_7++) {
  zend_op *VAR_15 = &VAR_6->opcodes[VAR_7];
  if (VAR_15->op1_type & (VAR_0|VAR_2|VAR_1)) {
   VAR_15->op1.var = FUNC_1(VAR_10[FUNC_2(VAR_15->op1.var)]);
  }
  if (VAR_15->op2_type & (VAR_0|VAR_2|VAR_1)) {
   VAR_15->op2.var = FUNC_1(VAR_10[FUNC_2(VAR_15->op2.var)]);
  }
  if (VAR_15->result_type & (VAR_0|VAR_2|VAR_1)) {
   VAR_15->result.var = FUNC_1(VAR_10[FUNC_2(VAR_15->result.var)]);
  }
 }


 if (VAR_11 != VAR_6->last_var) {
  if (VAR_11) {
   zend_string **VAR_16 = FUNC_8(sizeof(zend_string *), VAR_11, 0);
   for (VAR_7 = 0; VAR_7 < VAR_6->last_var; VAR_7++) {
    if (VAR_10[VAR_7] != (uint32_t) -1) {
     VAR_16[VAR_10[VAR_7]] = VAR_6->vars[VAR_7];
    } else {
     FUNC_13(VAR_6->vars[VAR_7], 0);
    }
   }
   FUNC_6(VAR_6->vars);
   VAR_6->vars = VAR_16;
  } else {
   for (VAR_7 = 0; VAR_7 < VAR_6->last_var; VAR_7++) {
    FUNC_13(VAR_6->vars[VAR_7], 0);
   }
   FUNC_6(VAR_6->vars);
   VAR_6->vars = ((void*)0);
  }
  VAR_6->last_var = VAR_11;
 }

 VAR_6->T = VAR_12;

 FUNC_7(VAR_10, VAR_5);
}
