
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int result_def; int op1_def; } ;
typedef TYPE_1__ zend_ssa_op ;
struct TYPE_10__ {TYPE_1__* ops; } ;
typedef TYPE_2__ zend_ssa ;
typedef int zend_script ;
struct TYPE_11__ {TYPE_4__* opcodes; } ;
typedef TYPE_3__ zend_op_array ;
struct TYPE_12__ {int opcode; int op2_type; int op2; int op1_type; int op1; } ;
typedef TYPE_4__ zend_op ;
struct TYPE_13__ {int ce_flags; int __set; int __get; int destructor; int constructor; int create_object; } ;
typedef TYPE_5__ zend_class_entry ;
typedef int uint32_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;







 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_5__* FUNC_5 (int const*,int ) ;

__attribute__((used)) static int FUNC_6(zend_op_array *VAR_13, zend_ssa *VAR_14, int VAR_15, int VAR_16, const zend_script *VAR_17)
{
 zend_ssa_op *VAR_18 = VAR_14->ops + VAR_15;
 zend_op *VAR_19 = VAR_13->opcodes + VAR_15;

 if (VAR_18->result_def == VAR_16) {
  switch (VAR_19->opcode) {
   case 130:
    return 1;
   case 129:

    if (VAR_19->op1_type == VAR_1) {
     zend_class_entry *VAR_20 = FUNC_5(VAR_17, FUNC_3(FUNC_0(VAR_19->op1)+1));
     uint32_t VAR_21 = VAR_10

      | VAR_9 | VAR_8
      | VAR_11 | VAR_12;
     if (VAR_20 && !VAR_20->create_object && !VAR_20->constructor &&
         !VAR_20->destructor && !VAR_20->__get && !VAR_20->__set &&
         !(VAR_20->ce_flags & VAR_21) &&
      (VAR_20->ce_flags & VAR_7)) {
      return 1;
     }
    }
    break;
   case 128:
    if (VAR_19->op1_type == VAR_1
     && FUNC_4(FUNC_0(VAR_19->op1)) == VAR_0) {
     return 1;
    }
    if (VAR_19->op1_type == VAR_2 && (FUNC_1() & VAR_3)) {
     return 1;
    }
    break;
   case 134:
    if (VAR_19->op1_type == VAR_2 && (FUNC_1() & VAR_3)) {
     return 1;
    }
    break;
  }
    } else if (VAR_18->op1_def == VAR_16) {
  switch (VAR_19->opcode) {
   case 134:
    if (VAR_19->op2_type == VAR_1
     && FUNC_4(FUNC_0(VAR_19->op2)) == VAR_0) {
     return 1;
    }
    if (VAR_19->op2_type == VAR_2 && (FUNC_2() & VAR_3)) {
     return 1;
    }
    break;
   case 133:
   case 132:
   case 131:
    if (FUNC_1() & (VAR_6 | VAR_5 | VAR_4)) {

     return 1;
    }
    break;
  }
 }

    return 0;
}
