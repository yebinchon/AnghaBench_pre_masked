
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int static_prio; } ;
struct sched_param {int sched_priority; } ;
struct sched_attr {int sched_policy; int sched_flags; int sched_nice; int sched_priority; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct task_struct*,struct sched_attr*,int,int) ;

__attribute__((used)) static int FUNC_2(struct task_struct *VAR_3, int VAR_4,
          const struct sched_param *VAR_5, bool VAR_6)
{
 struct sched_attr VAR_7 = {
  .sched_policy = VAR_4,
  .sched_priority = VAR_5->sched_priority,
  .sched_nice = FUNC_0(VAR_3->static_prio),
 };


 if ((VAR_4 != VAR_2) && (VAR_4 & VAR_1)) {
  VAR_7.sched_flags |= VAR_0;
  VAR_4 &= ~VAR_1;
  VAR_7.sched_policy = VAR_4;
 }

 return FUNC_1(VAR_3, &VAR_7, VAR_6, 1);
}
