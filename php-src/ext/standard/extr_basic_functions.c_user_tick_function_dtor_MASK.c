
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int arg_count; int * arguments; } ;
typedef TYPE_1__ user_tick_function_entry ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(user_tick_function_entry *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->arg_count; VAR_1++) {
  FUNC_1(&VAR_0->arguments[VAR_1]);
 }
 FUNC_0(VAR_0->arguments);
}
