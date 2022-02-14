
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct task_struct {int dummy; } ;
struct TYPE_2__ {int exec_max; } ;
struct sched_entity {int vruntime; int sum_exec_runtime; TYPE_1__ statistics; scalar_t__ exec_start; } ;
struct cfs_rq {int exec_clock; struct sched_entity* curr; } ;
typedef scalar_t__ s64 ;


 int FUNC_0 (struct cfs_rq*,scalar_t__) ;
 int FUNC_1 (struct task_struct*,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,struct sched_entity*) ;
 int FUNC_3 (struct task_struct*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct sched_entity*) ;
 int FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct cfs_rq*) ;
 int FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (int ,int ) ;
 struct task_struct* FUNC_10 (struct sched_entity*) ;
 int FUNC_11 (struct task_struct*,scalar_t__,int ) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (struct cfs_rq*) ;

__attribute__((used)) static void FUNC_14(struct cfs_rq *VAR_0)
{
 struct sched_entity *VAR_1 = VAR_0->curr;
 u64 VAR_2 = FUNC_6(FUNC_7(VAR_0));
 u64 VAR_3;

 if (FUNC_12(!VAR_1))
  return;

 VAR_3 = VAR_2 - VAR_1->exec_start;
 if (FUNC_12((s64)VAR_3 <= 0))
  return;

 VAR_1->exec_start = VAR_2;

 FUNC_9(VAR_1->statistics.exec_max,
        FUNC_5(VAR_3, VAR_1->statistics.exec_max));

 VAR_1->sum_exec_runtime += VAR_3;
 FUNC_8(VAR_0->exec_clock, VAR_3);

 VAR_1->vruntime += FUNC_2(VAR_3, VAR_1);
 FUNC_13(VAR_0);

 if (FUNC_4(VAR_1)) {
  struct task_struct *VAR_4 = FUNC_10(VAR_1);

  FUNC_11(VAR_4, VAR_3, VAR_1->vruntime);
  FUNC_3(VAR_4, VAR_3);
  FUNC_1(VAR_4, VAR_3);
 }

 FUNC_0(VAR_0, VAR_3);
}
