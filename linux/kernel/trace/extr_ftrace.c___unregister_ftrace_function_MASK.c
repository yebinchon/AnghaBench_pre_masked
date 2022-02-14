
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftrace_ops {int flags; int saved_func; int func; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,struct ftrace_ops*) ;
 int FUNC_2 () ;

int FUNC_3(struct ftrace_ops *VAR_4)
{
 int VAR_5;

 if (FUNC_0(!(VAR_4->flags & VAR_1)))
  return -VAR_0;

 VAR_5 = FUNC_1(&VAR_3, VAR_4);

 if (VAR_5 < 0)
  return VAR_5;

 if (VAR_2)
  FUNC_2();

 VAR_4->func = VAR_4->saved_func;

 return 0;
}
