
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {scalar_t__ dl_overrun; } ;
struct posix_cputimers {int expiry_active; int timers_active; } ;
struct task_struct {TYPE_2__ dl; struct signal_struct* signal; struct posix_cputimers posix_cputimers; } ;
struct TYPE_3__ {int cputime_atomic; } ;
struct signal_struct {TYPE_1__ cputimer; struct posix_cputimers posix_cputimers; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct posix_cputimers*) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,struct posix_cputimers*) ;
 int FUNC_5 (struct task_struct*,int *) ;

__attribute__((used)) static inline bool FUNC_6(struct task_struct *VAR_1)
{
 struct posix_cputimers *VAR_2 = &VAR_1->posix_cputimers;
 struct signal_struct *VAR_3;

 if (!FUNC_2(VAR_2)) {
  u64 VAR_4[VAR_0];

  FUNC_5(VAR_1, VAR_4);
  if (FUNC_4(VAR_4, VAR_2))
   return 1;
 }

 VAR_3 = VAR_1->signal;
 VAR_2 = &VAR_3->posix_cputimers;
 if (FUNC_0(VAR_2->timers_active) && !FUNC_0(VAR_2->expiry_active)) {
  u64 VAR_5[VAR_0];

  FUNC_3(&VAR_3->cputimer.cputime_atomic,
        VAR_5);

  if (FUNC_4(VAR_5, VAR_2))
   return 1;
 }

 if (FUNC_1(VAR_1) && VAR_1->dl.dl_overrun)
  return 1;

 return 0;
}
