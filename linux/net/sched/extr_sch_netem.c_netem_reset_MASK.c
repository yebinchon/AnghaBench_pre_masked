
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netem_sched_data {int watchdog; scalar_t__ qdisc; } ;
struct Qdisc {int dummy; } ;


 struct netem_sched_data* FUNC_0 (struct Qdisc*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct Qdisc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct Qdisc*) ;

__attribute__((used)) static void FUNC_5(struct Qdisc *VAR_0)
{
 struct netem_sched_data *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(VAR_0);
 FUNC_4(VAR_0);
 if (VAR_1->qdisc)
  FUNC_1(VAR_1->qdisc);
 FUNC_3(&VAR_1->watchdog);
}
