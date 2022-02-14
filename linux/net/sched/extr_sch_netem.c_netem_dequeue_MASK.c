
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct sk_buff {int dev; int * prev; int * next; } ;
struct TYPE_8__ {scalar_t__ slot_next; scalar_t__ packets_left; scalar_t__ bytes_left; } ;
struct netem_sched_data {TYPE_3__* qdisc; TYPE_1__ slot; int watchdog; } ;
struct TYPE_12__ {int qlen; } ;
struct Qdisc {TYPE_7__ q; } ;
struct TYPE_11__ {scalar_t__ time_to_send; } ;
struct TYPE_10__ {TYPE_2__* ops; } ;
struct TYPE_9__ {struct sk_buff* (* dequeue ) (TYPE_3__*) ;} ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (struct netem_sched_data*,scalar_t__) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct netem_sched_data*,struct sk_buff*) ;
 struct sk_buff* FUNC_7 (struct netem_sched_data*) ;
 TYPE_6__* FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct Qdisc*,struct sk_buff*) ;
 int FUNC_10 (struct Qdisc*) ;
 int FUNC_11 (struct sk_buff*,TYPE_3__*,struct sk_buff**) ;
 unsigned int FUNC_12 (struct sk_buff*) ;
 struct netem_sched_data* FUNC_13 (struct Qdisc*) ;
 int FUNC_14 (struct Qdisc*,struct sk_buff*) ;
 int FUNC_15 (struct Qdisc*) ;
 int FUNC_16 (struct Qdisc*,int,unsigned int) ;
 int FUNC_17 (int *,int ) ;
 struct sk_buff* FUNC_18 (TYPE_3__*) ;
 struct sk_buff* FUNC_19 (TYPE_3__*) ;

__attribute__((used)) static struct sk_buff *FUNC_20(struct Qdisc *VAR_1)
{
 struct netem_sched_data *VAR_2 = FUNC_13(VAR_1);
 struct sk_buff *VAR_3;

tfifo_dequeue:
 VAR_3 = FUNC_0(&VAR_1->q);
 if (VAR_3) {
  FUNC_14(VAR_1, VAR_3);
deliver:
  FUNC_9(VAR_1, VAR_3);
  return VAR_3;
 }
 VAR_3 = FUNC_7(VAR_2);
 if (VAR_3) {
  u64 VAR_4;
  u64 VAR_5 = FUNC_3();


  VAR_4 = FUNC_8(VAR_3)->time_to_send;
  if (VAR_2->slot.slot_next && VAR_2->slot.slot_next < VAR_4)
   FUNC_1(VAR_2, VAR_5);

  if (VAR_4 <= VAR_5 && VAR_2->slot.slot_next <= VAR_5) {
   FUNC_6(VAR_2, VAR_3);
   VAR_1->q.qlen--;
   FUNC_14(VAR_1, VAR_3);
   VAR_3->next = ((void*)0);
   VAR_3->prev = ((void*)0);



   VAR_3->dev = FUNC_10(VAR_1);

   if (VAR_2->slot.slot_next) {
    VAR_2->slot.packets_left--;
    VAR_2->slot.bytes_left -= FUNC_12(VAR_3);
    if (VAR_2->slot.packets_left <= 0 ||
        VAR_2->slot.bytes_left <= 0)
     FUNC_1(VAR_2, VAR_5);
   }

   if (VAR_2->qdisc) {
    unsigned int VAR_6 = FUNC_12(VAR_3);
    struct sk_buff *VAR_7 = ((void*)0);
    int VAR_8;

    VAR_8 = FUNC_11(VAR_3, VAR_2->qdisc, &VAR_7);
    FUNC_2(VAR_7);
    if (VAR_8 != VAR_0 &&
        FUNC_5(VAR_8)) {
     FUNC_15(VAR_1);
     FUNC_16(VAR_1, 1,
          VAR_6);
    }
    goto tfifo_dequeue;
   }
   goto deliver;
  }

  if (VAR_2->qdisc) {
   VAR_3 = VAR_2->qdisc->ops->dequeue(VAR_2->qdisc);
   if (VAR_3)
    goto deliver;
  }

  FUNC_17(&VAR_2->watchdog,
        FUNC_4(VAR_4,
            VAR_2->slot.slot_next));
 }

 if (VAR_2->qdisc) {
  VAR_3 = VAR_2->qdisc->ops->dequeue(VAR_2->qdisc);
  if (VAR_3)
   goto deliver;
 }
 return ((void*)0);
}
