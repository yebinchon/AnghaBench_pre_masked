
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int * sched_class; int prio; } ;
struct sched_attr {int sched_flags; } ;
struct rq {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct task_struct*,struct sched_attr const*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (struct task_struct*,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_5(struct rq *VAR_4, struct task_struct *VAR_5,
      const struct sched_attr *VAR_6, bool VAR_7)
{




 if (VAR_6->sched_flags & VAR_0)
  return;

 FUNC_0(VAR_5, VAR_6);





 VAR_5->prio = FUNC_2(VAR_5);
 if (VAR_7)
  VAR_5->prio = FUNC_3(VAR_5, VAR_5->prio);

 if (FUNC_1(VAR_5->prio))
  VAR_5->sched_class = &VAR_1;
 else if (FUNC_4(VAR_5->prio))
  VAR_5->sched_class = &VAR_3;
 else
  VAR_5->sched_class = &VAR_2;
}
