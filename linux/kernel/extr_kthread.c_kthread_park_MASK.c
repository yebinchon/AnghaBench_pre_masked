
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int flags; } ;
struct kthread {int parked; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 struct task_struct* VAR_5 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 struct kthread* FUNC_4 (struct task_struct*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct task_struct*,int ) ;
 int FUNC_7 (struct task_struct*) ;

int FUNC_8(struct task_struct *VAR_6)
{
 struct kthread *VAR_7 = FUNC_4(VAR_6);

 if (FUNC_0(VAR_6->flags & VAR_3))
  return -VAR_1;

 if (FUNC_1(FUNC_3(VAR_2, &VAR_7->flags)))
  return -VAR_0;

 FUNC_2(VAR_2, &VAR_7->flags);
 if (VAR_6 != VAR_5) {
  FUNC_7(VAR_6);




  FUNC_5(&VAR_7->parked);




  FUNC_1(!FUNC_6(VAR_6, VAR_4));
 }

 return 0;
}
