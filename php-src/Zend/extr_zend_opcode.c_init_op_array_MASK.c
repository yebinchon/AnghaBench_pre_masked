
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zend_uchar ;
struct TYPE_4__ {int* refcount; int cache_size; int reserved; int run_time_cache; int * literals; scalar_t__ last_literal; scalar_t__ fn_flags; scalar_t__ last_try_catch; int * static_variables; int static_variables_ptr; scalar_t__ last_live_range; int * try_catch_array; int * live_range; int * prototype; int * scope; scalar_t__ required_num_args; scalar_t__ num_args; int * arg_info; int * doc_comment; int filename; int * function_name; scalar_t__ T; int * vars; scalar_t__ last_var; scalar_t__ opcodes; scalar_t__ last; scalar_t__* arg_flags; int type; } ;
typedef TYPE_1__ zend_op_array ;
typedef int zend_op ;
typedef int uint32_t ;
typedef int llist_apply_with_arg_func_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int **) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int ,TYPE_1__*) ;
 int VAR_5 ;

void FUNC_5(zend_op_array *VAR_6, zend_uchar VAR_7, int VAR_8)
{
 VAR_6->type = VAR_7;
 VAR_6->arg_flags[0] = 0;
 VAR_6->arg_flags[1] = 0;
 VAR_6->arg_flags[2] = 0;

 VAR_6->refcount = (uint32_t *) FUNC_1(sizeof(uint32_t));
 *VAR_6->refcount = 1;
 VAR_6->last = 0;
 VAR_6->opcodes = FUNC_1(VAR_8 * sizeof(zend_op));

 VAR_6->last_var = 0;
 VAR_6->vars = ((void*)0);

 VAR_6->T = 0;

 VAR_6->function_name = ((void*)0);
 VAR_6->filename = FUNC_3();
 VAR_6->doc_comment = ((void*)0);

 VAR_6->arg_info = ((void*)0);
 VAR_6->num_args = 0;
 VAR_6->required_num_args = 0;

 VAR_6->scope = ((void*)0);
 VAR_6->prototype = ((void*)0);

 VAR_6->live_range = ((void*)0);
 VAR_6->try_catch_array = ((void*)0);
 VAR_6->last_live_range = 0;

 VAR_6->static_variables = ((void*)0);
 FUNC_0(VAR_6->static_variables_ptr, &VAR_6->static_variables);
 VAR_6->last_try_catch = 0;

 VAR_6->fn_flags = 0;

 VAR_6->last_literal = 0;
 VAR_6->literals = ((void*)0);

 FUNC_0(VAR_6->run_time_cache, ((void*)0));
 VAR_6->cache_size = VAR_5 * sizeof(void*);

 FUNC_2(VAR_6->reserved, 0, VAR_1 * sizeof(void*));

 if (VAR_2 & VAR_0) {
  FUNC_4(&VAR_4, (llist_apply_with_arg_func_t) VAR_3, VAR_6);
 }
}
