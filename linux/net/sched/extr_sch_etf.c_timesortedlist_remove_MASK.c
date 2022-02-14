
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int tstamp; int dev; int * prev; int * next; int rbnode; } ;
struct etf_sched_data {int last; int head; } ;
struct TYPE_2__ {int qlen; } ;
struct Qdisc {TYPE_1__ q; } ;


 int FUNC_0 (struct Qdisc*,struct sk_buff*) ;
 int FUNC_1 (struct Qdisc*) ;
 struct etf_sched_data* FUNC_2 (struct Qdisc*) ;
 int FUNC_3 (struct Qdisc*,struct sk_buff*) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static void FUNC_5(struct Qdisc *VAR_0, struct sk_buff *VAR_1)
{
 struct etf_sched_data *VAR_2 = FUNC_2(VAR_0);

 FUNC_4(&VAR_1->rbnode, &VAR_2->head);




 VAR_1->next = ((void*)0);
 VAR_1->prev = ((void*)0);
 VAR_1->dev = FUNC_1(VAR_0);

 FUNC_3(VAR_0, VAR_1);

 FUNC_0(VAR_0, VAR_1);

 VAR_2->last = VAR_1->tstamp;

 VAR_0->q.qlen--;
}
