
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int zval ;
typedef int zend_op_array ;
struct TYPE_16__ {int constant; } ;
struct TYPE_14__ {size_t extended_value; scalar_t__ opcode; scalar_t__ op1_type; TYPE_7__ op2; TYPE_7__ op1; } ;
typedef TYPE_1__ zend_op ;
struct TYPE_13__ {int fn_flags; size_t required_num_args; size_t num_args; TYPE_1__* opcodes; int * arg_info; } ;
struct TYPE_15__ {scalar_t__ type; TYPE_10__ op_array; } ;
typedef TYPE_2__ zend_function ;
typedef size_t uint32_t ;


 int FUNC_0 (TYPE_10__*,TYPE_1__*,TYPE_7__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_7__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *,int *) ;

__attribute__((used)) static void FUNC_9(zend_op_array *VAR_11, zend_op *VAR_12, zend_op *VAR_13, zend_function *VAR_14)
{
 if (VAR_14->type == VAR_10
  && !(VAR_14->op_array.fn_flags & (VAR_3|VAR_4))

  && !(VAR_14->op_array.fn_flags & (VAR_5))
  && VAR_12->extended_value >= VAR_14->op_array.required_num_args
  && VAR_14->op_array.opcodes[VAR_14->op_array.num_args].opcode == VAR_9) {

  zend_op *VAR_15 = VAR_14->op_array.opcodes + VAR_14->op_array.num_args;

  if (VAR_15->op1_type == VAR_0) {
   uint32_t VAR_16, VAR_17 = VAR_14->op_array.num_args;
   VAR_17 += (VAR_14->op_array.fn_flags & VAR_6) != 0;

   if (VAR_12->opcode == VAR_7 && VAR_12->op1_type == VAR_2) {



    return;
   }

   for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++) {


    if (FUNC_4(&VAR_14->op_array.arg_info[VAR_16])) {
     return;
    }
   }

   if (VAR_12->extended_value < VAR_14->op_array.num_args) {

    VAR_16 = VAR_12->extended_value;

    do {
     if (FUNC_6(FUNC_0(&VAR_14->op_array, &VAR_14->op_array.opcodes[VAR_16], VAR_14->op_array.opcodes[VAR_16].op2)) == VAR_1) {
      return;
     }
     VAR_16++;
    } while (VAR_16 < VAR_14->op_array.num_args);
   }

   if (FUNC_2(VAR_13)) {
    zval VAR_18;

    FUNC_5(&VAR_18, FUNC_0(&VAR_14->op_array, VAR_15, VAR_15->op1));
    VAR_13->opcode = VAR_8;
    VAR_13->op1_type = VAR_0;
    VAR_13->op1.constant = FUNC_8(VAR_11, &VAR_18);
    FUNC_3(VAR_13->op2);
   } else {
    FUNC_1(VAR_13);
   }

   FUNC_7(VAR_13-1);
  }
 }
}
