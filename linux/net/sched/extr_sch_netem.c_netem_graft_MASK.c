
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct netem_sched_data {int qdisc; } ;
struct Qdisc {int dummy; } ;


 struct netem_sched_data* FUNC_0 (struct Qdisc*) ;
 struct Qdisc* FUNC_1 (struct Qdisc*,struct Qdisc*,int *) ;

__attribute__((used)) static int FUNC_2(struct Qdisc *VAR_0, unsigned long VAR_1, struct Qdisc *VAR_2,
       struct Qdisc **VAR_3, struct netlink_ext_ack *VAR_4)
{
 struct netem_sched_data *VAR_5 = FUNC_0(VAR_0);

 *VAR_3 = FUNC_1(VAR_0, VAR_2, &VAR_5->qdisc);
 return 0;
}
