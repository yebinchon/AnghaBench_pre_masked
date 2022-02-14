
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct task_struct*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct task_struct*) ;
 scalar_t__ FUNC_3 (struct task_struct*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct task_struct*,int ) ;

bool FUNC_7(struct task_struct *VAR_3)
{
 unsigned long VAR_4;
 if (FUNC_1(VAR_3))
  return 0;

 FUNC_4(&VAR_2, VAR_4);
 if (!FUNC_2(VAR_3) || FUNC_3(VAR_3)) {
  FUNC_5(&VAR_2, VAR_4);
  return 0;
 }

 if (!(VAR_3->flags & VAR_0))
  FUNC_0(VAR_3);
 else
  FUNC_6(VAR_3, VAR_1);

 FUNC_5(&VAR_2, VAR_4);
 return 1;
}
