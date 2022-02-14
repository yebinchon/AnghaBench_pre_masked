
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct cbs_sched_data {struct Qdisc* qdisc; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 (struct sk_buff*,struct Qdisc*,struct Qdisc*,struct sk_buff**) ;
 struct cbs_sched_data* FUNC_1 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_0, struct Qdisc *VAR_1,
          struct sk_buff **VAR_2)
{
 struct cbs_sched_data *VAR_3 = FUNC_1(VAR_1);
 struct Qdisc *VAR_4 = VAR_3->qdisc;

 return FUNC_0(VAR_0, VAR_1, VAR_4, VAR_2);
}
