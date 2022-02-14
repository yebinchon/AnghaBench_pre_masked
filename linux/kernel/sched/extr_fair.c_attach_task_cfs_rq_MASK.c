
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_entity {int vruntime; } ;
struct task_struct {struct sched_entity se; } ;
struct cfs_rq {scalar_t__ min_vruntime; } ;


 int FUNC_0 (struct sched_entity*) ;
 struct cfs_rq* FUNC_1 (struct sched_entity*) ;
 int FUNC_2 (struct task_struct*) ;

__attribute__((used)) static void FUNC_3(struct task_struct *VAR_0)
{
 struct sched_entity *VAR_1 = &VAR_0->se;
 struct cfs_rq *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_1);

 if (!FUNC_2(VAR_0))
  VAR_1->vruntime += VAR_2->min_vruntime;
}
