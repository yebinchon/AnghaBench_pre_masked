
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftrace_ops {int flags; int func; } ;
typedef int ftrace_func_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

ftrace_func_t FUNC_0(struct ftrace_ops *VAR_3)
{




 if (!(VAR_3->flags & VAR_1) ||
     VAR_3->flags & VAR_0)
  return VAR_2;

 return VAR_3->func;
}
