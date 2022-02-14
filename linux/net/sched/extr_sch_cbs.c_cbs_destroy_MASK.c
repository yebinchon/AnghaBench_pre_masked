
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct cbs_sched_data {int qdisc; int cbs_list; int watchdog; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 (struct net_device*,struct cbs_sched_data*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 struct net_device* FUNC_2 (struct Qdisc*) ;
 struct cbs_sched_data* FUNC_3 (struct Qdisc*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct Qdisc *VAR_1)
{
 struct cbs_sched_data *VAR_2 = FUNC_3(VAR_1);
 struct net_device *VAR_3 = FUNC_2(VAR_1);


 if (!VAR_2->qdisc)
  return;

 FUNC_5(&VAR_2->watchdog);
 FUNC_0(VAR_3, VAR_2);

 FUNC_6(&VAR_0);
 FUNC_1(&VAR_2->cbs_list);
 FUNC_7(&VAR_0);

 FUNC_4(VAR_2->qdisc);
}
