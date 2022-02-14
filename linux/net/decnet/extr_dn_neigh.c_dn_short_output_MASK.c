
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {scalar_t__ len; } ;
struct net_device {int hard_header_len; } ;
struct neighbour {struct net_device* dev; } ;
struct dn_skb_cb {int rt_flags; int hops; int src; int dst; } ;
struct dn_short_packet {int msgflg; int forward; int srcnode; int dstnode; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dn_skb_cb* FUNC_0 (struct sk_buff*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int *,struct sock*,struct sk_buff*,int *,struct net_device*,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct sk_buff*) ;
 unsigned char* FUNC_8 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_11(struct neighbour *VAR_8, struct sock *VAR_9,
      struct sk_buff *VAR_10)
{
 struct net_device *VAR_11 = VAR_8->dev;
 int VAR_12 = VAR_11->hard_header_len + sizeof(struct dn_short_packet) + 2;
 struct dn_short_packet *VAR_13;
 unsigned char *VAR_14;
 struct dn_skb_cb *VAR_15 = FUNC_0(VAR_10);


 if (FUNC_7(VAR_10) < VAR_12) {
  struct sk_buff *VAR_16 = FUNC_9(VAR_10, VAR_12);
  if (VAR_16 == ((void*)0)) {
   FUNC_5("dn_short_output: no memory\n");
   FUNC_4(VAR_10);
   return -VAR_3;
  }
  FUNC_2(VAR_10);
  VAR_10 = VAR_16;
  FUNC_6("dn_short_output: Increasing headroom\n");
 }

 VAR_14 = FUNC_8(VAR_10, sizeof(struct dn_short_packet) + 2);
 *((__le16 *)VAR_14) = FUNC_3(VAR_10->len - 2);
 VAR_13 = (struct dn_short_packet *)(VAR_14+2);

 VAR_13->msgflg = VAR_2|(VAR_15->rt_flags&(VAR_0|VAR_1));
 VAR_13->dstnode = VAR_15->dst;
 VAR_13->srcnode = VAR_15->src;
 VAR_13->forward = VAR_15->hops & 0x3f;

 FUNC_10(VAR_10);

 return FUNC_1(VAR_4, VAR_5,
         &VAR_7, VAR_9, VAR_10, ((void*)0), VAR_8->dev,
         VAR_6);
}
