
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_tick_function {int arg; int (* func ) (int,int ) ;} ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, void *VAR_1)
{
 struct st_tick_function *VAR_2 = (struct st_tick_function *)VAR_0;
 VAR_2->func(*((int *)VAR_1), VAR_2->arg);
}
