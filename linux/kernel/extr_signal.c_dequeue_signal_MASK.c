
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct task_struct {TYPE_3__* sighand; TYPE_2__* signal; int pending; } ;
struct hrtimer {TYPE_1__* base; } ;
typedef int sigset_t ;
struct TYPE_12__ {scalar_t__ si_sys_private; } ;
typedef TYPE_4__ kernel_siginfo_t ;
struct TYPE_13__ {int jobctl; } ;
struct TYPE_11__ {int siglock; } ;
struct TYPE_10__ {scalar_t__ it_real_incr; struct hrtimer real_timer; int shared_pending; } ;
struct TYPE_9__ {int (* get_time ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,TYPE_4__*,int*) ;
 TYPE_7__* VAR_2 ;
 int FUNC_1 (struct hrtimer*,int ,scalar_t__) ;
 int FUNC_2 (struct hrtimer*) ;
 int FUNC_3 (struct hrtimer*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int) ;

int FUNC_11(struct task_struct *VAR_3, sigset_t *VAR_4, kernel_siginfo_t *VAR_5)
{
 bool VAR_6 = 0;
 int VAR_7;




 VAR_7 = FUNC_0(&VAR_3->pending, VAR_4, VAR_5, &VAR_6);
 if (!VAR_7) {
  VAR_7 = FUNC_0(&VAR_3->signal->shared_pending,
      VAR_4, VAR_5, &VAR_6);
 }

 FUNC_5();
 if (!VAR_7)
  return 0;

 if (FUNC_10(FUNC_6(VAR_7))) {
  VAR_2->jobctl |= VAR_0;
 }
 return VAR_7;
}
