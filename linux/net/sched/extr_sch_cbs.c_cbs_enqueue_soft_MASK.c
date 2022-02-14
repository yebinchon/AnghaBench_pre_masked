
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct cbs_sched_data {scalar_t__ credits; int last; struct Qdisc* qdisc; } ;
struct TYPE_2__ {scalar_t__ qlen; } ;
struct Qdisc {TYPE_1__ q; } ;


 int FUNC_0 (struct sk_buff*,struct Qdisc*,struct Qdisc*,struct sk_buff**) ;
 int FUNC_1 () ;
 struct cbs_sched_data* FUNC_2 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_0, struct Qdisc *VAR_1,
       struct sk_buff **VAR_2)
{
 struct cbs_sched_data *VAR_3 = FUNC_2(VAR_1);
 struct Qdisc *VAR_4 = VAR_3->qdisc;

 if (VAR_1->q.qlen == 0 && VAR_3->credits > 0) {



  VAR_3->credits = 0;
  VAR_3->last = FUNC_1();
 }

 return FUNC_0(VAR_0, VAR_1, VAR_4, VAR_2);
}
