
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
struct TYPE_3__ {int * arguments; scalar_t__ arg_count; } ;
typedef TYPE_1__ php_shutdown_function_entry ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *,int *,int *,scalar_t__,int *) ;
 int FUNC_3 (int ,char*,int ) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(zval *VAR_2)
{
    php_shutdown_function_entry *VAR_3 = FUNC_1(VAR_2);
 zval VAR_4;

 if (!FUNC_5(&VAR_3->arguments[0], 0, ((void*)0))) {
  zend_string *VAR_5
   = FUNC_4(&VAR_3->arguments[0]);
  FUNC_3(VAR_0, "(Registered shutdown functions) Unable to call %s() - function does not exist", FUNC_0(VAR_5));
  FUNC_6(VAR_5, 0);
  return 0;
 }

 if (FUNC_2(((void*)0), ((void*)0),
    &VAR_3->arguments[0],
    &VAR_4,
    VAR_3->arg_count - 1,
    VAR_3->arguments + 1) == VAR_1)
 {
  FUNC_7(&VAR_4);
 }
 return 0;
}
