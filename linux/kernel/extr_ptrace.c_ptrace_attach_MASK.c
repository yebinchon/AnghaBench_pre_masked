
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {int flags; int exit_state; long ptrace; int jobctl; TYPE_2__* signal; TYPE_1__* sighand; } ;
struct TYPE_4__ {int cred_guard_mutex; } ;
struct TYPE_3__ {int siglock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct task_struct*,int ) ;
 int FUNC_1 (struct task_struct*) ;
 int VAR_18 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct task_struct*,int ) ;
 int FUNC_5 (struct task_struct*,int ) ;
 scalar_t__ FUNC_6 (struct task_struct*,int ) ;
 int FUNC_7 (int ,int ,struct task_struct*) ;
 int FUNC_8 (struct task_struct*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (struct task_struct*) ;
 int FUNC_12 (struct task_struct*) ;
 scalar_t__ FUNC_13 (struct task_struct*,int) ;
 int FUNC_14 (struct task_struct*) ;
 int VAR_19 ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (int *,int ,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static int FUNC_19(struct task_struct *VAR_20, long VAR_21,
    unsigned long VAR_22,
    unsigned long VAR_23)
{
 bool VAR_24 = (VAR_21 == VAR_10);
 int VAR_25;

 VAR_25 = -VAR_0;
 if (VAR_24) {
  if (VAR_22 != 0)
   goto out;
  if (VAR_23 & ~(unsigned long)VAR_9)
   goto out;
  VAR_23 = VAR_12 | VAR_13 | (VAR_23 << VAR_11);
 } else {
  VAR_23 = VAR_12;
 }

 FUNC_1(VAR_20);

 VAR_25 = -VAR_1;
 if (FUNC_15(VAR_20->flags & VAR_6))
  goto out;
 if (FUNC_6(VAR_20, VAR_18))
  goto out;






 VAR_25 = -VAR_2;
 if (FUNC_2(&VAR_20->signal->cred_guard_mutex))
  goto out;

 FUNC_12(VAR_20);
 VAR_25 = FUNC_0(VAR_20, VAR_8);
 FUNC_14(VAR_20);
 if (VAR_25)
  goto unlock_creds;

 FUNC_17(&VAR_19);
 VAR_25 = -VAR_1;
 if (FUNC_15(VAR_20->exit_state))
  goto unlock_tasklist;
 if (VAR_20->ptrace)
  goto unlock_tasklist;

 if (VAR_24)
  VAR_23 |= VAR_13;
 VAR_20->ptrace = VAR_23;

 FUNC_5(VAR_20, VAR_18);


 if (!VAR_24)
  FUNC_7(VAR_15, VAR_14, VAR_20);

 FUNC_9(&VAR_20->sighand->siglock);
 if (FUNC_11(VAR_20) &&
     FUNC_13(VAR_20, VAR_5 | VAR_3))
  FUNC_8(VAR_20, VAR_17);

 FUNC_10(&VAR_20->sighand->siglock);

 VAR_25 = 0;
unlock_tasklist:
 FUNC_18(&VAR_19);
unlock_creds:
 FUNC_3(&VAR_20->signal->cred_guard_mutex);
out:
 if (!VAR_25) {







  FUNC_16(&VAR_20->jobctl, VAR_4, VAR_16);
  FUNC_4(VAR_20, VAR_7);
 }

 return VAR_25;
}
