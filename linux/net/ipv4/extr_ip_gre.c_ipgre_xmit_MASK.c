
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int protocol; scalar_t__ data; } ;
struct TYPE_4__ {int tx_dropped; } ;
struct net_device {TYPE_2__ stats; scalar_t__ needed_headroom; scalar_t__ header_ops; } ;
struct iphdr {int dummy; } ;
struct TYPE_3__ {int o_flags; struct iphdr iph; } ;
struct ip_tunnel {TYPE_1__ parms; scalar_t__ hlen; scalar_t__ collect_md; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,struct net_device*,struct iphdr const*,int ) ;
 int FUNC_1 (struct sk_buff*,struct net_device*,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct sk_buff*) ;
 struct ip_tunnel* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sk_buff*,scalar_t__) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;
 int FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static netdev_tx_t FUNC_9(struct sk_buff *VAR_2,
         struct net_device *VAR_3)
{
 struct ip_tunnel *VAR_4 = FUNC_4(VAR_3);
 const struct iphdr *VAR_5;

 if (!FUNC_5(VAR_2))
  goto free_skb;

 if (VAR_4->collect_md) {
  FUNC_1(VAR_2, VAR_3, VAR_2->protocol);
  return VAR_0;
 }

 if (VAR_3->header_ops) {

  if (FUNC_6(VAR_2, VAR_3->needed_headroom -
          (VAR_4->hlen + sizeof(struct iphdr))))
   goto free_skb;

  VAR_5 = (const struct iphdr *)VAR_2->data;




  FUNC_7(VAR_2, VAR_4->hlen + sizeof(struct iphdr));
  FUNC_8(VAR_2);
 } else {
  if (FUNC_6(VAR_2, VAR_3->needed_headroom))
   goto free_skb;

  VAR_5 = &VAR_4->parms.iph;
 }

 if (FUNC_2(VAR_2, !!(VAR_4->parms.o_flags & VAR_1)))
  goto free_skb;

 FUNC_0(VAR_2, VAR_3, VAR_5, VAR_2->protocol);
 return VAR_0;

free_skb:
 FUNC_3(VAR_2);
 VAR_3->stats.tx_dropped++;
 return VAR_0;
}
