
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
struct TYPE_12__ {int opcode; int op1; int op1_type; } ;
typedef TYPE_4__ zend_op ;
struct TYPE_13__ {int ce_flags; int __set; int __get; int destructor; int constructor; int create_object; } ;
typedef TYPE_5__ zend_class_entry ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 TYPE_5__* FUNC_2 (int const*,int ) ;

__attribute__((used)) static int FUNC_3(zend_op_array *VAR_2, zend_ssa *VAR_3, int VAR_4, int VAR_5, const zend_script *VAR_6)
{
 zend_ssa_op *VAR_7 = VAR_3->ops + VAR_4;
 zend_op *VAR_8 = VAR_2->opcodes + VAR_4;

 if (VAR_7->result_def == VAR_5) {
  switch (VAR_8->opcode) {
   case 134:
   case 141:
   case 128:
   case 140:
    return 1;
   case 133:

    if (VAR_8->op1_type == VAR_0) {
     zend_class_entry *VAR_9 = FUNC_2(VAR_6, FUNC_1(FUNC_0(VAR_8->op1)+1));
     if (VAR_9 && !VAR_9->create_object && !VAR_9->constructor &&
         !VAR_9->destructor && !VAR_9->__get && !VAR_9->__set &&
         !(VAR_9->ce_flags & VAR_1)) {
      return 1;
     }
    }
    break;
  }
 } else if (VAR_7->op1_def == VAR_5) {
  switch (VAR_8->opcode) {
   case 140:
   case 139:
   case 137:
   case 135:
   case 138:
   case 136:
   case 129:
   case 130:
   case 131:
   case 132:
    return 1;
  }
 }

 return 0;
}
