
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_rt_entity {int dummy; } ;
struct rt_rq {int rr_nr_running; scalar_t__ rt_nr_running; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct sched_rt_entity*,struct rt_rq*) ;
 int FUNC_2 (struct sched_rt_entity*,struct rt_rq*) ;
 int FUNC_3 (struct rt_rq*,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct sched_rt_entity*) ;
 int FUNC_6 (struct sched_rt_entity*) ;
 scalar_t__ FUNC_7 (struct sched_rt_entity*) ;

__attribute__((used)) static inline
void FUNC_8(struct sched_rt_entity *VAR_0, struct rt_rq *VAR_1)
{
 FUNC_0(!FUNC_4(FUNC_6(VAR_0)));
 FUNC_0(!VAR_1->rt_nr_running);
 VAR_1->rt_nr_running -= FUNC_5(VAR_0);
 VAR_1->rr_nr_running -= FUNC_7(VAR_0);

 FUNC_3(VAR_1, FUNC_6(VAR_0));
 FUNC_2(VAR_0, VAR_1);
 FUNC_1(VAR_0, VAR_1);
}
