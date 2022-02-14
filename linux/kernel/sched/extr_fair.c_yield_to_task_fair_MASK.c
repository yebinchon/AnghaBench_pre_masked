
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_entity {int on_rq; } ;
struct task_struct {struct sched_entity se; } ;
struct rq {int dummy; } ;


 int FUNC_0 (struct sched_entity*) ;
 int FUNC_1 (struct sched_entity*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct rq*) ;

__attribute__((used)) static bool FUNC_4(struct rq *VAR_0, struct task_struct *VAR_1, bool VAR_2)
{
 struct sched_entity *VAR_3 = &VAR_1->se;


 if (!VAR_3->on_rq || FUNC_2(FUNC_0(VAR_3)))
  return 0;


 FUNC_1(VAR_3);

 FUNC_3(VAR_0);

 return 1;
}
