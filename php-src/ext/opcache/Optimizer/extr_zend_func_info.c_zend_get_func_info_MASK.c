
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int zval ;
typedef int zend_string ;
typedef int zend_ssa ;
typedef int zend_op_array ;
struct TYPE_18__ {int fn_flags; scalar_t__ arg_info; int scope; } ;
struct TYPE_19__ {scalar_t__ type; TYPE_3__ common; } ;
typedef TYPE_4__ zend_function ;
struct TYPE_17__ {int type; } ;
struct TYPE_20__ {TYPE_2__ return_info; } ;
typedef TYPE_5__ zend_func_info ;
typedef int zend_class_entry ;
struct TYPE_21__ {TYPE_4__* callee_func; TYPE_13__* caller_init_opline; int caller_op_array; } ;
typedef TYPE_6__ zend_call_info ;
typedef int uint32_t ;
struct TYPE_22__ {int (* info_func ) (TYPE_6__ const*,int const*) ;int info; int name_len; int name; } ;
typedef TYPE_7__ func_info_t ;
struct TYPE_16__ {char* function_name; } ;
struct TYPE_15__ {int op2; } ;
struct TYPE_14__ {TYPE_1__ common; } ;


 int FUNC_0 (int ,TYPE_13__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_5__* FUNC_2 (int *) ;
 scalar_t__ VAR_11 ;
 TYPE_7__* FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,char*) ;
 TYPE_10__* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (TYPE_6__ const*,int const*) ;
 int FUNC_7 (int *,scalar_t__,int **) ;
 int * FUNC_8 (int *,int *,int) ;
 int FUNC_9 (int ,int ) ;

uint32_t FUNC_10(const zend_call_info *VAR_15, const zend_ssa *VAR_16)
{
 uint32_t VAR_17 = 0;
 const zend_function *VAR_18 = VAR_15->callee_func;

 if (VAR_18->type == VAR_11) {
  zval *VAR_19;
  zend_string *VAR_20 = FUNC_4(FUNC_0(VAR_15->caller_op_array, VAR_15->caller_init_opline, VAR_15->caller_init_opline->op2));

  if (!VAR_15->callee_func->common.scope
    && (VAR_19 = FUNC_8(&VAR_13, VAR_20, 1))) {
   func_info_t *VAR_21 = FUNC_3(VAR_19);
   if (FUNC_1(FUNC_9(VAR_21->name, VAR_21->name_len))) {
    VAR_17 = VAR_4;
   } else if (VAR_21->info_func) {
    VAR_17 = VAR_21->info_func(VAR_15, VAR_16);
   } else {
    VAR_17 = VAR_21->info;
   }
   return VAR_17;
  }

  if (VAR_18->common.fn_flags & VAR_9) {
   zend_class_entry *VAR_22;
   VAR_17 = FUNC_7(((void*)0), VAR_18->common.arg_info - 1, &VAR_22);
  } else {



   VAR_17 = VAR_0 | VAR_1 | VAR_2 | VAR_3
    | VAR_5 | VAR_6;
  }
  if (VAR_18->common.fn_flags & VAR_10) {
   VAR_17 |= VAR_7;
  }
 } else {

  zend_func_info *VAR_23 = FUNC_2((zend_op_array*)VAR_18);
  if (VAR_23) {
   VAR_17 = VAR_23->return_info.type;
  }
  if (!VAR_17) {
   VAR_17 = VAR_0 | VAR_1 | VAR_2 | VAR_3
    | VAR_5 | VAR_6;

   if ((VAR_18->common.fn_flags & VAR_10)
     && !(VAR_18->common.fn_flags & VAR_8)) {
    VAR_17 |= VAR_7;
   }
  }
 }
 return VAR_17;
}
