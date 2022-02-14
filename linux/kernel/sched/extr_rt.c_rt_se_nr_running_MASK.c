
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_rt_entity {int dummy; } ;
struct rt_rq {unsigned int rt_nr_running; } ;


 struct rt_rq* FUNC_0 (struct sched_rt_entity*) ;

__attribute__((used)) static inline
unsigned int FUNC_1(struct sched_rt_entity *VAR_0)
{
 struct rt_rq *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1)
  return VAR_1->rt_nr_running;
 else
  return 1;
}
