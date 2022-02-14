
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sched_entity {int dummy; } ;
struct task_struct {struct sched_entity se; } ;
struct TYPE_3__ {scalar_t__ weight; } ;
struct TYPE_4__ {TYPE_1__ load; } ;
struct rq {TYPE_2__ cfs; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct sched_entity*) ;
 int FUNC_2 (int ,struct sched_entity*) ;

__attribute__((used)) static unsigned int FUNC_3(struct rq *VAR_0, struct task_struct *VAR_1)
{
 struct sched_entity *VAR_2 = &VAR_1->se;
 unsigned int VAR_3 = 0;





 if (VAR_0->cfs.load.weight)
  VAR_3 = FUNC_0(FUNC_2(FUNC_1(VAR_2), VAR_2));

 return VAR_3;
}
