
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct task_struct {scalar_t__ in_iowait; } ;
struct TYPE_2__ {int iowait_count; int iowait_sum; int sum_sleep_runtime; int block_start; int block_max; int sleep_start; int sleep_max; } ;
struct sched_entity {TYPE_1__ statistics; } ;
struct cfs_rq {int dummy; } ;
typedef scalar_t__ s64 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct task_struct*,int,int) ;
 scalar_t__ FUNC_4 (struct sched_entity*) ;
 scalar_t__ FUNC_5 (struct task_struct*) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (scalar_t__,void*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct cfs_rq*) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 struct task_struct* FUNC_11 (struct sched_entity*) ;
 int FUNC_12 (struct task_struct*,int) ;
 int FUNC_13 (struct task_struct*,int) ;
 int FUNC_14 (struct task_struct*,int) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static inline void
FUNC_16(struct cfs_rq *VAR_2, struct sched_entity *VAR_3)
{
 struct task_struct *VAR_4 = ((void*)0);
 u64 VAR_5, VAR_6;

 if (!FUNC_9())
  return;

 VAR_5 = FUNC_10(VAR_3->statistics.sleep_start);
 VAR_6 = FUNC_10(VAR_3->statistics.block_start);

 if (FUNC_4(VAR_3))
  VAR_4 = FUNC_11(VAR_3);

 if (VAR_5) {
  u64 VAR_7 = FUNC_7(FUNC_8(VAR_2)) - VAR_5;

  if ((s64)VAR_7 < 0)
   VAR_7 = 0;

  if (FUNC_15(VAR_7 > FUNC_10(VAR_3->statistics.sleep_max)))
   FUNC_2(VAR_3->statistics.sleep_max, VAR_7);

  FUNC_2(VAR_3->statistics.sleep_start, 0);
  FUNC_0(VAR_3->statistics.sum_sleep_runtime, VAR_7);

  if (VAR_4) {
   FUNC_3(VAR_4, VAR_7 >> 10, 1);
   FUNC_14(VAR_4, VAR_7);
  }
 }
 if (VAR_6) {
  u64 VAR_8 = FUNC_7(FUNC_8(VAR_2)) - VAR_6;

  if ((s64)VAR_8 < 0)
   VAR_8 = 0;

  if (FUNC_15(VAR_8 > FUNC_10(VAR_3->statistics.block_max)))
   FUNC_2(VAR_3->statistics.block_max, VAR_8);

  FUNC_2(VAR_3->statistics.block_start, 0);
  FUNC_0(VAR_3->statistics.sum_sleep_runtime, VAR_8);

  if (VAR_4) {
   if (VAR_4->in_iowait) {
    FUNC_0(VAR_3->statistics.iowait_sum, VAR_8);
    FUNC_1(VAR_3->statistics.iowait_count);
    FUNC_13(VAR_4, VAR_8);
   }

   FUNC_12(VAR_4, VAR_8);






   if (FUNC_15(VAR_1 == VAR_0)) {
    FUNC_6(VAR_0,
      (void *)FUNC_5(VAR_4),
      VAR_8 >> 20);
   }
   FUNC_3(VAR_4, VAR_8 >> 10, 0);
  }
 }
}
