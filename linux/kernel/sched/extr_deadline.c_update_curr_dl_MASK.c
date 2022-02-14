
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct sched_dl_entity {int dl_yielded; int flags; int dl_throttled; int dl_overrun; scalar_t__ dl_boosted; int runtime; } ;
struct TYPE_3__ {int exec_max; } ;
struct TYPE_4__ {scalar_t__ exec_start; int sum_exec_runtime; TYPE_1__ statistics; } ;
struct task_struct {struct sched_dl_entity dl; TYPE_2__ se; } ;
struct rt_rq {int rt_runtime_lock; int rt_time; } ;
struct rq {struct rt_rq rt; int dl; struct task_struct* curr; } ;
typedef scalar_t__ s64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rq*,struct task_struct*,int ) ;
 int FUNC_1 (struct task_struct*,scalar_t__) ;
 unsigned long FUNC_2 (int) ;
 unsigned long FUNC_3 (int) ;
 scalar_t__ FUNC_4 (scalar_t__,unsigned long) ;
 int FUNC_5 (struct task_struct*,scalar_t__) ;
 int FUNC_6 (struct rq*) ;
 scalar_t__ FUNC_7 (struct sched_dl_entity*) ;
 scalar_t__ FUNC_8 (struct sched_dl_entity*) ;
 int FUNC_9 (struct task_struct*) ;
 int FUNC_10 (struct rq*,struct task_struct*,int ) ;
 scalar_t__ FUNC_11 (scalar_t__,struct rq*,struct sched_dl_entity*) ;
 int FUNC_12 (struct task_struct*,int *) ;
 int FUNC_13 (int ,scalar_t__) ;
 int FUNC_14 (struct sched_dl_entity*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct rq*) ;
 scalar_t__ FUNC_18 (struct rq*) ;
 scalar_t__ FUNC_19 () ;
 scalar_t__ FUNC_20 (struct rt_rq*) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (struct task_struct*) ;
 scalar_t__ FUNC_23 (int) ;

__attribute__((used)) static void FUNC_24(struct rq *VAR_3)
{
 struct task_struct *VAR_4 = VAR_3->curr;
 struct sched_dl_entity *VAR_5 = &VAR_4->dl;
 u64 VAR_6, VAR_7;
 int VAR_8 = FUNC_6(VAR_3);
 u64 VAR_9;

 if (!FUNC_9(VAR_4) || !FUNC_14(VAR_5))
  return;
 VAR_9 = FUNC_18(VAR_3);
 VAR_6 = VAR_9 - VAR_4->se.exec_start;
 if (FUNC_23((s64)VAR_6 <= 0)) {
  if (FUNC_23(VAR_5->dl_yielded))
   goto throttle;
  return;
 }

 FUNC_21(VAR_4->se.statistics.exec_max,
        FUNC_13(VAR_4->se.statistics.exec_max, VAR_6));

 VAR_4->se.sum_exec_runtime += VAR_6;
 FUNC_1(VAR_4, VAR_6);

 VAR_4->se.exec_start = VAR_9;
 FUNC_5(VAR_4, VAR_6);

 if (FUNC_7(VAR_5))
  return;
 if (FUNC_23(VAR_5->flags & VAR_2)) {
  VAR_7 = FUNC_11(VAR_6,
       VAR_3,
       &VAR_4->dl);
 } else {
  unsigned long VAR_10 = FUNC_3(VAR_8);
  unsigned long VAR_11 = FUNC_2(VAR_8);

  VAR_7 = FUNC_4(VAR_6, VAR_10);
  VAR_7 = FUNC_4(VAR_7, VAR_11);
 }

 VAR_5->runtime -= VAR_7;

throttle:
 if (FUNC_8(VAR_5) || VAR_5->dl_yielded) {
  VAR_5->dl_throttled = 1;


  if (FUNC_8(VAR_5) &&
      (VAR_5->flags & VAR_1))
   VAR_5->dl_overrun = 1;

  FUNC_0(VAR_3, VAR_4, 0);
  if (FUNC_23(VAR_5->dl_boosted || !FUNC_22(VAR_4)))
   FUNC_10(VAR_3, VAR_4, VAR_0);

  if (!FUNC_12(VAR_4, &VAR_3->dl))
   FUNC_17(VAR_3);
 }
 if (FUNC_19()) {
  struct rt_rq *VAR_12 = &VAR_3->rt;

  FUNC_15(&VAR_12->rt_runtime_lock);





  if (FUNC_20(VAR_12))
   VAR_12->rt_time += VAR_6;
  FUNC_16(&VAR_12->rt_runtime_lock);
 }
}
