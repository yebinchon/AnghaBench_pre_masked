
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zend_string ;
struct TYPE_5__ {scalar_t__ function_name; scalar_t__ scope; } ;
typedef TYPE_1__ zend_op_array ;
struct TYPE_6__ {scalar_t__ type; } ;
typedef TYPE_2__ zend_function ;
typedef int phpdbg_breakbase_t ;


 size_t VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int * FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (scalar_t__) ;

__attribute__((used)) static inline phpdbg_breakbase_t *FUNC_7(zend_function *VAR_3)
{
 zend_op_array *VAR_4;

 if (VAR_3->type != VAR_1) {
  return ((void*)0);
 }

 VAR_4 = (zend_op_array *) VAR_3;

 if (VAR_4->scope) {

  return FUNC_2(VAR_4);
 }

 if (VAR_4->function_name) {
  phpdbg_breakbase_t *VAR_5;
  zend_string *VAR_6 = FUNC_6(VAR_4->function_name);

  VAR_5 = FUNC_3(&FUNC_0(VAR_2)[VAR_0], VAR_6);

  FUNC_5(VAR_6);
  return VAR_5;
 } else {
  return FUNC_4(&FUNC_0(VAR_2)[VAR_0], FUNC_1("main"));
 }
}
