
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int state; } ;
struct TYPE_2__ {int block_start; int sleep_start; } ;
struct sched_entity {TYPE_1__ statistics; } ;
struct cfs_rq {struct sched_entity* curr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct sched_entity*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct cfs_rq*) ;
 int FUNC_4 () ;
 struct task_struct* FUNC_5 (struct sched_entity*) ;
 int FUNC_6 (struct cfs_rq*,struct sched_entity*) ;

__attribute__((used)) static inline void
FUNC_7(struct cfs_rq *VAR_3, struct sched_entity *VAR_4, int VAR_5)
{

 if (!FUNC_4())
  return;





 if (VAR_4 != VAR_3->curr)
  FUNC_6(VAR_3, VAR_4);

 if ((VAR_5 & VAR_0) && FUNC_1(VAR_4)) {
  struct task_struct *VAR_6 = FUNC_5(VAR_4);

  if (VAR_6->state & VAR_1)
   FUNC_0(VAR_4->statistics.sleep_start,
          FUNC_2(FUNC_3(VAR_3)));
  if (VAR_6->state & VAR_2)
   FUNC_0(VAR_4->statistics.block_start,
          FUNC_2(FUNC_3(VAR_3)));
 }
}
