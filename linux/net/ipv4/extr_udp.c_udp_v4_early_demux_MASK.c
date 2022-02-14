
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct udphdr {int source; int dest; } ;
struct sock {int sk_rx_dst; int sk_refcnt; } ;
struct sk_buff {scalar_t__ pkt_type; TYPE_1__* dev; int destructor; struct sock* sk; } ;
struct net {int dummy; } ;
struct iphdr {int tos; int saddr; int daddr; int protocol; } ;
struct in_device {int dummy; } ;
struct dst_entry {int dummy; } ;
struct TYPE_6__ {int inet_daddr; } ;
struct TYPE_5__ {int ifindex; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct dst_entry* FUNC_0 (int ) ;
 struct in_device* FUNC_1 (TYPE_1__*) ;
 struct sock* FUNC_2 (struct net*,int ,int ,int ,int ,int,int) ;
 struct sock* FUNC_3 (struct net*,int ,int ,int ,int ,int,int) ;
 struct net* FUNC_4 (TYPE_1__*) ;
 struct dst_entry* FUNC_5 (struct dst_entry*,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 TYPE_2__* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct in_device*,int ,int ,int ) ;
 struct iphdr* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,int ,int ,int ,TYPE_1__*,struct in_device*,int *) ;
 int FUNC_11 (struct sk_buff*,scalar_t__) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct sk_buff*,struct dst_entry*) ;
 scalar_t__ FUNC_14 (struct sk_buff*) ;
 int VAR_2 ;
 struct udphdr* FUNC_15 (struct sk_buff*) ;

int FUNC_16(struct sk_buff *VAR_3)
{
 struct net *VAR_4 = FUNC_4(VAR_3->dev);
 struct in_device *VAR_5 = ((void*)0);
 const struct iphdr *VAR_6;
 const struct udphdr *VAR_7;
 struct sock *VAR_8 = ((void*)0);
 struct dst_entry *VAR_9;
 int VAR_10 = VAR_3->dev->ifindex;
 int VAR_11 = FUNC_6(VAR_3);
 int VAR_12;


 if (!FUNC_11(VAR_3, FUNC_14(VAR_3) + sizeof(struct udphdr)))
  return 0;

 VAR_6 = FUNC_9(VAR_3);
 VAR_7 = FUNC_15(VAR_3);

 if (VAR_3->pkt_type == VAR_1) {
  VAR_5 = FUNC_1(VAR_3->dev);

  if (!VAR_5)
   return 0;

  VAR_12 = FUNC_8(VAR_5, VAR_6->daddr, VAR_6->saddr,
           VAR_6->protocol);
  if (!VAR_12)
   return 0;

  VAR_8 = FUNC_3(VAR_4, VAR_7->dest, VAR_6->daddr,
         VAR_7->source, VAR_6->saddr,
         VAR_10, VAR_11);
 } else if (VAR_3->pkt_type == VAR_0) {
  VAR_8 = FUNC_2(VAR_4, VAR_7->dest, VAR_6->daddr,
          VAR_7->source, VAR_6->saddr, VAR_10, VAR_11);
 }

 if (!VAR_8 || !FUNC_12(&VAR_8->sk_refcnt))
  return 0;

 VAR_3->sk = VAR_8;
 VAR_3->destructor = VAR_2;
 VAR_9 = FUNC_0(VAR_8->sk_rx_dst);

 if (VAR_9)
  VAR_9 = FUNC_5(VAR_9, 0);
 if (VAR_9) {
  u32 VAR_13 = 0;





  FUNC_13(VAR_3, VAR_9);




  if (!FUNC_7(VAR_8)->inet_daddr && VAR_5)
   return FUNC_10(VAR_3, VAR_6->daddr,
           VAR_6->saddr, VAR_6->tos,
           VAR_3->dev, VAR_5, &VAR_13);
 }
 return 0;
}
