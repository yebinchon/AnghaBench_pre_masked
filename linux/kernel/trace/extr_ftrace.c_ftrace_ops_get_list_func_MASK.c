
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftrace_ops {int flags; } ;
typedef int ftrace_func_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ftrace_ops*) ;
 int VAR_3 ;

__attribute__((used)) static ftrace_func_t FUNC_1(struct ftrace_ops *VAR_4)
{




 if (VAR_4->flags & (VAR_1 | VAR_2) ||
     VAR_0)
  return VAR_3;

 return FUNC_0(VAR_4);
}
