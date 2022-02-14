
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_3__ {int tx_dropped; } ;
struct net_device {TYPE_1__ stats; int needed_headroom; } ;
struct TYPE_4__ {int o_flags; int iph; } ;
struct ip_tunnel {TYPE_2__ parms; scalar_t__ collect_md; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,struct net_device*,int *,int ) ;
 int FUNC_1 (struct sk_buff*,struct net_device*,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;
 struct ip_tunnel* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ) ;

__attribute__((used)) static netdev_tx_t FUNC_8(struct sk_buff *VAR_3,
    struct net_device *VAR_4)
{
 struct ip_tunnel *VAR_5 = FUNC_5(VAR_4);

 if (!FUNC_6(VAR_3))
  goto free_skb;

 if (VAR_5->collect_md) {
  FUNC_1(VAR_3, VAR_4, FUNC_3(VAR_0));
  return VAR_1;
 }

 if (FUNC_2(VAR_3, !!(VAR_5->parms.o_flags & VAR_2)))
  goto free_skb;

 if (FUNC_7(VAR_3, VAR_4->needed_headroom))
  goto free_skb;

 FUNC_0(VAR_3, VAR_4, &VAR_5->parms.iph, FUNC_3(VAR_0));
 return VAR_1;

free_skb:
 FUNC_4(VAR_3);
 VAR_4->stats.tx_dropped++;
 return VAR_1;
}
