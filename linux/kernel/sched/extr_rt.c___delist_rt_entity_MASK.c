
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_rt_entity {scalar_t__ on_list; int run_list; } ;
struct rt_prio_array {int bitmap; scalar_t__ queue; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct sched_rt_entity*) ;

__attribute__((used)) static void FUNC_4(struct sched_rt_entity *VAR_0, struct rt_prio_array *VAR_1)
{
 FUNC_1(&VAR_0->run_list);

 if (FUNC_2(VAR_1->queue + FUNC_3(VAR_0)))
  FUNC_0(FUNC_3(VAR_0), VAR_1->bitmap);

 VAR_0->on_list = 0;
}
