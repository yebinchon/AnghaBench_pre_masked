
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; scalar_t__ protocol; int sk; struct net_device* dev; } ;
struct TYPE_4__ {int tx_errors; int collisions; int tx_carrier_errors; } ;
struct net_device {TYPE_2__ stats; } ;
struct TYPE_3__ {int saddr; int daddr; } ;
struct ip_tunnel_parm {TYPE_1__ iph; } ;
struct ip_tunnel {int net; struct ip_tunnel_parm parms; } ;
struct flowi {int dummy; } ;
struct dst_entry {struct net_device* dev; int xfrm; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct dst_entry*) ;
 int VAR_5 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct dst_entry*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct dst_entry*) ;
 int FUNC_5 (int ,int ,struct sk_buff*) ;
 int FUNC_6 (struct dst_entry*) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_10 (struct sk_buff*,int ,int ,int) ;
 int FUNC_11 (struct net_device*,int) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (int ,int ) ;
 scalar_t__ FUNC_14 (int) ;
 struct ip_tunnel* FUNC_15 (struct net_device*) ;
 struct dst_entry* FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*,struct dst_entry*) ;
 int FUNC_18 (struct sk_buff*,int) ;
 int FUNC_19 (struct sk_buff*,int) ;
 int FUNC_20 (int ,int ,int ) ;
 struct dst_entry* FUNC_21 (int ,struct dst_entry*,struct flowi*,int *,int ) ;

__attribute__((used)) static netdev_tx_t FUNC_22(struct sk_buff *VAR_6, struct net_device *VAR_7,
       struct flowi *VAR_8)
{
 struct ip_tunnel *VAR_9 = FUNC_15(VAR_7);
 struct ip_tunnel_parm *VAR_10 = &VAR_9->parms;
 struct dst_entry *VAR_11 = FUNC_16(VAR_6);
 struct net_device *VAR_12;
 int VAR_13 = VAR_6->len;
 int VAR_14;
 int VAR_15;

 if (!VAR_11) {
  VAR_7->stats.tx_carrier_errors++;
  goto tx_error_icmp;
 }

 FUNC_2(VAR_11);
 VAR_11 = FUNC_21(VAR_9->net, VAR_11, VAR_8, ((void*)0), 0);
 if (FUNC_0(VAR_11)) {
  VAR_7->stats.tx_carrier_errors++;
  goto tx_error_icmp;
 }

 if (!FUNC_20(VAR_11->xfrm, VAR_10->iph.daddr, VAR_10->iph.saddr)) {
  VAR_7->stats.tx_carrier_errors++;
  FUNC_6(VAR_11);
  goto tx_error_icmp;
 }

 VAR_12 = VAR_11->dev;

 if (VAR_12 == VAR_7) {
  FUNC_6(VAR_11);
  VAR_7->stats.collisions++;
  goto tx_error;
 }

 VAR_15 = FUNC_4(VAR_11);
 if (VAR_6->len > VAR_15) {
  FUNC_18(VAR_6, VAR_15);
  if (VAR_6->protocol == FUNC_8(VAR_0)) {
   FUNC_9(VAR_6, VAR_2, VAR_3,
      FUNC_7(VAR_15));
  } else {
   if (VAR_15 < VAR_4)
    VAR_15 = VAR_4;

   FUNC_10(VAR_6, VAR_1, 0, VAR_15);
  }

  FUNC_6(VAR_11);
  goto tx_error;
 }

 FUNC_19(VAR_6, !FUNC_13(VAR_9->net, FUNC_1(VAR_7)));
 FUNC_17(VAR_6, VAR_11);
 VAR_6->dev = FUNC_16(VAR_6)->dev;

 VAR_14 = FUNC_5(VAR_9->net, VAR_6->sk, VAR_6);
 if (FUNC_14(VAR_14) == 0)
  VAR_14 = VAR_13;
 FUNC_11(VAR_7, VAR_14);
 return VAR_5;

tx_error_icmp:
 FUNC_3(VAR_6);
tx_error:
 VAR_7->stats.tx_errors++;
 FUNC_12(VAR_6);
 return VAR_5;
}
