
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {struct Qdisc* qdisc; } ;
struct etf_sched_data {TYPE_1__ watchdog; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 (struct net_device*,struct etf_sched_data*) ;
 struct net_device* FUNC_1 (struct Qdisc*) ;
 struct etf_sched_data* FUNC_2 (struct Qdisc*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct Qdisc *VAR_0)
{
 struct etf_sched_data *VAR_1 = FUNC_2(VAR_0);
 struct net_device *VAR_2 = FUNC_1(VAR_0);


 if (VAR_1->watchdog.qdisc == VAR_0)
  FUNC_3(&VAR_1->watchdog);

 FUNC_0(VAR_2, VAR_1);
}
