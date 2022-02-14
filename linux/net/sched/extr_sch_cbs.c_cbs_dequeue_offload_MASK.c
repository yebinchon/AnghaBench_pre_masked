
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct cbs_sched_data {struct Qdisc* qdisc; } ;
struct Qdisc {int dummy; } ;


 struct sk_buff* FUNC_0 (struct Qdisc*,struct Qdisc*) ;
 struct cbs_sched_data* FUNC_1 (struct Qdisc*) ;

__attribute__((used)) static struct sk_buff *FUNC_2(struct Qdisc *VAR_0)
{
 struct cbs_sched_data *VAR_1 = FUNC_1(VAR_0);
 struct Qdisc *VAR_2 = VAR_1->qdisc;

 return FUNC_0(VAR_0, VAR_2);
}
