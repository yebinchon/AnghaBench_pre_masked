
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tbf_sched_data {int t_c; int * qdisc; int watchdog; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct Qdisc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 struct tbf_sched_data* FUNC_1 (struct Qdisc*) ;
 int FUNC_2 (int *,struct Qdisc*) ;
 int FUNC_3 (struct Qdisc*,struct nlattr*,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_4(struct Qdisc *VAR_2, struct nlattr *VAR_3,
      struct netlink_ext_ack *VAR_4)
{
 struct tbf_sched_data *VAR_5 = FUNC_1(VAR_2);

 FUNC_2(&VAR_5->watchdog, VAR_2);
 VAR_5->qdisc = &VAR_1;

 if (!VAR_3)
  return -VAR_0;

 VAR_5->t_c = FUNC_0();

 return FUNC_3(VAR_2, VAR_3, VAR_4);
}
