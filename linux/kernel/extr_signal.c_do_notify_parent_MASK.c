
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct task_struct {scalar_t__ parent_exec_id; int exit_code; TYPE_4__* parent; int ptrace; TYPE_1__* signal; struct task_struct* group_leader; } ;
struct sighand_struct {int siglock; TYPE_3__* action; } ;
struct kernel_siginfo {int si_signo; int si_status; int si_code; void* si_stime; void* si_utime; int si_uid; int si_pid; scalar_t__ si_errno; } ;
struct TYPE_11__ {scalar_t__ self_exec_id; struct sighand_struct* sighand; } ;
struct TYPE_9__ {scalar_t__ sa_handler; int sa_flags; } ;
struct TYPE_10__ {TYPE_2__ sa; } ;
struct TYPE_8__ {scalar_t__ stime; scalar_t__ utime; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int,struct kernel_siginfo*,TYPE_4__*) ;
 int FUNC_2 (struct task_struct*,TYPE_4__*) ;
 int FUNC_3 (struct kernel_siginfo*) ;
 int FUNC_4 (struct task_struct*) ;
 int FUNC_5 (int ,int ) ;
 void* FUNC_6 (scalar_t__) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (struct task_struct*,scalar_t__*,scalar_t__*) ;
 int FUNC_13 (TYPE_4__*,int ) ;
 int FUNC_14 (struct task_struct*) ;
 int FUNC_15 (struct task_struct*,int ) ;
 int FUNC_16 (struct task_struct*) ;
 int FUNC_17 (struct task_struct*) ;
 int VAR_6 ;
 scalar_t__ FUNC_18 (int) ;

bool FUNC_19(struct task_struct *VAR_7, int VAR_8)
{
 struct kernel_siginfo VAR_9;
 unsigned long VAR_10;
 struct sighand_struct *VAR_11;
 bool VAR_12 = 0;
 u64 VAR_13, VAR_14;

 FUNC_0(VAR_8 == -1);


  FUNC_0(FUNC_14(VAR_7));

 FUNC_0(!VAR_7->ptrace &&
        (VAR_7->group_leader != VAR_7 || !FUNC_17(VAR_7)));


 FUNC_4(VAR_7);

 if (VAR_8 != VAR_4) {




  if (VAR_7->parent_exec_id != VAR_7->parent->self_exec_id)
   VAR_8 = VAR_4;
 }

 FUNC_3(&VAR_9);
 VAR_9.si_signo = VAR_8;
 VAR_9.si_errno = 0;
 FUNC_7();
 VAR_9.si_pid = FUNC_15(VAR_7, FUNC_11(VAR_7->parent));
 VAR_9.si_uid = FUNC_5(FUNC_13(VAR_7->parent, VAR_6),
           FUNC_16(VAR_7));
 FUNC_8();

 FUNC_12(VAR_7, &VAR_13, &VAR_14);
 VAR_9.si_utime = FUNC_6(VAR_13 + VAR_7->signal->utime);
 VAR_9.si_stime = FUNC_6(VAR_14 + VAR_7->signal->stime);

 VAR_9.si_status = VAR_7->exit_code & 0x7f;
 if (VAR_7->exit_code & 0x80)
  VAR_9.si_code = VAR_0;
 else if (VAR_7->exit_code & 0x7f)
  VAR_9.si_code = VAR_2;
 else {
  VAR_9.si_code = VAR_1;
  VAR_9.si_status = VAR_7->exit_code >> 8;
 }

 VAR_11 = VAR_7->parent->sighand;
 FUNC_9(&VAR_11->siglock, VAR_10);
 if (!VAR_7->ptrace && VAR_8 == VAR_4 &&
     (VAR_11->action[VAR_4-1].sa.sa_handler == VAR_5 ||
      (VAR_11->action[VAR_4-1].sa.sa_flags & VAR_3))) {
  VAR_12 = 1;
  if (VAR_11->action[VAR_4-1].sa.sa_handler == VAR_5)
   VAR_8 = 0;
 }
 if (FUNC_18(VAR_8) && VAR_8)
  FUNC_1(VAR_8, &VAR_9, VAR_7->parent);
 FUNC_2(VAR_7, VAR_7->parent);
 FUNC_10(&VAR_11->siglock, VAR_10);

 return VAR_12;
}
