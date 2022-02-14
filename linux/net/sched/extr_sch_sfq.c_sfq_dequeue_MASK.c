
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct sfq_slot {size_t next; scalar_t__ allot; scalar_t__ qlen; size_t hash; int backlog; } ;
struct sfq_sched_data {scalar_t__ scaled_quantum; struct sfq_slot* tail; int * ht; struct sfq_slot* slots; } ;
struct TYPE_2__ {int qlen; } ;
struct Qdisc {TYPE_1__ q; } ;
typedef size_t sfq_index ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (struct Qdisc*,struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 struct sfq_sched_data* FUNC_3 (struct Qdisc*) ;
 int FUNC_4 (struct Qdisc*,struct sk_buff*) ;
 int FUNC_5 (struct sfq_sched_data*,size_t) ;
 struct sk_buff* FUNC_6 (struct sfq_slot*) ;

__attribute__((used)) static struct sk_buff *
FUNC_7(struct Qdisc *VAR_1)
{
 struct sfq_sched_data *VAR_2 = FUNC_3(VAR_1);
 struct sk_buff *VAR_3;
 sfq_index VAR_4, VAR_5;
 struct sfq_slot *VAR_6;


 if (VAR_2->tail == ((void*)0))
  return ((void*)0);

next_slot:
 VAR_4 = VAR_2->tail->next;
 VAR_6 = &VAR_2->slots[VAR_4];
 if (VAR_6->allot <= 0) {
  VAR_2->tail = VAR_6;
  VAR_6->allot += VAR_2->scaled_quantum;
  goto next_slot;
 }
 VAR_3 = FUNC_6(VAR_6);
 FUNC_5(VAR_2, VAR_4);
 FUNC_1(VAR_1, VAR_3);
 VAR_1->q.qlen--;
 FUNC_4(VAR_1, VAR_3);
 VAR_6->backlog -= FUNC_2(VAR_3);

 if (VAR_6->qlen == 0) {
  VAR_2->ht[VAR_6->hash] = VAR_0;
  VAR_5 = VAR_6->next;
  if (VAR_4 == VAR_5) {
   VAR_2->tail = ((void*)0);
   return VAR_3;
  }
  VAR_2->tail->next = VAR_5;
 } else {
  VAR_6->allot -= FUNC_0(FUNC_2(VAR_3));
 }
 return VAR_3;
}
