
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct task_struct*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (struct task_struct*,int ) ;

bool FUNC_2(struct task_struct *VAR_6)
{
 if (VAR_6->flags & (VAR_1 | VAR_2))
  return 0;

 if (FUNC_1(VAR_6, VAR_3))
  return 0;

 if (VAR_5 || FUNC_0(VAR_6))
  return 1;

 if (VAR_4 && !(VAR_6->flags & VAR_0))
  return 1;

 return 0;
}
