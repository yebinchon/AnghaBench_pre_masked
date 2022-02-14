
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {struct sk_buff* next; } ;
struct TYPE_4__ {int qlen; } ;
struct TYPE_3__ {int requeues; } ;
struct Qdisc {int flags; TYPE_2__ q; TYPE_1__ qstats; int gso_skb; } ;
typedef int spinlock_t ;


 int VAR_0 ;
 int FUNC_0 (struct Qdisc*) ;
 int FUNC_1 (int *,struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct Qdisc*) ;
 int * FUNC_3 (struct Qdisc*) ;
 int FUNC_4 (struct Qdisc*,struct sk_buff*) ;
 int FUNC_5 (struct Qdisc*,struct sk_buff*) ;
 int FUNC_6 (struct Qdisc*) ;
 int FUNC_7 (struct Qdisc*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static inline void FUNC_10(struct sk_buff *VAR_1, struct Qdisc *VAR_2)
{
 spinlock_t *VAR_3 = ((void*)0);

 if (VAR_2->flags & VAR_0) {
  VAR_3 = FUNC_3(VAR_2);
  FUNC_8(VAR_3);
 }

 while (VAR_1) {
  struct sk_buff *VAR_4 = VAR_1->next;

  FUNC_1(&VAR_2->gso_skb, VAR_1);


  if (FUNC_2(VAR_2)) {
   FUNC_7(VAR_2);
   FUNC_5(VAR_2, VAR_1);
   FUNC_6(VAR_2);
  } else {
   VAR_2->qstats.requeues++;
   FUNC_4(VAR_2, VAR_1);
   VAR_2->q.qlen++;
  }

  VAR_1 = VAR_4;
 }
 if (VAR_3)
  FUNC_9(VAR_3);
 FUNC_0(VAR_2);
}
