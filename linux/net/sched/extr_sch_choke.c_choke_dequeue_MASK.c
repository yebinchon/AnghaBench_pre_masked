
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct choke_sched_data {size_t head; size_t tail; struct sk_buff** tab; int vars; } ;
struct TYPE_2__ {int qlen; } ;
struct Qdisc {TYPE_1__ q; } ;


 int FUNC_0 (struct choke_sched_data*) ;
 int FUNC_1 (struct Qdisc*,struct sk_buff*) ;
 struct choke_sched_data* FUNC_2 (struct Qdisc*) ;
 int FUNC_3 (struct Qdisc*,struct sk_buff*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct sk_buff *FUNC_6(struct Qdisc *VAR_0)
{
 struct choke_sched_data *VAR_1 = FUNC_2(VAR_0);
 struct sk_buff *VAR_2;

 if (VAR_1->head == VAR_1->tail) {
  if (!FUNC_4(&VAR_1->vars))
   FUNC_5(&VAR_1->vars);
  return ((void*)0);
 }

 VAR_2 = VAR_1->tab[VAR_1->head];
 VAR_1->tab[VAR_1->head] = ((void*)0);
 FUNC_0(VAR_1);
 --VAR_0->q.qlen;
 FUNC_3(VAR_0, VAR_2);
 FUNC_1(VAR_0, VAR_2);

 return VAR_2;
}
