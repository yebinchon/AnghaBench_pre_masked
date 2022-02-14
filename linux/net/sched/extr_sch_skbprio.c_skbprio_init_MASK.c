
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skbprio_sched_data {int lowest_prio; scalar_t__ highest_prio; int qstats; int * qdiscs; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct Qdisc {int limit; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int) ;
 struct skbprio_sched_data* FUNC_2 (struct Qdisc*) ;
 int FUNC_3 (struct Qdisc*,struct nlattr*,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_4(struct Qdisc *VAR_1, struct nlattr *VAR_2,
   struct netlink_ext_ack *VAR_3)
{
 struct skbprio_sched_data *VAR_4 = FUNC_2(VAR_1);
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  FUNC_0(&VAR_4->qdiscs[VAR_5]);

 FUNC_1(&VAR_4->qstats, 0, sizeof(VAR_4->qstats));
 VAR_4->highest_prio = 0;
 VAR_4->lowest_prio = VAR_0 - 1;
 VAR_1->limit = 64;
 if (!VAR_2)
  return 0;

 return FUNC_3(VAR_1, VAR_2, VAR_3);
}
