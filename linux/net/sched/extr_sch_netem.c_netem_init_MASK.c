
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct netem_sched_data {int loss_model; int watchdog; } ;
struct Qdisc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct Qdisc*,struct nlattr*,struct netlink_ext_ack*) ;
 int FUNC_1 (char*) ;
 struct netem_sched_data* FUNC_2 (struct Qdisc*) ;
 int FUNC_3 (int *,struct Qdisc*) ;

__attribute__((used)) static int FUNC_4(struct Qdisc *VAR_2, struct nlattr *VAR_3,
        struct netlink_ext_ack *VAR_4)
{
 struct netem_sched_data *VAR_5 = FUNC_2(VAR_2);
 int VAR_6;

 FUNC_3(&VAR_5->watchdog, VAR_2);

 if (!VAR_3)
  return -VAR_1;

 VAR_5->loss_model = VAR_0;
 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4);
 if (VAR_6)
  FUNC_1("netem: change failed\n");
 return VAR_6;
}
