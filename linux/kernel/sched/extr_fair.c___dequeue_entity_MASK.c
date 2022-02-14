
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_entity {int run_node; } ;
struct cfs_rq {int tasks_timeline; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct cfs_rq *VAR_0, struct sched_entity *VAR_1)
{
 FUNC_0(&VAR_1->run_node, &VAR_0->tasks_timeline);
}
