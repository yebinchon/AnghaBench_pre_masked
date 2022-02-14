
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_14__ ;


struct TYPE_20__ {TYPE_1__* jmp_addr; TYPE_1__* zv; } ;
struct TYPE_21__ {scalar_t__ op1_type; scalar_t__ op2_type; int opcode; int extended_value; int type; struct TYPE_21__* name; TYPE_14__ op2; TYPE_14__ op1; } ;
typedef TYPE_1__ zval ;
typedef TYPE_1__ zend_string ;
typedef int zend_persistent_script ;
struct TYPE_22__ {int last_literal; int last; int num_args; int fn_flags; int last_var; int run_time_cache; TYPE_1__* static_variables; int static_variables_ptr; TYPE_1__* prototype; TYPE_1__* try_catch_array; TYPE_1__* doc_comment; TYPE_1__* scope; TYPE_1__* live_range; TYPE_1__* filename; TYPE_1__* function_name; TYPE_1__** vars; TYPE_1__* arg_info; TYPE_1__* opcodes; TYPE_1__* literals; int * refcount; } ;
typedef TYPE_3__ zend_op_array ;
typedef TYPE_1__ zend_op ;
typedef TYPE_1__ zend_arg_info ;
typedef TYPE_1__ HashTable ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_1__**) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*,TYPE_1__*,TYPE_14__) ;


 int VAR_5 ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int *,void*,int (*) (TYPE_1__*,int *,void*),int ) ;
 int FUNC_9 (int *,int *,void*) ;
 int FUNC_10 (TYPE_1__*,int *,void*) ;

__attribute__((used)) static void FUNC_11(zend_op_array *VAR_6,
                                                 zend_persistent_script *VAR_7,
                                                 void *VAR_8)
{
 if (VAR_6->static_variables && !FUNC_0(VAR_6->static_variables)) {
  HashTable *VAR_9;

  FUNC_1(VAR_6->static_variables);
  VAR_9 = VAR_6->static_variables;
  FUNC_8(VAR_9,
    VAR_7, VAR_8, FUNC_10, VAR_5);
 }

 if (VAR_6->refcount) {
  VAR_6->refcount = ((void*)0);
  FUNC_1(VAR_6->literals);
  FUNC_1(VAR_6->opcodes);
  FUNC_1(VAR_6->arg_info);
  FUNC_1(*VAR_6->vars);
  FUNC_2(VAR_6->function_name);
  FUNC_2(VAR_6->filename);
  FUNC_1(VAR_6->live_range);
  FUNC_1(VAR_6->scope);
  FUNC_2(VAR_6->doc_comment);
  FUNC_1(VAR_6->try_catch_array);
  FUNC_1(VAR_6->prototype);
  return;
 }

 if (VAR_6->literals && !FUNC_0(VAR_6->literals)) {
  zval *VAR_10, *VAR_11;

  FUNC_1(VAR_6->literals);
  VAR_10 = VAR_6->literals;
  VAR_11 = VAR_10 + VAR_6->last_literal;
  while (VAR_10 < VAR_11) {
   FUNC_10(VAR_10, VAR_7, VAR_8);
   VAR_10++;
  }
 }

 if (!FUNC_0(VAR_6->opcodes)) {
  zend_op *VAR_12, *VAR_13;

  FUNC_1(VAR_6->opcodes);
  VAR_12 = VAR_6->opcodes;
  VAR_13 = VAR_12 + VAR_6->last;
  while (VAR_12 < VAR_13) {
   if (VAR_12->op1_type == VAR_0) {
    FUNC_6(VAR_6, VAR_12, VAR_12->op1);
   }
   if (VAR_12->op2_type == VAR_0) {
    FUNC_6(VAR_6, VAR_12, VAR_12->op2);
   }
   FUNC_7(VAR_12);
   VAR_12++;
  }

  if (VAR_6->arg_info) {
   zend_arg_info *VAR_14, *VAR_15;
   FUNC_1(VAR_6->arg_info);
   VAR_14 = VAR_6->arg_info;
   VAR_15 = VAR_14 + VAR_6->num_args;
   if (VAR_6->fn_flags & VAR_1) {
    VAR_14--;
   }
   if (VAR_6->fn_flags & VAR_3) {
    VAR_15++;
   }
   while (VAR_14 < VAR_15) {
    if (!FUNC_0(VAR_14->name)) {
     FUNC_2(VAR_14->name);
    }
    FUNC_9(&VAR_14->type, VAR_7, VAR_8);
    VAR_14++;
   }
  }

  if (VAR_6->vars) {
   zend_string **VAR_16, **VAR_17;

   FUNC_1(*VAR_6->vars);
   VAR_16 = VAR_6->vars;
   VAR_17 = VAR_16 + VAR_6->last_var;
   while (VAR_16 < VAR_17) {
    if (!FUNC_0(*VAR_16)) {
     FUNC_2(*VAR_16);
    }
    VAR_16++;
   }
  }

  FUNC_2(VAR_6->function_name);
  FUNC_2(VAR_6->filename);
  FUNC_1(VAR_6->live_range);
  FUNC_1(VAR_6->scope);
  FUNC_2(VAR_6->doc_comment);
  FUNC_1(VAR_6->try_catch_array);
  FUNC_1(VAR_6->prototype);

  if (VAR_6->fn_flags & VAR_2) {
   if (VAR_6->static_variables) {
    FUNC_5(VAR_6->static_variables_ptr);
   } else {
    FUNC_4(VAR_6->static_variables_ptr, &VAR_6->static_variables);
   }
   FUNC_5(VAR_6->run_time_cache);
  } else {
   FUNC_4(VAR_6->static_variables_ptr, &VAR_6->static_variables);
   FUNC_1(FUNC_3(VAR_6->run_time_cache));
  }
 }
}
