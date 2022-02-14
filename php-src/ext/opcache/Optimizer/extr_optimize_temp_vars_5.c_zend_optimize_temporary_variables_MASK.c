
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
struct TYPE_12__ {int arena; } ;
typedef TYPE_4__ zend_optimizer_ctx ;
struct TYPE_13__ {int T; int last_var; int last; int fn_flags; TYPE_6__* opcodes; } ;
typedef TYPE_5__ zend_op_array ;
struct TYPE_9__ {void* var; } ;
struct TYPE_11__ {void* var; } ;
struct TYPE_10__ {void* var; } ;
struct TYPE_14__ {int result_type; int op1_type; scalar_t__ opcode; int extended_value; int op2_type; TYPE_1__ result; TYPE_3__ op2; TYPE_2__ op1; } ;
typedef TYPE_6__ zend_op ;
typedef scalar_t__ zend_bitset ;
typedef int uint32_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (void*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_4 (int *,int) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int *,void*) ;
 int FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (scalar_t__,int) ;
 scalar_t__ FUNC_9 (scalar_t__,int) ;
 int FUNC_10 (scalar_t__,int) ;
 int FUNC_11 (int) ;

void FUNC_12(zend_op_array *VAR_14, zend_optimizer_ctx *VAR_15)
{
 int VAR_16 = VAR_14->T;
 int VAR_17 = VAR_14->last_var;
 uint32_t VAR_18;
 zend_bitset VAR_19;
 zend_op **VAR_20;
 zend_bitset VAR_21;
 int *VAR_22;
 zend_op *VAR_23, *VAR_24;
 int VAR_25;
 int VAR_26;
 int VAR_27 = -1;
 void *VAR_28 = FUNC_5(VAR_15->arena);

 VAR_18 = FUNC_11(VAR_16);
 VAR_19 = (zend_bitset) FUNC_4(&VAR_15->arena, VAR_18 * VAR_3);
 VAR_20 = (zend_op **) FUNC_4(&VAR_15->arena, VAR_16 * sizeof(zend_op *));
 VAR_21 = (zend_bitset) FUNC_4(&VAR_15->arena, VAR_18 * VAR_3);
 VAR_22 = (int *) FUNC_4(&VAR_15->arena, VAR_16 * sizeof(int));

    VAR_24 = VAR_14->opcodes;
    VAR_23 = &VAR_14->opcodes[VAR_14->last - 1];


    while (VAR_23 >= VAR_24) {
        if (VAR_23->result_type & (VAR_1 | VAR_0)) {
   VAR_20[FUNC_3(VAR_23->result.var) - VAR_17] = VAR_23;
  }
  VAR_23--;
 }

 FUNC_7(VAR_21, VAR_18);
 FUNC_7(VAR_19, VAR_18);

    VAR_24 = VAR_14->opcodes;
    VAR_23 = &VAR_14->opcodes[VAR_14->last - 1];

    while (VAR_23 >= VAR_24) {
  if ((VAR_23->op1_type & (VAR_1 | VAR_0))) {
   VAR_25 = FUNC_3(VAR_23->op1.var) - VAR_17;
   if (VAR_23->opcode == VAR_11) {
    int VAR_29 = (((VAR_23->extended_value + 1) * sizeof(zend_string*)) + (sizeof(zval) - 1)) / sizeof(zval);
    int VAR_30;

    VAR_30 = VAR_27;
    while (VAR_30 >= 0 && !FUNC_9(VAR_19, VAR_30)) {
     VAR_30--;
    }
    VAR_27 = FUNC_1(VAR_27, VAR_30 + VAR_29);
    VAR_30 = VAR_30 + 1;
    VAR_22[VAR_25] = VAR_30;
    FUNC_10(VAR_21, VAR_25);
    FUNC_10(VAR_19, VAR_30);
    VAR_23->op1.var = FUNC_2(VAR_30 + VAR_17);
    while (VAR_29 > 1) {
     VAR_29--;
     FUNC_10(VAR_19, VAR_30 + VAR_29);
    }
   } else {
    if (!FUNC_9(VAR_21, VAR_25)) {
     int VAR_31 = 0;





     if ((VAR_14->fn_flags & VAR_2) &&
         (VAR_23->opcode == VAR_9 ||
          VAR_23->opcode == VAR_8 ||
          VAR_23->opcode == VAR_10 ||
          VAR_23->opcode == VAR_7 ||
          VAR_23->opcode == VAR_6)) {
      zend_op *VAR_32 = VAR_23;

      while (--VAR_32 >= VAR_24) {
       if (VAR_32->opcode == VAR_5) {
        VAR_31 = 1;
        break;
       } else if (VAR_32->opcode != VAR_7 &&
                  VAR_32->opcode != VAR_6 &&
                  VAR_32->opcode != VAR_13 &&
                  VAR_32->opcode != VAR_4) {
        break;
       }
      }
     }
     if (VAR_31) {
      VAR_26 = ++VAR_27;
      FUNC_10(VAR_19, VAR_26);
     } else {
      FUNC_0();
     }
     VAR_22[VAR_25] = VAR_26;
     FUNC_10(VAR_21, VAR_25);
    }
    VAR_23->op1.var = FUNC_2(VAR_22[VAR_25] + VAR_17);
   }
  }

  if ((VAR_23->op2_type & (VAR_1 | VAR_0))) {
   VAR_25 = FUNC_3(VAR_23->op2.var) - VAR_17;
   if (!FUNC_9(VAR_21, VAR_25)) {
    FUNC_0();
    VAR_22[VAR_25] = VAR_26;
    FUNC_10(VAR_21, VAR_25);
   }
   VAR_23->op2.var = FUNC_2(VAR_22[VAR_25] + VAR_17);
  }

  if (VAR_23->result_type & (VAR_1 | VAR_0)) {
   VAR_25 = FUNC_3(VAR_23->result.var) - VAR_17;
   if (FUNC_9(VAR_21, VAR_25)) {
    if (VAR_20[VAR_25] == VAR_23) {



     if (VAR_23->opcode != VAR_5) {
      FUNC_8(VAR_19, VAR_22[VAR_25]);
     }
    }
    VAR_23->result.var = FUNC_2(VAR_22[VAR_25] + VAR_17);
    if (VAR_23->opcode == VAR_12) {
     if (VAR_20[VAR_25] == VAR_23) {
      uint32_t VAR_33 = ((VAR_23->extended_value * sizeof(zend_string*)) + (sizeof(zval) - 1)) / sizeof(zval);
      while (VAR_33 > 1) {
       VAR_33--;
       FUNC_8(VAR_19, VAR_22[VAR_25]+VAR_33);
      }
     }
    }
   } else {

    FUNC_0();
    VAR_22[VAR_25] = VAR_26;
    FUNC_10(VAR_21, VAR_25);
    VAR_23->result.var = FUNC_2(VAR_26 + VAR_17);
   }
  }

  VAR_23--;
 }

 FUNC_6(&VAR_15->arena, VAR_28);
 VAR_14->T = VAR_27 + 1;
}
