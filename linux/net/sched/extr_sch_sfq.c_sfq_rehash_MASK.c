
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_7__ {int qavg; } ;
struct sfq_slot {int qlen; size_t hash; size_t next; int allot; scalar_t__ backlog; TYPE_3__ vars; } ;
struct sfq_sched_data {int maxflows; size_t* ht; int maxdepth; int scaled_quantum; struct sfq_slot* tail; scalar_t__ red_parms; struct sfq_slot* slots; TYPE_1__* dep; } ;
struct TYPE_6__ {int qlen; } ;
struct Qdisc {TYPE_2__ q; } ;
typedef size_t sfq_index ;
struct TYPE_5__ {size_t next; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 struct sk_buff* FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (struct sk_buff_head*) ;
 int FUNC_2 (struct sk_buff_head*,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 struct sfq_sched_data* FUNC_5 (struct Qdisc*) ;
 int FUNC_6 (struct Qdisc*,struct sk_buff*) ;
 int FUNC_7 (struct Qdisc*,int,unsigned int) ;
 int FUNC_8 (scalar_t__,TYPE_3__*,scalar_t__) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (struct sfq_sched_data*,int) ;
 unsigned int FUNC_11 (struct sfq_sched_data*,struct sk_buff*) ;
 int FUNC_12 (struct sfq_sched_data*,size_t) ;
 struct sk_buff* FUNC_13 (struct sfq_slot*) ;
 int FUNC_14 (struct sfq_slot*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_15(struct Qdisc *VAR_2)
{
 struct sfq_sched_data *VAR_3 = FUNC_5(VAR_2);
 struct sk_buff *VAR_4;
 int VAR_5;
 struct sfq_slot *VAR_6;
 struct sk_buff_head VAR_7;
 int VAR_8 = 0;
 unsigned int VAR_9 = 0;

 FUNC_1(&VAR_7);

 for (VAR_5 = 0; VAR_5 < VAR_3->maxflows; VAR_5++) {
  VAR_6 = &VAR_3->slots[VAR_5];
  if (!VAR_6->qlen)
   continue;
  while (VAR_6->qlen) {
   VAR_4 = FUNC_13(VAR_6);
   FUNC_10(VAR_3, VAR_5);
   FUNC_2(&VAR_7, VAR_4);
  }
  VAR_6->backlog = 0;
  FUNC_9(&VAR_6->vars);
  VAR_3->ht[VAR_6->hash] = VAR_0;
 }
 VAR_3->tail = ((void*)0);

 while ((VAR_4 = FUNC_0(&VAR_7)) != ((void*)0)) {
  unsigned int VAR_10 = FUNC_11(VAR_3, VAR_4);
  sfq_index VAR_11 = VAR_3->ht[VAR_10];

  VAR_6 = &VAR_3->slots[VAR_11];
  if (VAR_11 == VAR_0) {
   VAR_11 = VAR_3->dep[0].next;
   if (VAR_11 >= VAR_1) {
drop:
    FUNC_6(VAR_2, VAR_4);
    VAR_9 += FUNC_4(VAR_4);
    FUNC_3(VAR_4);
    VAR_8++;
    continue;
   }
   VAR_3->ht[VAR_10] = VAR_11;
   VAR_6 = &VAR_3->slots[VAR_11];
   VAR_6->hash = VAR_10;
  }
  if (VAR_6->qlen >= VAR_3->maxdepth)
   goto drop;
  FUNC_14(VAR_6, VAR_4);
  if (VAR_3->red_parms)
   VAR_6->vars.qavg = FUNC_8(VAR_3->red_parms,
       &VAR_6->vars,
       VAR_6->backlog);
  VAR_6->backlog += FUNC_4(VAR_4);
  FUNC_12(VAR_3, VAR_11);
  if (VAR_6->qlen == 1) {
   if (VAR_3->tail == ((void*)0)) {
    VAR_6->next = VAR_11;
   } else {
    VAR_6->next = VAR_3->tail->next;
    VAR_3->tail->next = VAR_11;
   }
   VAR_3->tail = VAR_6;
   VAR_6->allot = VAR_3->scaled_quantum;
  }
 }
 VAR_2->q.qlen -= VAR_8;
 FUNC_7(VAR_2, VAR_8, VAR_9);
}
