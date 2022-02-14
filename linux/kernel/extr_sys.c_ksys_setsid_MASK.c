
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {TYPE_1__* signal; } ;
struct pid {int dummy; } ;
typedef int pid_t ;
struct TYPE_4__ {struct task_struct* group_leader; } ;
struct TYPE_3__ {int leader; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 scalar_t__ FUNC_0 (struct pid*,int ) ;
 int FUNC_1 (struct pid*) ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 (struct task_struct*) ;
 int FUNC_5 (struct pid*) ;
 struct pid* FUNC_6 (struct task_struct*) ;
 int VAR_3 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(void)
{
 struct task_struct *VAR_4 = VAR_2->group_leader;
 struct pid *VAR_5 = FUNC_6(VAR_4);
 pid_t VAR_6 = FUNC_1(VAR_5);
 int VAR_7 = -VAR_0;

 FUNC_7(&VAR_3);

 if (VAR_4->signal->leader)
  goto out;




 if (FUNC_0(VAR_5, VAR_1))
  goto out;

 VAR_4->signal->leader = 1;
 FUNC_5(VAR_5);

 FUNC_2(VAR_4);

 VAR_7 = VAR_6;
out:
 FUNC_8(&VAR_3);
 if (VAR_7 > 0) {
  FUNC_3(VAR_4);
  FUNC_4(VAR_4);
 }
 return VAR_7;
}
