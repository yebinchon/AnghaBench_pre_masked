
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_9__ {int slice_max; } ;
struct TYPE_8__ {int weight; } ;
struct sched_entity {scalar_t__ sum_exec_runtime; scalar_t__ prev_sum_exec_runtime; TYPE_4__ statistics; TYPE_3__ load; scalar_t__ on_rq; } ;
struct cfs_rq {struct sched_entity* curr; } ;
struct TYPE_6__ {int weight; } ;
struct TYPE_7__ {TYPE_1__ load; } ;
struct TYPE_10__ {TYPE_2__ cfs; } ;


 int VAR_0 ;
 int FUNC_0 (struct cfs_rq*,struct sched_entity*) ;
 int FUNC_1 (int ,scalar_t__) ;
 TYPE_5__* FUNC_2 (struct cfs_rq*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct cfs_rq*,struct sched_entity*,int ) ;
 int FUNC_7 (struct cfs_rq*,struct sched_entity*) ;
 int FUNC_8 (struct cfs_rq*,struct sched_entity*) ;

__attribute__((used)) static void
FUNC_9(struct cfs_rq *VAR_1, struct sched_entity *VAR_2)
{

 if (VAR_2->on_rq) {





  FUNC_8(VAR_1, VAR_2);
  FUNC_0(VAR_1, VAR_2);
  FUNC_6(VAR_1, VAR_2, VAR_0);
 }

 FUNC_7(VAR_1, VAR_2);
 VAR_1->curr = VAR_2;






 if (FUNC_3() &&
     FUNC_2(VAR_1)->cfs.load.weight >= 2*VAR_2->load.weight) {
  FUNC_4(VAR_2->statistics.slice_max,
   FUNC_1((u64)FUNC_5(VAR_2->statistics.slice_max),
       VAR_2->sum_exec_runtime - VAR_2->prev_sum_exec_runtime));
 }

 VAR_2->prev_sum_exec_runtime = VAR_2->sum_exec_runtime;
}
