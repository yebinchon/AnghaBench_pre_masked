
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skbprio_sched_data {TYPE_1__* qstats; } ;
struct gnet_dump {int dummy; } ;
struct Qdisc {int dummy; } ;
struct TYPE_2__ {int qlen; } ;


 scalar_t__ FUNC_0 (struct gnet_dump*,int *,TYPE_1__*,int ) ;
 struct skbprio_sched_data* FUNC_1 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_2(struct Qdisc *VAR_0, unsigned long VAR_1,
       struct gnet_dump *VAR_2)
{
 struct skbprio_sched_data *VAR_3 = FUNC_1(VAR_0);
 if (FUNC_0(VAR_2, ((void*)0), &VAR_3->qstats[VAR_1 - 1],
  VAR_3->qstats[VAR_1 - 1].qlen) < 0)
  return -1;
 return 0;
}
