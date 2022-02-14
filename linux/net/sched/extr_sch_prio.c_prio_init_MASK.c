
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prio_sched_data {int filter_list; int block; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct Qdisc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct Qdisc*,struct nlattr*,struct netlink_ext_ack*) ;
 struct prio_sched_data* FUNC_1 (struct Qdisc*) ;
 int FUNC_2 (int *,int *,struct Qdisc*,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_3(struct Qdisc *VAR_1, struct nlattr *VAR_2,
       struct netlink_ext_ack *VAR_3)
{
 struct prio_sched_data *VAR_4 = FUNC_1(VAR_1);
 int VAR_5;

 if (!VAR_2)
  return -VAR_0;

 VAR_5 = FUNC_2(&VAR_4->block, &VAR_4->filter_list, VAR_1, VAR_3);
 if (VAR_5)
  return VAR_5;

 return FUNC_0(VAR_1, VAR_2, VAR_3);
}
