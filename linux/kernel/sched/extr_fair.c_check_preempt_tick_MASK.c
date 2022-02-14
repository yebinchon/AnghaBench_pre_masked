
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_entity {unsigned long sum_exec_runtime; unsigned long prev_sum_exec_runtime; unsigned long vruntime; } ;
struct cfs_rq {int dummy; } ;
typedef unsigned long s64 ;


 struct sched_entity* FUNC_0 (struct cfs_rq*) ;
 int FUNC_1 (struct cfs_rq*,struct sched_entity*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct cfs_rq*) ;
 unsigned long FUNC_4 (struct cfs_rq*,struct sched_entity*) ;
 unsigned long VAR_0 ;

__attribute__((used)) static void
FUNC_5(struct cfs_rq *VAR_1, struct sched_entity *VAR_2)
{
 unsigned long VAR_3, VAR_4;
 struct sched_entity *VAR_5;
 s64 VAR_6;

 VAR_3 = FUNC_4(VAR_1, VAR_2);
 VAR_4 = VAR_2->sum_exec_runtime - VAR_2->prev_sum_exec_runtime;
 if (VAR_4 > VAR_3) {
  FUNC_2(FUNC_3(VAR_1));




  FUNC_1(VAR_1, VAR_2);
  return;
 }






 if (VAR_4 < VAR_0)
  return;

 VAR_5 = FUNC_0(VAR_1);
 VAR_6 = VAR_2->vruntime - VAR_5->vruntime;

 if (VAR_6 < 0)
  return;

 if (VAR_6 > VAR_3)
  FUNC_2(FUNC_3(VAR_1));
}
