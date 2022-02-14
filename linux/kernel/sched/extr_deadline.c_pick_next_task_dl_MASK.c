
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct sched_dl_entity {int dummy; } ;
struct rq_flags {int dummy; } ;
struct dl_rq {int dummy; } ;
struct rq {struct dl_rq dl; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct task_struct* FUNC_2 (struct sched_dl_entity*) ;
 struct sched_dl_entity* FUNC_3 (struct rq*,struct dl_rq*) ;
 int FUNC_4 (struct rq*) ;
 int FUNC_5 (struct rq*,struct task_struct*) ;

__attribute__((used)) static struct task_struct *
FUNC_6(struct rq *VAR_0, struct task_struct *VAR_1, struct rq_flags *VAR_2)
{
 struct sched_dl_entity *VAR_3;
 struct dl_rq *VAR_4 = &VAR_0->dl;
 struct task_struct *VAR_5;

 FUNC_1(VAR_1 || VAR_2);

 if (!FUNC_4(VAR_0))
  return ((void*)0);

 VAR_3 = FUNC_3(VAR_0, VAR_4);
 FUNC_0(!VAR_3);
 VAR_5 = FUNC_2(VAR_3);
 FUNC_5(VAR_0, VAR_5);
 return VAR_5;
}
