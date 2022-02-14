
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_12__ ;


typedef int zval ;
typedef int zend_string ;
struct TYPE_19__ {scalar_t__ num_args; int filename; scalar_t__ T; scalar_t__ last_var; int function_name; TYPE_1__* scope; } ;
typedef TYPE_3__ zend_op_array ;
struct TYPE_20__ {TYPE_2__* opline; TYPE_12__* func; } ;
typedef TYPE_4__ zend_execute_data ;
typedef scalar_t__ uint32_t ;
struct TYPE_21__ {int * s; int member_0; } ;
typedef TYPE_5__ smart_str ;
struct TYPE_18__ {int lineno; } ;
struct TYPE_17__ {int name; } ;
struct TYPE_16__ {scalar_t__ type; TYPE_3__ op_array; } ;


 int * FUNC_0 (TYPE_4__*,int) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int * FUNC_2 (TYPE_4__*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (TYPE_5__*,scalar_t__,TYPE_12__*,int *) ;
 int FUNC_4 (TYPE_5__*,int ) ;
 int FUNC_5 (TYPE_5__*,int ) ;
 int FUNC_6 (TYPE_5__*,char) ;
 int FUNC_7 (TYPE_5__*,char*) ;

zend_string *FUNC_8(zend_execute_data *VAR_1) {
 smart_str VAR_2 = {0};
 zend_op_array *VAR_3 = &VAR_1->func->op_array;
 uint32_t VAR_4 = 0, VAR_5 = VAR_3->num_args, VAR_6 = FUNC_1(VAR_1);
 zval *VAR_7 = FUNC_0(VAR_1, 1);

 if (VAR_3->scope) {
  FUNC_4(&VAR_2, VAR_3->scope->name);
  FUNC_7(&VAR_2, "::");
 }
 FUNC_4(&VAR_2, VAR_3->function_name);
 FUNC_6(&VAR_2, '(');
 if (FUNC_1(VAR_1) > VAR_5) {
  while (VAR_4 < VAR_5) {
   FUNC_3(&VAR_2, VAR_4, VAR_1->func, VAR_7);
   VAR_7++;
   VAR_4++;
  }
  VAR_7 = FUNC_2(VAR_1, VAR_3->last_var + VAR_3->T);
 }
 while (VAR_4 < VAR_6) {
  FUNC_3(&VAR_2, VAR_4, VAR_1->func, VAR_7);
  VAR_7++;
  VAR_4++;
 }
 FUNC_6(&VAR_2, ')');

 if (VAR_1->func->type == VAR_0) {
  FUNC_7(&VAR_2, " at ");
  FUNC_4(&VAR_2, VAR_3->filename);
  FUNC_6(&VAR_2, ':');
  FUNC_5(&VAR_2, VAR_1->opline->lineno);
 } else {
  FUNC_7(&VAR_2, " [internal function]");
 }

 return VAR_2.s;
}
