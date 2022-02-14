
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfb_sched_data {int qdisc; } ;
struct netlink_ext_ack {int dummy; } ;
struct Qdisc {int dummy; } ;


 struct Qdisc VAR_0 ;
 struct sfb_sched_data* FUNC_0 (struct Qdisc*) ;
 struct Qdisc* FUNC_1 (struct Qdisc*,struct Qdisc*,int *) ;

__attribute__((used)) static int FUNC_2(struct Qdisc *VAR_1, unsigned long VAR_2, struct Qdisc *VAR_3,
       struct Qdisc **VAR_4, struct netlink_ext_ack *VAR_5)
{
 struct sfb_sched_data *VAR_6 = FUNC_0(VAR_1);

 if (VAR_3 == ((void*)0))
  VAR_3 = &VAR_0;

 *VAR_4 = FUNC_1(VAR_1, VAR_3, &VAR_6->qdisc);
 return 0;
}
