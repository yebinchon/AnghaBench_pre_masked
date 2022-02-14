
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct task_struct {int dummy; } ;
struct TYPE_2__ {int wait_start; int wait_sum; int wait_count; int wait_max; } ;
struct sched_entity {TYPE_1__ statistics; } ;
struct cfs_rq {int dummy; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (struct sched_entity*) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct cfs_rq*) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ) ;
 struct task_struct* FUNC_9 (struct sched_entity*) ;
 scalar_t__ FUNC_10 (struct task_struct*) ;
 int FUNC_11 (struct task_struct*,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_12(struct cfs_rq *VAR_0, struct sched_entity *VAR_1)
{
 struct task_struct *VAR_2;
 u64 VAR_3;

 if (!FUNC_7())
  return;

 VAR_3 = FUNC_5(FUNC_6(VAR_0)) - FUNC_8(VAR_1->statistics.wait_start);

 if (FUNC_3(VAR_1)) {
  VAR_2 = FUNC_9(VAR_1);
  if (FUNC_10(VAR_2)) {





   FUNC_2(VAR_1->statistics.wait_start, VAR_3);
   return;
  }
  FUNC_11(VAR_2, VAR_3);
 }

 FUNC_2(VAR_1->statistics.wait_max,
        FUNC_4(FUNC_8(VAR_1->statistics.wait_max), VAR_3));
 FUNC_1(VAR_1->statistics.wait_count);
 FUNC_0(VAR_1->statistics.wait_sum, VAR_3);
 FUNC_2(VAR_1->statistics.wait_start, 0);
}
