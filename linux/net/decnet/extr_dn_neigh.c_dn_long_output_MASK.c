
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {scalar_t__ len; } ;
struct net_device {int hard_header_len; } ;
struct neighbour {struct net_device* dev; } ;
struct dn_skb_cb {int rt_flags; int hops; int src; int dst; } ;
struct dn_long_packet {int msgflg; int visit_ct; scalar_t__ pt; scalar_t__ s_class; scalar_t__ nl2; int s_id; scalar_t__ s_subarea; scalar_t__ s_area; int d_id; scalar_t__ d_subarea; scalar_t__ d_area; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct dn_skb_cb* FUNC_0 (struct sk_buff*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,int *,struct sock*,struct sk_buff*,int *,struct net_device*,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct sk_buff*) ;
 unsigned char* FUNC_9 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_12(struct neighbour *VAR_10, struct sock *VAR_11,
     struct sk_buff *VAR_12)
{
 struct net_device *VAR_13 = VAR_10->dev;
 int VAR_14 = VAR_13->hard_header_len + sizeof(struct dn_long_packet) + 3;
 unsigned char *VAR_15;
 struct dn_long_packet *VAR_16;
 struct dn_skb_cb *VAR_17 = FUNC_0(VAR_12);


 if (FUNC_8(VAR_12) < VAR_14) {
  struct sk_buff *VAR_18 = FUNC_10(VAR_12, VAR_14);
  if (VAR_18 == ((void*)0)) {
   FUNC_6("dn_long_output: no memory\n");
   FUNC_5(VAR_12);
   return -VAR_5;
  }
  FUNC_2(VAR_12);
  VAR_12 = VAR_18;
  FUNC_7("dn_long_output: Increasing headroom\n");
 }

 VAR_15 = FUNC_9(VAR_12, sizeof(struct dn_long_packet) + 3);
 VAR_16 = (struct dn_long_packet *)(VAR_15+3);

 *((__le16 *)VAR_15) = FUNC_3(VAR_12->len - 2);
 *(VAR_15 + 2) = 1 | VAR_1;

 VAR_16->msgflg = VAR_4|(VAR_17->rt_flags&(VAR_0|VAR_2|VAR_3));
 VAR_16->d_area = VAR_16->d_subarea = 0;
 FUNC_4(VAR_16->d_id, VAR_17->dst);
 VAR_16->s_area = VAR_16->s_subarea = 0;
 FUNC_4(VAR_16->s_id, VAR_17->src);
 VAR_16->nl2 = 0;
 VAR_16->visit_ct = VAR_17->hops & 0x3f;
 VAR_16->s_class = 0;
 VAR_16->pt = 0;

 FUNC_11(VAR_12);

 return FUNC_1(VAR_6, VAR_7,
         &VAR_9, VAR_11, VAR_12, ((void*)0), VAR_10->dev,
         VAR_8);
}
