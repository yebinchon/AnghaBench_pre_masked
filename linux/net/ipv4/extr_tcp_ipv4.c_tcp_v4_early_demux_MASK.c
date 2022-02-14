
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcphdr {int doff; int dest; int source; } ;
struct sock {int sk_rx_dst; } ;
struct sk_buff {scalar_t__ pkt_type; scalar_t__ skb_iif; int destructor; struct sock* sk; int dev; } ;
struct iphdr {int daddr; int saddr; } ;
struct dst_entry {int dummy; } ;
struct TYPE_2__ {scalar_t__ rx_dst_ifindex; } ;


 scalar_t__ VAR_0 ;
 struct dst_entry* FUNC_0 (int ) ;
 struct sock* FUNC_1 (int ,int *,int ,int ,int ,int ,scalar_t__,int ) ;
 int FUNC_2 (int ) ;
 struct dst_entry* FUNC_3 (struct dst_entry*,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 TYPE_1__* FUNC_5 (struct sock*) ;
 struct iphdr* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sk_buff*,struct dst_entry*) ;
 scalar_t__ FUNC_11 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct tcphdr* FUNC_12 (struct sk_buff*) ;

int FUNC_13(struct sk_buff *VAR_3)
{
 const struct iphdr *VAR_4;
 const struct tcphdr *VAR_5;
 struct sock *VAR_6;

 if (VAR_3->pkt_type != VAR_0)
  return 0;

 if (!FUNC_8(VAR_3, FUNC_11(VAR_3) + sizeof(struct tcphdr)))
  return 0;

 VAR_4 = FUNC_6(VAR_3);
 VAR_5 = FUNC_12(VAR_3);

 if (VAR_5->doff < sizeof(struct tcphdr) / 4)
  return 0;

 VAR_6 = FUNC_1(FUNC_2(VAR_3->dev), &VAR_2,
           VAR_4->saddr, VAR_5->source,
           VAR_4->daddr, FUNC_7(VAR_5->dest),
           VAR_3->skb_iif, FUNC_4(VAR_3));
 if (VAR_6) {
  VAR_3->sk = VAR_6;
  VAR_3->destructor = VAR_1;
  if (FUNC_9(VAR_6)) {
   struct dst_entry *VAR_7 = FUNC_0(VAR_6->sk_rx_dst);

   if (VAR_7)
    VAR_7 = FUNC_3(VAR_7, 0);
   if (VAR_7 &&
       FUNC_5(VAR_6)->rx_dst_ifindex == VAR_3->skb_iif)
    FUNC_10(VAR_3, VAR_7);
  }
 }
 return 0;
}
