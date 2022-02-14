
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netem_sched_data {struct Qdisc* qdisc; } ;
struct Qdisc {int dummy; } ;


 struct netem_sched_data* FUNC_0 (struct Qdisc*) ;

__attribute__((used)) static struct Qdisc *FUNC_1(struct Qdisc *VAR_0, unsigned long VAR_1)
{
 struct netem_sched_data *VAR_2 = FUNC_0(VAR_0);
 return VAR_2->qdisc;
}
