
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct task_struct*) ;

__attribute__((used)) static bool FUNC_1(struct task_struct *VAR_1)
{
 if (FUNC_0(VAR_1))
  return 1;
 if (VAR_1->flags & VAR_0)
  return 1;
 return 0;
}
