
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prio_sched_data {struct Qdisc** queues; } ;
struct Qdisc {int dummy; } ;


 struct prio_sched_data* FUNC_0 (struct Qdisc*) ;

__attribute__((used)) static struct Qdisc *
FUNC_1(struct Qdisc *VAR_0, unsigned long VAR_1)
{
 struct prio_sched_data *VAR_2 = FUNC_0(VAR_0);
 unsigned long VAR_3 = VAR_1 - 1;

 return VAR_2->queues[VAR_3];
}
