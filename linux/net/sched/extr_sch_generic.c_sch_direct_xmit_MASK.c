
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct netdev_queue {int dummy; } ;
struct net_device {int name; } ;
struct TYPE_2__ {int qlen; } ;
struct Qdisc {TYPE_1__ q; } ;
typedef int spinlock_t ;


 int FUNC_0 (struct net_device*,struct netdev_queue*,int ) ;
 int FUNC_1 (struct net_device*,struct netdev_queue*) ;
 int VAR_0 ;
 struct sk_buff* FUNC_2 (struct sk_buff*,struct net_device*,struct netdev_queue*,int*) ;
 int FUNC_3 (struct sk_buff*,struct Qdisc*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (char*,int ,int,int ) ;
 int FUNC_7 (struct netdev_queue*) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int) ;
 struct sk_buff* FUNC_12 (struct sk_buff*,struct net_device*,int*) ;

bool FUNC_13(struct sk_buff *VAR_1, struct Qdisc *VAR_2,
       struct net_device *VAR_3, struct netdev_queue *VAR_4,
       spinlock_t *VAR_5, bool VAR_6)
{
 int VAR_7 = VAR_0;
 bool VAR_8 = 0;


 if (VAR_5)
  FUNC_10(VAR_5);


 if (VAR_6)
  VAR_1 = FUNC_12(VAR_1, VAR_3, &VAR_8);
 if (FUNC_5(VAR_1)) {
  FUNC_0(VAR_3, VAR_4, FUNC_8());
  if (!FUNC_7(VAR_4))
   VAR_1 = FUNC_2(VAR_1, VAR_3, VAR_4, &VAR_7);

  FUNC_1(VAR_3, VAR_4);
 } else {
  if (VAR_5)
   FUNC_9(VAR_5);
  return 1;
 }

 if (VAR_5)
  FUNC_9(VAR_5);

 if (!FUNC_4(VAR_7)) {

  if (FUNC_11(VAR_7 != VAR_0))
   FUNC_6("BUG %s code %d qlen %d\n",
          VAR_3->name, VAR_7, VAR_2->q.qlen);

  FUNC_3(VAR_1, VAR_2);
  return 0;
 }

 return 1;
}
