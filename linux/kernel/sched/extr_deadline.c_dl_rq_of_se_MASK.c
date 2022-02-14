
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct sched_dl_entity {int dummy; } ;
struct dl_rq {int dummy; } ;
struct rq {struct dl_rq dl; } ;


 struct task_struct* FUNC_0 (struct sched_dl_entity*) ;
 struct rq* FUNC_1 (struct task_struct*) ;

__attribute__((used)) static inline struct dl_rq *FUNC_2(struct sched_dl_entity *VAR_0)
{
 struct task_struct *VAR_1 = FUNC_0(VAR_0);
 struct rq *VAR_2 = FUNC_1(VAR_1);

 return &VAR_2->dl;
}
