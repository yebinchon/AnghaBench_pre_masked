
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct task_struct {TYPE_3__* sighand; TYPE_2__* signal; int ptrace; int blocked; } ;
struct kernel_siginfo {int si_signo; } ;
struct TYPE_4__ {scalar_t__ sa_handler; } ;
struct k_sigaction {TYPE_1__ sa; } ;
struct TYPE_6__ {int siglock; struct k_sigaction* action; } ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct task_struct*) ;
 int FUNC_1 (int,struct kernel_siginfo*,struct task_struct*,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_6(struct kernel_siginfo *VAR_4, struct task_struct *VAR_5)
{
 unsigned long int VAR_6;
 int VAR_7, VAR_8, VAR_9;
 struct k_sigaction *VAR_10;
 int VAR_11 = VAR_4->si_signo;

 FUNC_4(&VAR_5->sighand->siglock, VAR_6);
 VAR_10 = &VAR_5->sighand->action[VAR_11-1];
 VAR_9 = VAR_10->sa.sa_handler == VAR_3;
 VAR_8 = FUNC_3(&VAR_5->blocked, VAR_11);
 if (VAR_8 || VAR_9) {
  VAR_10->sa.sa_handler = VAR_2;
  if (VAR_8) {
   FUNC_2(&VAR_5->blocked, VAR_11);
   FUNC_0(VAR_5);
  }
 }




 if (VAR_10->sa.sa_handler == VAR_2 && !VAR_5->ptrace)
  VAR_5->signal->flags &= ~VAR_1;
 VAR_7 = FUNC_1(VAR_11, VAR_4, VAR_5, VAR_0);
 FUNC_5(&VAR_5->sighand->siglock, VAR_6);

 return VAR_7;
}
