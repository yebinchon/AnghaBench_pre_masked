
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int mm; } ;


 struct task_struct* FUNC_0 (struct task_struct*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static struct task_struct *FUNC_1(struct task_struct *VAR_1,
        int VAR_2)
{
 struct task_struct *VAR_3;
 if (!VAR_1->mm)
  return ((void*)0);
 if (VAR_2)
  return VAR_1;
 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3)
  return VAR_3;
 if (VAR_0)
  return VAR_1;
 return ((void*)0);
}
