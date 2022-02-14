
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int period_contrib; int load_sum; int runnable_load_sum; void* runnable_load_avg; void* load_avg; } ;
struct sched_entity {unsigned long runnable_weight; scalar_t__ on_rq; TYPE_1__ avg; int load; } ;
struct cfs_rq {struct sched_entity* curr; } ;


 int VAR_0 ;
 int FUNC_0 (struct cfs_rq*,struct sched_entity*) ;
 int FUNC_1 (struct cfs_rq*,struct sched_entity*) ;
 int FUNC_2 (struct cfs_rq*,struct sched_entity*) ;
 int FUNC_3 (struct cfs_rq*,struct sched_entity*) ;
 void* FUNC_4 (int,int) ;
 int FUNC_5 (struct cfs_rq*,struct sched_entity*) ;
 int FUNC_6 (struct cfs_rq*,struct sched_entity*) ;
 int FUNC_7 (struct sched_entity*) ;
 int FUNC_8 (struct sched_entity*) ;
 int FUNC_9 (struct cfs_rq*) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_11(struct cfs_rq *VAR_1, struct sched_entity *VAR_2,
       unsigned long VAR_3, unsigned long VAR_4)
{
 if (VAR_2->on_rq) {

  if (VAR_1->curr == VAR_2)
   FUNC_9(VAR_1);
  FUNC_0(VAR_1, VAR_2);
  FUNC_3(VAR_1, VAR_2);
 }
 FUNC_2(VAR_1, VAR_2);

 VAR_2->runnable_weight = VAR_4;
 FUNC_10(&VAR_2->load, VAR_3);
 FUNC_5(VAR_1, VAR_2);
 if (VAR_2->on_rq) {
  FUNC_1(VAR_1, VAR_2);
  FUNC_6(VAR_1, VAR_2);
 }
}
