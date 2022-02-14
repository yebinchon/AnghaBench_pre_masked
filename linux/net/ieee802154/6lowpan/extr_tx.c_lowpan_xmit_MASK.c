
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ len; int dev; } ;
struct TYPE_3__ {int tx_bytes; int tx_packets; } ;
struct net_device {scalar_t__ needed_headroom; scalar_t__ needed_tailroom; TYPE_1__ stats; } ;
struct ieee802154_hdr {int dummy; } ;
typedef scalar_t__ netdev_tx_t ;
struct TYPE_4__ {int wdev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,struct ieee802154_hdr*) ;
 int FUNC_4 (struct ieee802154_hdr*) ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 TYPE_2__* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct sk_buff*,struct net_device*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_9 (struct sk_buff*,struct net_device*,struct ieee802154_hdr*,scalar_t__,scalar_t__) ;
 int FUNC_10 (char*) ;
 struct sk_buff* FUNC_11 (struct sk_buff*,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct sk_buff*) ;
 scalar_t__ FUNC_15 (struct sk_buff*) ;
 struct sk_buff* FUNC_16 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_17 (int) ;

netdev_tx_t FUNC_18(struct sk_buff *VAR_3, struct net_device *VAR_4)
{
 struct ieee802154_hdr VAR_5;
 int VAR_6, VAR_7;
 u16 VAR_8, VAR_9;

 FUNC_10("package xmit\n");

 FUNC_0(VAR_3->len > VAR_1);




 if (FUNC_17(FUNC_12(VAR_3) < VAR_4->needed_headroom ||
       FUNC_15(VAR_3) < VAR_4->needed_tailroom)) {
  struct sk_buff *VAR_10;

  VAR_10 = FUNC_11(VAR_3, VAR_4->needed_headroom,
           VAR_4->needed_tailroom, VAR_0);
  if (FUNC_6(VAR_10)) {
   FUNC_1(VAR_3);
   VAR_3 = VAR_10;
  } else {
   FUNC_5(VAR_3);
   return VAR_2;
  }
 } else {
  VAR_3 = FUNC_16(VAR_3, VAR_0);
  if (!VAR_3)
   return VAR_2;
 }

 VAR_7 = FUNC_8(VAR_3, VAR_4, &VAR_8, &VAR_9);
 if (VAR_7 < 0) {
  FUNC_5(VAR_3);
  return VAR_2;
 }

 if (FUNC_3(VAR_3, &VAR_5) < 0) {
  FUNC_5(VAR_3);
  return VAR_2;
 }

 VAR_6 = FUNC_4(&VAR_5);

 if (FUNC_14(VAR_3) - FUNC_13(VAR_3) <= VAR_6) {
  VAR_3->dev = FUNC_7(VAR_4)->wdev;
  VAR_4->stats.tx_packets++;
  VAR_4->stats.tx_bytes += VAR_8;
  return FUNC_2(VAR_3);
 } else {
  netdev_tx_t VAR_11;

  FUNC_10("frame is too big, fragmentation is needed\n");
  VAR_11 = FUNC_9(VAR_3, VAR_4, &VAR_5, VAR_8,
         VAR_9);

  return VAR_11 < 0 ? VAR_2 : VAR_11;
 }
}
