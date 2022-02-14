
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct sfq_slot {unsigned int backlog; int next; size_t hash; } ;
struct sfq_sched_data {int cur_depth; int * ht; TYPE_3__* tail; struct sfq_slot* slots; scalar_t__ headdrop; TYPE_1__* dep; } ;
struct TYPE_5__ {int qlen; } ;
struct Qdisc {TYPE_2__ q; } ;
typedef int sfq_index ;
struct TYPE_6__ {int next; } ;
struct TYPE_4__ {int next; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,struct Qdisc*,struct sk_buff**) ;
 unsigned int FUNC_1 (struct sk_buff*) ;
 struct sfq_sched_data* FUNC_2 (struct Qdisc*) ;
 int FUNC_3 (struct Qdisc*,struct sk_buff*) ;
 int FUNC_4 (struct sfq_sched_data*,int) ;
 struct sk_buff* FUNC_5 (struct sfq_slot*) ;
 struct sk_buff* FUNC_6 (struct sfq_slot*) ;

__attribute__((used)) static unsigned int FUNC_7(struct Qdisc *VAR_1, struct sk_buff **VAR_2)
{
 struct sfq_sched_data *VAR_3 = FUNC_2(VAR_1);
 sfq_index VAR_4, VAR_5 = VAR_3->cur_depth;
 struct sk_buff *VAR_6;
 unsigned int VAR_7;
 struct sfq_slot *VAR_8;


 if (VAR_5 > 1) {
  VAR_4 = VAR_3->dep[VAR_5].next;
  VAR_8 = &VAR_3->slots[VAR_4];
drop:
  VAR_6 = VAR_3->headdrop ? FUNC_5(VAR_8) : FUNC_6(VAR_8);
  VAR_7 = FUNC_1(VAR_6);
  VAR_8->backlog -= VAR_7;
  FUNC_4(VAR_3, VAR_4);
  VAR_1->q.qlen--;
  FUNC_3(VAR_1, VAR_6);
  FUNC_0(VAR_6, VAR_1, VAR_2);
  return VAR_7;
 }

 if (VAR_5 == 1) {

  VAR_4 = VAR_3->tail->next;
  VAR_8 = &VAR_3->slots[VAR_4];
  VAR_3->tail->next = VAR_8->next;
  VAR_3->ht[VAR_8->hash] = VAR_0;
  goto drop;
 }

 return 0;
}
