
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct teql_master {unsigned int tx_bytes; int tx_dropped; int tx_errors; struct Qdisc* slaves; int tx_packets; } ;
struct sk_buff {int dummy; } ;
struct netdev_queue {struct Qdisc* qdisc_sleeping; } ;
struct net_device {int dummy; } ;
struct Qdisc {int dummy; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct Qdisc*) ;
 int FUNC_1 (struct netdev_queue*) ;
 int FUNC_2 (struct netdev_queue*) ;
 int FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 struct netdev_queue* FUNC_5 (struct net_device*,int) ;
 struct teql_master* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct sk_buff*,struct net_device*,struct netdev_queue*,int) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct netdev_queue*) ;
 scalar_t__ FUNC_12 (struct netdev_queue*) ;
 struct net_device* FUNC_13 (struct Qdisc*) ;
 unsigned int FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*,struct sk_buff*,struct net_device*,struct netdev_queue*) ;

__attribute__((used)) static netdev_tx_t FUNC_18(struct sk_buff *VAR_2, struct net_device *VAR_3)
{
 struct teql_master *VAR_4 = FUNC_6(VAR_3);
 struct Qdisc *VAR_5, *VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9 = FUNC_15(VAR_2);
 struct sk_buff *VAR_10 = ((void*)0);

 VAR_5 = VAR_4->slaves;

restart:
 VAR_8 = 0;
 VAR_7 = 0;

 VAR_6 = VAR_5;
 if (!VAR_6)
  goto drop;

 do {
  struct net_device *VAR_11 = FUNC_13(VAR_6);
  struct netdev_queue *VAR_12 = FUNC_5(VAR_11, 0);

  if (VAR_12->qdisc_sleeping != VAR_6)
   continue;
  if (FUNC_12(FUNC_5(VAR_11, VAR_9)) ||
      !FUNC_8(VAR_11)) {
   VAR_7 = 1;
   continue;
  }

  switch (FUNC_17(VAR_2, VAR_10, VAR_11, VAR_12)) {
  case 0:
   if (FUNC_1(VAR_12)) {
    unsigned int VAR_13 = FUNC_14(VAR_2);

    if (!FUNC_11(VAR_12) &&
        FUNC_7(VAR_2, VAR_11, VAR_12, 0) ==
        VAR_1) {
     FUNC_2(VAR_12);
     VAR_4->slaves = FUNC_0(VAR_6);
     FUNC_10(VAR_3);
     VAR_4->tx_packets++;
     VAR_4->tx_bytes += VAR_13;
     return VAR_1;
    }
    FUNC_2(VAR_12);
   }
   if (FUNC_12(FUNC_5(VAR_3, 0)))
    VAR_7 = 1;
   break;
  case 1:
   VAR_4->slaves = FUNC_0(VAR_6);
   return VAR_1;
  default:
   VAR_8 = 1;
   break;
  }
  FUNC_3(VAR_2, FUNC_16(VAR_2));
 } while ((VAR_6 = FUNC_0(VAR_6)) != VAR_5);

 if (VAR_8 && VAR_10 == ((void*)0)) {
  VAR_10 = VAR_2;
  goto restart;
 }

 if (VAR_7) {
  FUNC_9(VAR_3);
  return VAR_0;
 }
 VAR_4->tx_errors++;

drop:
 VAR_4->tx_dropped++;
 FUNC_4(VAR_2);
 return VAR_1;
}
