
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (struct task_struct*) ;
 scalar_t__ FUNC_2 (struct task_struct*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int) ;

void FUNC_4(struct task_struct *VAR_3, int VAR_4)
{
 bool VAR_5;

 if (FUNC_3(VAR_4))
  return;





 VAR_5 = !(VAR_4 & VAR_0) || FUNC_1(VAR_3);
 VAR_5 &= !(VAR_4 & VAR_1) || FUNC_2(VAR_3);


 if (!VAR_5)
  return;

 FUNC_0(VAR_2, 0);
}
