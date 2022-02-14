
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct taprio_sched {struct sk_buff* (* dequeue ) (struct Qdisc*) ;} ;
struct sk_buff {int dummy; } ;
struct Qdisc {int dummy; } ;


 struct taprio_sched* FUNC_0 (struct Qdisc*) ;
 struct sk_buff* FUNC_1 (struct Qdisc*) ;

__attribute__((used)) static struct sk_buff *FUNC_2(struct Qdisc *VAR_0)
{
 struct taprio_sched *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->dequeue(VAR_0);
}
