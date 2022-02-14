
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct thread_group_cputimer {int cputime_atomic; } ;
struct task_struct {TYPE_1__* signal; } ;
struct posix_cputimers {int timers_active; } ;
typedef size_t clockid_t ;
struct TYPE_2__ {struct posix_cputimers posix_cputimers; struct thread_group_cputimer cputimer; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct task_struct*,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct task_struct*,int *) ;

__attribute__((used)) static u64 FUNC_4(const clockid_t VAR_1, struct task_struct *VAR_2,
      bool VAR_3)
{
 struct thread_group_cputimer *VAR_4 = &VAR_2->signal->cputimer;
 struct posix_cputimers *VAR_5 = &VAR_2->signal->posix_cputimers;
 u64 VAR_6[VAR_0];

 if (!FUNC_0(VAR_5->timers_active)) {
  if (VAR_3)
   FUNC_3(VAR_2, VAR_6);
  else
   FUNC_1(VAR_2, VAR_6);
 } else {
  FUNC_2(&VAR_4->cputime_atomic, VAR_6);
 }

 return VAR_6[VAR_1];
}
