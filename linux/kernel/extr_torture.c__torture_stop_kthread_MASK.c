
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct task_struct*) ;

void FUNC_2(char *VAR_0, struct task_struct **VAR_1)
{
 if (*VAR_1 == ((void*)0))
  return;
 FUNC_0(VAR_0);
 FUNC_1(*VAR_1);
 *VAR_1 = ((void*)0);
}
