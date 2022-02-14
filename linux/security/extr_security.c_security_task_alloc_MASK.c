
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 int FUNC_0 (int ,int ,struct task_struct*,unsigned long) ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct task_struct*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct task_struct *VAR_1, unsigned long VAR_2)
{
 int VAR_3 = FUNC_1(VAR_1);

 if (VAR_3)
  return VAR_3;
 VAR_3 = FUNC_0(VAR_0, 0, VAR_1, VAR_2);
 if (FUNC_3(VAR_3))
  FUNC_2(VAR_1);
 return VAR_3;
}
