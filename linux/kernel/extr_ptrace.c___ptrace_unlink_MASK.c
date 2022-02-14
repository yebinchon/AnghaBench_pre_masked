
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {int flags; int jobctl; TYPE_2__* sighand; TYPE_1__* signal; scalar_t__ ptrace; struct cred* ptracer_cred; int ptrace_entry; int real_parent; int parent; } ;
struct cred {int dummy; } ;
struct TYPE_4__ {int siglock; } ;
struct TYPE_3__ {int flags; scalar_t__ group_stop_count; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct task_struct*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct task_struct*,int) ;
 int FUNC_4 (struct cred const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct task_struct*,int ) ;
 int FUNC_8 (struct task_struct*) ;
 scalar_t__ FUNC_9 (struct task_struct*) ;

void FUNC_10(struct task_struct *VAR_8)
{
 const struct cred *VAR_9;
 FUNC_0(!VAR_8->ptrace);

 FUNC_1(VAR_8, VAR_7);




 VAR_8->parent = VAR_8->real_parent;
 FUNC_2(&VAR_8->ptrace_entry);
 VAR_9 = VAR_8->ptracer_cred;
 VAR_8->ptracer_cred = ((void*)0);
 FUNC_4(VAR_9);

 FUNC_5(&VAR_8->sighand->siglock);
 VAR_8->ptrace = 0;




 FUNC_7(VAR_8, VAR_2);
 FUNC_8(VAR_8);





 if (!(VAR_8->flags & VAR_3) &&
     (VAR_8->signal->flags & VAR_4 ||
      VAR_8->signal->group_stop_count)) {
  VAR_8->jobctl |= VAR_0;
  if (!(VAR_8->jobctl & VAR_1))
   VAR_8->jobctl |= VAR_5;
 }







 if (VAR_8->jobctl & VAR_0 || FUNC_9(VAR_8))
  FUNC_3(VAR_8, 1);

 FUNC_6(&VAR_8->sighand->siglock);
}
