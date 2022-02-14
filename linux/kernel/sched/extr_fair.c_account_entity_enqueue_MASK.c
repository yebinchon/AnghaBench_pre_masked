
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int weight; } ;
struct sched_entity {int group_node; TYPE_1__ load; } ;
struct rq {int cfs_tasks; } ;
struct cfs_rq {int nr_running; int load; } ;


 int FUNC_0 (struct rq*,int ) ;
 scalar_t__ FUNC_1 (struct sched_entity*) ;
 int FUNC_2 (int *,int *) ;
 struct rq* FUNC_3 (struct cfs_rq*) ;
 int FUNC_4 (struct sched_entity*) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void
FUNC_6(struct cfs_rq *VAR_0, struct sched_entity *VAR_1)
{
 FUNC_5(&VAR_0->load, VAR_1->load.weight);
 VAR_0->nr_running++;
}
