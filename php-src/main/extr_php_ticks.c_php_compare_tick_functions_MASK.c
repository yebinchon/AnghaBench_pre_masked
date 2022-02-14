
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_tick_function {scalar_t__ func; scalar_t__ arg; } ;



__attribute__((used)) static int FUNC_0(void *VAR_0, void *VAR_1)
{
  struct st_tick_function *VAR_2 = (struct st_tick_function *)VAR_0;
  struct st_tick_function *VAR_3 = (struct st_tick_function *)VAR_1;
  return VAR_2->func == VAR_3->func && VAR_2->arg == VAR_3->arg;
}
