
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {struct net_device* dev; int pkt_type; } ;
struct TYPE_6__ {struct net_device* dev; } ;
struct rtable {TYPE_1__ dst; } ;
struct nf_bridge_info {int pkt_otherhost; struct net_device* physindev; scalar_t__ in_prerouting; int frag_max_size; } ;
struct net_device {int dev_addr; } ;
struct net {int dummy; } ;
struct iphdr {int tos; int daddr; int saddr; } ;
struct in_device {int dummy; } ;
struct TYPE_9__ {int frag_max_size; } ;
struct TYPE_8__ {int h_dest; } ;
struct TYPE_7__ {struct net_device* dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct in_device*) ;
 TYPE_5__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct rtable*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 struct in_device* FUNC_4 (struct net_device*) ;
 int VAR_4 ;
 int FUNC_5 (int ,struct net*,struct sock*,struct sk_buff*,struct net_device*,int *,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,struct nf_bridge_info*) ;
 int VAR_5 ;
 struct rtable* FUNC_7 (struct net_device*) ;
 TYPE_4__* FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (int ,int ) ;
 struct iphdr* FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*,int ,int ,int ,struct net_device*) ;
 struct rtable* FUNC_12 (struct net*,int ,int ,int ,int ) ;
 int FUNC_13 (struct rtable*) ;
 int FUNC_14 (struct sk_buff*) ;
 struct nf_bridge_info* FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*) ;
 TYPE_3__* FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct sk_buff*,TYPE_1__*) ;
 int FUNC_20 (struct sk_buff*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_21(struct net *VAR_6, struct sock *VAR_7, struct sk_buff *VAR_8)
{
 struct net_device *VAR_9 = VAR_8->dev;
 struct iphdr *VAR_10 = FUNC_10(VAR_8);
 struct nf_bridge_info *VAR_11 = FUNC_15(VAR_8);
 struct rtable *VAR_12;
 int VAR_13;

 VAR_11->frag_max_size = FUNC_1(VAR_8)->frag_max_size;

 if (VAR_11->pkt_otherhost) {
  VAR_8->pkt_type = VAR_3;
  VAR_11->pkt_otherhost = 0;
 }
 VAR_11->in_prerouting = 0;
 if (FUNC_6(VAR_8, VAR_11)) {
  if ((VAR_13 = FUNC_11(VAR_8, VAR_10->daddr, VAR_10->saddr, VAR_10->tos, VAR_9))) {
   struct in_device *VAR_14 = FUNC_4(VAR_9);
   if (VAR_13 != -VAR_0 || !VAR_14 || FUNC_0(VAR_14))
    goto free_skb;

   VAR_12 = FUNC_12(VAR_6, VAR_10->daddr, 0,
          FUNC_3(VAR_10->tos), 0);
   if (!FUNC_2(VAR_12)) {


    if (VAR_12->dst.dev == VAR_9) {
     FUNC_19(VAR_8, &VAR_12->dst);
     goto bridged_dnat;
    }
    FUNC_13(VAR_12);
   }
free_skb:
   FUNC_14(VAR_8);
   return 0;
  } else {
   if (FUNC_18(VAR_8)->dev == VAR_9) {
bridged_dnat:
    VAR_8->dev = VAR_11->physindev;
    FUNC_17(VAR_8);
    FUNC_16(VAR_8);
    FUNC_5(VAR_1,
        VAR_6, VAR_7, VAR_8, VAR_8->dev,
        ((void*)0),
        VAR_5);
    return 0;
   }
   FUNC_9(FUNC_8(VAR_8)->h_dest, VAR_9->dev_addr);
   VAR_8->pkt_type = VAR_2;
  }
 } else {
  VAR_12 = FUNC_7(VAR_11->physindev);
  if (!VAR_12) {
   FUNC_14(VAR_8);
   return 0;
  }
  FUNC_20(VAR_8, &VAR_12->dst);
 }

 VAR_8->dev = VAR_11->physindev;
 FUNC_17(VAR_8);
 FUNC_16(VAR_8);
 FUNC_5(VAR_1, VAR_6, VAR_7, VAR_8, VAR_8->dev, ((void*)0),
     VAR_4);
 return 0;
}
