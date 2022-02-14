
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sigpending {int signal; int list; } ;
struct task_struct {struct sigpending pending; TYPE_1__* signal; } ;
struct TYPE_4__ {int si_signo; scalar_t__ si_code; scalar_t__ si_overrun; } ;
struct sigqueue {int flags; TYPE_2__ info; int list; } ;
struct pid {int dummy; } ;
typedef enum pid_type { ____Placeholder_pid_type } pid_type ;
struct TYPE_3__ {struct sigpending shared_pending; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,struct task_struct*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct task_struct*,unsigned long*) ;
 struct task_struct* FUNC_6 (struct pid*,int) ;
 int FUNC_7 (int,struct task_struct*,int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (struct task_struct*,int) ;
 int FUNC_12 (int,TYPE_2__*,struct task_struct*,int,int) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (struct task_struct*,unsigned long*) ;

int FUNC_15(struct sigqueue *VAR_6, struct pid *VAR_7, enum pid_type VAR_8)
{
 int VAR_9 = VAR_6->info.si_signo;
 struct sigpending *VAR_10;
 struct task_struct *VAR_11;
 unsigned long VAR_12;
 int VAR_13, VAR_14;

 FUNC_0(!(VAR_6->flags & VAR_1));

 VAR_13 = -1;
 FUNC_8();
 VAR_11 = FUNC_6(VAR_7, VAR_8);
 if (!VAR_11 || !FUNC_2(FUNC_5(VAR_11, &VAR_12)))
  goto ret;

 VAR_13 = 1;
 VAR_14 = VAR_5;
 if (!FUNC_7(VAR_9, VAR_11, 0))
  goto out;

 VAR_13 = 0;
 if (FUNC_13(!FUNC_4(&VAR_6->list))) {




  FUNC_0(VAR_6->info.si_code != VAR_2);
  VAR_6->info.si_overrun++;
  VAR_14 = VAR_3;
  goto out;
 }
 VAR_6->info.si_overrun = 0;

 FUNC_11(VAR_11, VAR_9);
 VAR_10 = (VAR_8 != VAR_0) ? &VAR_11->signal->shared_pending : &VAR_11->pending;
 FUNC_3(&VAR_6->list, &VAR_10->list);
 FUNC_10(&VAR_10->signal, VAR_9);
 FUNC_1(VAR_9, VAR_11, VAR_8);
 VAR_14 = VAR_4;
out:
 FUNC_12(VAR_9, &VAR_6->info, VAR_11, VAR_8 != VAR_0, VAR_14);
 FUNC_14(VAR_11, &VAR_12);
ret:
 FUNC_9();
 return VAR_13;
}
