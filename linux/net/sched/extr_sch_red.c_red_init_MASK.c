
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct red_sched_data {int adapt_timer; struct Qdisc* sch; int * qdisc; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct Qdisc {int dummy; } ;


 int VAR_0 ;
 struct red_sched_data* FUNC_0 (struct Qdisc*) ;
 int VAR_1 ;
 int FUNC_1 (struct Qdisc*,struct nlattr*,struct netlink_ext_ack*) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct Qdisc *VAR_2, struct nlattr *VAR_3,
      struct netlink_ext_ack *VAR_4)
{
 struct red_sched_data *VAR_5 = FUNC_0(VAR_2);

 VAR_5->qdisc = &VAR_0;
 VAR_5->sch = VAR_2;
 FUNC_2(&VAR_5->adapt_timer, VAR_1, 0);
 return FUNC_1(VAR_2, VAR_3, VAR_4);
}
