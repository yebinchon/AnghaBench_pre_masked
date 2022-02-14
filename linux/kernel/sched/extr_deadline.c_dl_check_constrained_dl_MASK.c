
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct sched_dl_entity {int dl_throttled; scalar_t__ runtime; scalar_t__ dl_boosted; int deadline; } ;
struct rq {int dummy; } ;


 int FUNC_0 (struct sched_dl_entity*) ;
 int FUNC_1 (struct sched_dl_entity*) ;
 struct task_struct* FUNC_2 (struct sched_dl_entity*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct rq*) ;
 struct rq* FUNC_5 (int ) ;
 int FUNC_6 (struct task_struct*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static inline void FUNC_8(struct sched_dl_entity *VAR_0)
{
 struct task_struct *VAR_1 = FUNC_2(VAR_0);
 struct rq *VAR_2 = FUNC_5(FUNC_1(VAR_0));

 if (FUNC_3(VAR_0->deadline, FUNC_4(VAR_2)) &&
     FUNC_3(FUNC_4(VAR_2), FUNC_0(VAR_0))) {
  if (FUNC_7(VAR_0->dl_boosted || !FUNC_6(VAR_1)))
   return;
  VAR_0->dl_throttled = 1;
  if (VAR_0->runtime > 0)
   VAR_0->runtime = 0;
 }
}
