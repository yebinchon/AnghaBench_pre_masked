
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netem_sched_data {int slot_dist; int delay_dist; scalar_t__ qdisc; int watchdog; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 (int ) ;
 struct netem_sched_data* FUNC_1 (struct Qdisc*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct Qdisc *VAR_0)
{
 struct netem_sched_data *VAR_1 = FUNC_1(VAR_0);

 FUNC_3(&VAR_1->watchdog);
 if (VAR_1->qdisc)
  FUNC_2(VAR_1->qdisc);
 FUNC_0(VAR_1->delay_dist);
 FUNC_0(VAR_1->slot_dist);
}
