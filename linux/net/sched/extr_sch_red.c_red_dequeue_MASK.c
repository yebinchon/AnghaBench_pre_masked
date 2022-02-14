
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct red_sched_data {int vars; struct Qdisc* qdisc; } ;
struct TYPE_2__ {int qlen; } ;
struct Qdisc {TYPE_1__ q; struct sk_buff* (* dequeue ) (struct Qdisc*) ;} ;


 int FUNC_0 (struct Qdisc*,struct sk_buff*) ;
 struct red_sched_data* FUNC_1 (struct Qdisc*) ;
 int FUNC_2 (struct Qdisc*,struct sk_buff*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct sk_buff* FUNC_5 (struct Qdisc*) ;

__attribute__((used)) static struct sk_buff *FUNC_6(struct Qdisc *VAR_0)
{
 struct sk_buff *VAR_1;
 struct red_sched_data *VAR_2 = FUNC_1(VAR_0);
 struct Qdisc *VAR_3 = VAR_2->qdisc;

 VAR_1 = VAR_3->dequeue(VAR_3);
 if (VAR_1) {
  FUNC_0(VAR_0, VAR_1);
  FUNC_2(VAR_0, VAR_1);
  VAR_0->q.qlen--;
 } else {
  if (!FUNC_3(&VAR_2->vars))
   FUNC_4(&VAR_2->vars);
 }
 return VAR_1;
}
