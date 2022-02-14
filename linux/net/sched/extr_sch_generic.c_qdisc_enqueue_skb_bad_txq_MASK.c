
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int qlen; } ;
struct Qdisc {int flags; TYPE_1__ q; int skb_bad_txq; } ;
typedef int spinlock_t ;


 int VAR_0 ;
 int FUNC_0 (int *,struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct Qdisc*) ;
 int * FUNC_2 (struct Qdisc*) ;
 int FUNC_3 (struct Qdisc*,struct sk_buff*) ;
 int FUNC_4 (struct Qdisc*,struct sk_buff*) ;
 int FUNC_5 (struct Qdisc*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static inline void FUNC_8(struct Qdisc *VAR_1,
          struct sk_buff *VAR_2)
{
 spinlock_t *VAR_3 = ((void*)0);

 if (VAR_1->flags & VAR_0) {
  VAR_3 = FUNC_2(VAR_1);
  FUNC_6(VAR_3);
 }

 FUNC_0(&VAR_1->skb_bad_txq, VAR_2);

 if (FUNC_1(VAR_1)) {
  FUNC_4(VAR_1, VAR_2);
  FUNC_5(VAR_1);
 } else {
  FUNC_3(VAR_1, VAR_2);
  VAR_1->q.qlen++;
 }

 if (VAR_3)
  FUNC_7(VAR_3);
}
