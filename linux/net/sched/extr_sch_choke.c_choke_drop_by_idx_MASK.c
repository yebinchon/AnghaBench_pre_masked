
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct choke_sched_data {unsigned int head; unsigned int tail; struct sk_buff** tab; } ;
struct TYPE_2__ {int qlen; } ;
struct Qdisc {TYPE_1__ q; } ;


 int FUNC_0 (struct choke_sched_data*) ;
 int FUNC_1 (struct choke_sched_data*) ;
 int FUNC_2 (struct sk_buff*,struct Qdisc*,struct sk_buff**) ;
 int FUNC_3 (struct sk_buff*) ;
 struct choke_sched_data* FUNC_4 (struct Qdisc*) ;
 int FUNC_5 (struct Qdisc*,struct sk_buff*) ;
 int FUNC_6 (struct Qdisc*,int,int ) ;

__attribute__((used)) static void FUNC_7(struct Qdisc *VAR_0, unsigned int VAR_1,
         struct sk_buff **VAR_2)
{
 struct choke_sched_data *VAR_3 = FUNC_4(VAR_0);
 struct sk_buff *VAR_4 = VAR_3->tab[VAR_1];

 VAR_3->tab[VAR_1] = ((void*)0);

 if (VAR_1 == VAR_3->head)
  FUNC_0(VAR_3);
 if (VAR_1 == VAR_3->tail)
  FUNC_1(VAR_3);

 FUNC_5(VAR_0, VAR_4);
 FUNC_6(VAR_0, 1, FUNC_3(VAR_4));
 FUNC_2(VAR_4, VAR_0, VAR_2);
 --VAR_0->q.qlen;
}
