
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct red_sched_data {struct Qdisc* qdisc; } ;
struct Qdisc {TYPE_1__* ops; } ;
struct TYPE_2__ {struct sk_buff* (* peek ) (struct Qdisc*) ;} ;


 struct red_sched_data* FUNC_0 (struct Qdisc*) ;
 struct sk_buff* FUNC_1 (struct Qdisc*) ;

__attribute__((used)) static struct sk_buff *FUNC_2(struct Qdisc *VAR_0)
{
 struct red_sched_data *VAR_1 = FUNC_0(VAR_0);
 struct Qdisc *VAR_2 = VAR_1->qdisc;

 return VAR_2->ops->peek(VAR_2);
}
