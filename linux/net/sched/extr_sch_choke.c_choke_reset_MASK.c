
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct choke_sched_data {size_t head; size_t tail; int tab_mask; int vars; struct sk_buff** tab; } ;
struct TYPE_4__ {scalar_t__ backlog; } ;
struct TYPE_3__ {scalar_t__ qlen; } ;
struct Qdisc {TYPE_2__ qstats; TYPE_1__ q; } ;


 int FUNC_0 (struct sk_buff**,int ,int) ;
 struct choke_sched_data* FUNC_1 (struct Qdisc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sk_buff*,struct Qdisc*) ;

__attribute__((used)) static void FUNC_4(struct Qdisc *VAR_0)
{
 struct choke_sched_data *VAR_1 = FUNC_1(VAR_0);

 while (VAR_1->head != VAR_1->tail) {
  struct sk_buff *VAR_2 = VAR_1->tab[VAR_1->head];

  VAR_1->head = (VAR_1->head + 1) & VAR_1->tab_mask;
  if (!VAR_2)
   continue;
  FUNC_3(VAR_2, VAR_0);
 }

 VAR_0->q.qlen = 0;
 VAR_0->qstats.backlog = 0;
 FUNC_0(VAR_1->tab, 0, (VAR_1->tab_mask + 1) * sizeof(struct sk_buff *));
 VAR_1->head = VAR_1->tail = 0;
 FUNC_2(&VAR_1->vars);
}
