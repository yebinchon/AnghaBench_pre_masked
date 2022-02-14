
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct netdev_queue {int dummy; } ;
struct net_device {int dummy; } ;
struct Qdisc {int flags; int (* enqueue ) (struct sk_buff*,struct Qdisc*,struct sk_buff**) ;int busylock; int state; scalar_t__ empty; } ;
typedef int spinlock_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*,struct sk_buff**) ;
 int FUNC_1 (struct Qdisc*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct Qdisc*,struct sk_buff*) ;
 int FUNC_4 (struct Qdisc*,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,struct Qdisc*) ;
 int FUNC_6 (struct Qdisc*) ;
 int * FUNC_7 (struct Qdisc*) ;
 int FUNC_8 (struct Qdisc*) ;
 int FUNC_9 (struct Qdisc*) ;
 scalar_t__ FUNC_10 (struct Qdisc*) ;
 int FUNC_11 (struct Qdisc*) ;
 scalar_t__ FUNC_12 (struct sk_buff*,struct Qdisc*,struct net_device*,struct netdev_queue*,int *,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct sk_buff*,struct Qdisc*,struct sk_buff**) ;
 int FUNC_16 (struct sk_buff*,struct Qdisc*,struct sk_buff**) ;
 int FUNC_17 (int ,int *) ;
 scalar_t__ FUNC_18 (int) ;

__attribute__((used)) static inline int FUNC_19(struct sk_buff *VAR_6, struct Qdisc *VAR_7,
     struct net_device *VAR_8,
     struct netdev_queue *VAR_9)
{
 spinlock_t *VAR_10 = FUNC_7(VAR_7);
 struct sk_buff *VAR_11 = ((void*)0);
 bool VAR_12;
 int VAR_13;

 FUNC_5(VAR_6, VAR_7);

 if (VAR_7->flags & VAR_4) {
  if ((VAR_7->flags & VAR_3) && VAR_7->empty &&
      FUNC_10(VAR_7)) {
   if (FUNC_18(FUNC_17(VAR_5,
           &VAR_7->state))) {
    FUNC_0(VAR_6, &VAR_11);
    VAR_13 = VAR_0;
    goto end_run;
   }
   FUNC_3(VAR_7, VAR_6);

   VAR_13 = VAR_2;
   if (FUNC_12(VAR_6, VAR_7, VAR_8, VAR_9, ((void*)0), 1))
    FUNC_1(VAR_7);

end_run:
   FUNC_11(VAR_7);
  } else {
   VAR_13 = VAR_7->enqueue(VAR_6, VAR_7, &VAR_11) & VAR_1;
   FUNC_9(VAR_7);
  }

  if (FUNC_18(VAR_11))
   FUNC_2(VAR_11);
  return VAR_13;
 }







 VAR_12 = FUNC_6(VAR_7);
 if (FUNC_18(VAR_12))
  FUNC_13(&VAR_7->busylock);

 FUNC_13(VAR_10);
 if (FUNC_18(FUNC_17(VAR_5, &VAR_7->state))) {
  FUNC_0(VAR_6, &VAR_11);
  VAR_13 = VAR_0;
 } else if ((VAR_7->flags & VAR_3) && !FUNC_8(VAR_7) &&
     FUNC_10(VAR_7)) {






  FUNC_4(VAR_7, VAR_6);

  if (FUNC_12(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, 1)) {
   if (FUNC_18(VAR_12)) {
    FUNC_14(&VAR_7->busylock);
    VAR_12 = 0;
   }
   FUNC_1(VAR_7);
  }

  FUNC_11(VAR_7);
  VAR_13 = VAR_2;
 } else {
  VAR_13 = VAR_7->enqueue(VAR_6, VAR_7, &VAR_11) & VAR_1;
  if (FUNC_10(VAR_7)) {
   if (FUNC_18(VAR_12)) {
    FUNC_14(&VAR_7->busylock);
    VAR_12 = 0;
   }
   FUNC_1(VAR_7);
   FUNC_11(VAR_7);
  }
 }
 FUNC_14(VAR_10);
 if (FUNC_18(VAR_11))
  FUNC_2(VAR_11);
 if (FUNC_18(VAR_12))
  FUNC_14(&VAR_7->busylock);
 return VAR_13;
}
