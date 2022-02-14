
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
struct TYPE_5__ {int arg_count; struct TYPE_5__* arguments; } ;
typedef TYPE_1__ php_shutdown_function_entry ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(zval *VAR_0)
{
 int VAR_1;
 php_shutdown_function_entry *VAR_2 = FUNC_0(VAR_0);

 for (VAR_1 = 0; VAR_1 < VAR_2->arg_count; VAR_1++) {
  FUNC_2(&VAR_2->arguments[VAR_1]);
 }
 FUNC_1(VAR_2->arguments);
 FUNC_1(VAR_2);
}
