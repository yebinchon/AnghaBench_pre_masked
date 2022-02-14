
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct task_struct {int exit_code; struct sighand_struct* sighand; TYPE_1__* signal; struct task_struct* real_parent; struct task_struct* group_leader; struct task_struct* parent; } ;
struct sighand_struct {int siglock; TYPE_3__* action; } ;
struct kernel_siginfo {int si_signo; int si_code; int si_status; void* si_stime; void* si_utime; int si_uid; int si_pid; scalar_t__ si_errno; } ;
struct TYPE_5__ {scalar_t__ sa_handler; int sa_flags; } ;
struct TYPE_6__ {TYPE_2__ sa; } ;
struct TYPE_4__ {int group_exit_code; } ;


 int FUNC_0 () ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int,struct kernel_siginfo*,struct task_struct*) ;
 int FUNC_2 (struct task_struct*,struct task_struct*) ;
 int FUNC_3 (struct kernel_siginfo*) ;
 int FUNC_4 (int ,int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (struct task_struct*) ;
 int FUNC_11 (struct task_struct*,int *,int *) ;
 int FUNC_12 (struct task_struct*,int ) ;
 int FUNC_13 (struct task_struct*,int ) ;
 int FUNC_14 (struct task_struct*) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_15(struct task_struct *VAR_5,
         bool VAR_6, int VAR_7)
{
 struct kernel_siginfo VAR_8;
 unsigned long VAR_9;
 struct task_struct *VAR_10;
 struct sighand_struct *VAR_11;
 u64 VAR_12, VAR_13;

 if (VAR_6) {
  VAR_10 = VAR_5->parent;
 } else {
  VAR_5 = VAR_5->group_leader;
  VAR_10 = VAR_5->real_parent;
 }

 FUNC_3(&VAR_8);
 VAR_8.si_signo = VAR_1;
 VAR_8.si_errno = 0;



 FUNC_6();
 VAR_8.si_pid = FUNC_13(VAR_5, FUNC_10(VAR_10));
 VAR_8.si_uid = FUNC_4(FUNC_12(VAR_10, VAR_4), FUNC_14(VAR_5));
 FUNC_7();

 FUNC_11(VAR_5, &VAR_12, &VAR_13);
 VAR_8.si_utime = FUNC_5(VAR_12);
 VAR_8.si_stime = FUNC_5(VAR_13);

  VAR_8.si_code = VAR_7;
  switch (VAR_7) {
  case 130:
   VAR_8.si_status = VAR_2;
   break;
  case 129:
   VAR_8.si_status = VAR_5->signal->group_exit_code & 0x7f;
   break;
  case 128:
   VAR_8.si_status = VAR_5->exit_code & 0x7f;
   break;
  default:
   FUNC_0();
  }

 VAR_11 = VAR_10->sighand;
 FUNC_8(&VAR_11->siglock, VAR_9);
 if (VAR_11->action[VAR_1-1].sa.sa_handler != VAR_3 &&
     !(VAR_11->action[VAR_1-1].sa.sa_flags & VAR_0))
  FUNC_1(VAR_1, &VAR_8, VAR_10);



 FUNC_2(VAR_5, VAR_10);
 FUNC_9(&VAR_11->siglock, VAR_9);
}
