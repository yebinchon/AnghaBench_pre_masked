
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
struct TYPE_21__ {int function_table; } ;
typedef TYPE_4__ zend_script ;
struct TYPE_22__ {TYPE_3__* scope; int filename; } ;
typedef TYPE_5__ zend_op_array ;
struct TYPE_23__ {int opcode; int op2; int op2_type; int op1_type; } ;
typedef TYPE_6__ zend_op ;
struct TYPE_19__ {int fn_flags; TYPE_3__* scope; } ;
struct TYPE_18__ {int filename; } ;
struct TYPE_24__ {TYPE_2__ common; TYPE_1__ op_array; int type; } ;
typedef TYPE_7__ zend_function ;
struct TYPE_25__ {TYPE_7__* constructor; int type; int function_table; } ;
typedef TYPE_8__ zend_class_entry ;
typedef int zend_bool ;
struct TYPE_20__ {int ce_flags; int function_table; } ;


 int * FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;





 int VAR_7 ;

 int VAR_8 ;
 int VAR_9 ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_10 ;
 TYPE_8__* FUNC_4 (TYPE_4__*,TYPE_5__*,TYPE_6__*) ;
 TYPE_7__* FUNC_5 (int *,int *) ;

zend_function *FUNC_6(
  zend_script *VAR_11, zend_op_array *VAR_12, zend_op *VAR_13)
{
 switch (VAR_13->opcode) {
  case 133:
  {
   zend_string *VAR_14 = FUNC_2(FUNC_0(VAR_13->op2));
   zend_function *VAR_15;
   if (VAR_11 && (VAR_15 = FUNC_5(&VAR_11->function_table, VAR_14)) != ((void*)0)) {
    return VAR_15;
   } else if ((VAR_15 = FUNC_5(FUNC_1(VAR_10), VAR_14)) != ((void*)0)) {
    if (VAR_15->type == VAR_7) {
     return VAR_15;
    } else if (VAR_15->type == VAR_9 &&
               VAR_15->op_array.filename &&
               VAR_15->op_array.filename == VAR_12->filename) {
     return VAR_15;
    }
   }
   break;
  }
  case 132:
  case 130:
   if (VAR_13->op2_type == VAR_0 && FUNC_3(FUNC_0(VAR_13->op2)) == VAR_1) {
    zval *VAR_16 = FUNC_0(VAR_13->op2) + 1;
    zend_function *VAR_17;
    if (VAR_11 && (VAR_17 = FUNC_5(&VAR_11->function_table, FUNC_2(VAR_16)))) {
     return VAR_17;
    } else if ((VAR_17 = FUNC_5(FUNC_1(VAR_10), FUNC_2(VAR_16))) != ((void*)0)) {
     if (VAR_17->type == VAR_7) {
      return VAR_17;
     } else if (VAR_17->type == VAR_9 &&
                VAR_17->op_array.filename &&
                VAR_17->op_array.filename == VAR_12->filename) {
      return VAR_17;
     }
    }
   }
   break;
  case 129:
   if (VAR_13->op2_type == VAR_0 && FUNC_3(FUNC_0(VAR_13->op2)) == VAR_1) {
    zend_class_entry *VAR_18 = FUNC_4(
     VAR_11, VAR_12, VAR_13);
    if (VAR_18) {
     zend_string *VAR_19 = FUNC_2(FUNC_0(VAR_13->op2) + 1);
     zend_function *VAR_20 = FUNC_5(&VAR_18->function_table, VAR_19);
     if (VAR_20) {
      zend_bool VAR_21 = (VAR_20->common.fn_flags & VAR_5) != 0;
      zend_bool VAR_22 = VAR_20->common.scope == VAR_12->scope;
      if (VAR_21|| VAR_22) {
       return VAR_20;
      }
     }
    }
   }
   break;
  case 131:
   if (VAR_13->op1_type == VAR_2
     && VAR_13->op2_type == VAR_0 && FUNC_3(FUNC_0(VAR_13->op2)) == VAR_1
     && VAR_12->scope && !(VAR_12->scope->ce_flags & VAR_6)) {
    zend_string *VAR_23 = FUNC_2(FUNC_0(VAR_13->op2) + 1);
    zend_function *VAR_24 = FUNC_5(
     &VAR_12->scope->function_table, VAR_23);
    if (VAR_24) {
     zend_bool VAR_25 = (VAR_24->common.fn_flags & VAR_4) != 0;
     zend_bool VAR_26 = (VAR_24->common.fn_flags & VAR_3) != 0;
     zend_bool VAR_27 = VAR_24->common.scope == VAR_12->scope;
     if ((VAR_25 && VAR_27)
       || (VAR_26 && (!VAR_25 || VAR_27))) {
      return VAR_24;
     }
    }
   }
   break;
  case 128:
  {
   zend_class_entry *VAR_28 = FUNC_4(
    VAR_11, VAR_12, VAR_13);
   if (VAR_28 && VAR_28->type == VAR_8) {
    return VAR_28->constructor;
   }
   break;
  }
 }
 return ((void*)0);
}
