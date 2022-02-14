
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sched_rt_entity {int dummy; } ;
struct TYPE_3__ {int curr; } ;
struct rt_rq {TYPE_1__ highest_prio; } ;
struct TYPE_4__ {int prio; } ;


 struct rt_rq* FUNC_0 (struct sched_rt_entity*) ;
 TYPE_2__* FUNC_1 (struct sched_rt_entity*) ;

__attribute__((used)) static inline int FUNC_2(struct sched_rt_entity *VAR_0)
{







 return FUNC_1(VAR_0)->prio;
}
