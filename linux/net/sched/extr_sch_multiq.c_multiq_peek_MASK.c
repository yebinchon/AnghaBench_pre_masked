
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct multiq_sched_data {unsigned int curband; int bands; struct Qdisc** queues; } ;
struct Qdisc {TYPE_1__* ops; } ;
struct TYPE_2__ {struct sk_buff* (* peek ) (struct Qdisc*) ;} ;


 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct Qdisc*) ;
 struct multiq_sched_data* FUNC_3 (struct Qdisc*) ;
 struct sk_buff* FUNC_4 (struct Qdisc*) ;

__attribute__((used)) static struct sk_buff *FUNC_5(struct Qdisc *VAR_0)
{
 struct multiq_sched_data *VAR_1 = FUNC_3(VAR_0);
 unsigned int VAR_2 = VAR_1->curband;
 struct Qdisc *VAR_3;
 struct sk_buff *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1->bands; VAR_5++) {

  VAR_2++;
  if (VAR_2 >= VAR_1->bands)
   VAR_2 = 0;




  if (!FUNC_1(
      FUNC_0(FUNC_2(VAR_0), VAR_2))) {
   VAR_3 = VAR_1->queues[VAR_2];
   VAR_4 = VAR_3->ops->peek(VAR_3);
   if (VAR_4)
    return VAR_4;
  }
 }
 return ((void*)0);

}
