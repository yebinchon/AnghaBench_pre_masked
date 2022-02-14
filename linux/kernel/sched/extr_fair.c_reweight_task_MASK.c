
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct load_weight {int inv_weight; } ;
struct sched_entity {struct load_weight load; } ;
struct task_struct {struct sched_entity se; } ;
struct cfs_rq {int dummy; } ;


 struct cfs_rq* FUNC_0 (struct sched_entity*) ;
 int FUNC_1 (struct cfs_rq*,struct sched_entity*,unsigned long,unsigned long) ;
 unsigned long FUNC_2 (int ) ;
 int * VAR_0 ;
 int * VAR_1 ;

void FUNC_3(struct task_struct *VAR_2, int VAR_3)
{
 struct sched_entity *VAR_4 = &VAR_2->se;
 struct cfs_rq *VAR_5 = FUNC_0(VAR_4);
 struct load_weight *VAR_6 = &VAR_4->load;
 unsigned long VAR_7 = FUNC_2(VAR_0[VAR_3]);

 FUNC_1(VAR_5, VAR_4, VAR_7, VAR_7);
 VAR_6->inv_weight = VAR_1[VAR_3];
}
