
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct netdev_queue {int dummy; } ;
struct net_device {int dummy; } ;
struct Qdisc {int flags; } ;
typedef int spinlock_t ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (struct Qdisc*,int*,int*) ;
 struct net_device* FUNC_1 (struct Qdisc*) ;
 int * FUNC_2 (struct Qdisc*) ;
 int FUNC_3 (struct sk_buff*,struct Qdisc*,struct net_device*,struct netdev_queue*,int *,int) ;
 struct netdev_queue* FUNC_4 (struct net_device*,struct sk_buff*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static inline bool FUNC_6(struct Qdisc *VAR_1, int *VAR_2)
{
 spinlock_t *VAR_3 = ((void*)0);
 struct netdev_queue *VAR_4;
 struct net_device *VAR_5;
 struct sk_buff *VAR_6;
 bool VAR_7;


 VAR_6 = FUNC_0(VAR_1, &VAR_7, VAR_2);
 if (FUNC_5(!VAR_6))
  return 0;

 if (!(VAR_1->flags & VAR_0))
  VAR_3 = FUNC_2(VAR_1);

 VAR_5 = FUNC_1(VAR_1);
 VAR_4 = FUNC_4(VAR_5, VAR_6);

 return FUNC_3(VAR_6, VAR_1, VAR_5, VAR_4, VAR_3, VAR_7);
}
