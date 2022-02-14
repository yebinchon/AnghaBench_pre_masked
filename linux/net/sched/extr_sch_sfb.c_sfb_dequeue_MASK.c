
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct sfb_sched_data {struct Qdisc* qdisc; } ;
struct TYPE_2__ {int qlen; } ;
struct Qdisc {TYPE_1__ q; struct sk_buff* (* dequeue ) (struct Qdisc*) ;} ;


 int FUNC_0 (struct sk_buff*,struct sfb_sched_data*) ;
 int FUNC_1 (struct Qdisc*,struct sk_buff*) ;
 struct sfb_sched_data* FUNC_2 (struct Qdisc*) ;
 int FUNC_3 (struct Qdisc*,struct sk_buff*) ;
 struct sk_buff* FUNC_4 (struct Qdisc*) ;

__attribute__((used)) static struct sk_buff *FUNC_5(struct Qdisc *VAR_0)
{
 struct sfb_sched_data *VAR_1 = FUNC_2(VAR_0);
 struct Qdisc *VAR_2 = VAR_1->qdisc;
 struct sk_buff *VAR_3;

 VAR_3 = VAR_2->dequeue(VAR_1->qdisc);

 if (VAR_3) {
  FUNC_1(VAR_0, VAR_3);
  FUNC_3(VAR_0, VAR_3);
  VAR_0->q.qlen--;
  FUNC_0(VAR_3, VAR_1);
 }

 return VAR_3;
}
