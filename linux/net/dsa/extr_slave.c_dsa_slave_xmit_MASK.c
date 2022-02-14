
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct pcpu_sw_netstats {int syncp; int tx_bytes; int tx_packets; } ;
struct net_device {int dummy; } ;
struct dsa_slave_priv {struct sk_buff* (* xmit ) (struct sk_buff*,struct net_device*) ;int stats64; } ;
typedef int netdev_tx_t ;
struct TYPE_2__ {int deferred_xmit; int * clone; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 int FUNC_2 (struct dsa_slave_priv*,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 struct dsa_slave_priv* FUNC_4 (struct net_device*) ;
 struct sk_buff* FUNC_5 (struct sk_buff*,struct net_device*) ;
 struct pcpu_sw_netstats* FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static netdev_tx_t FUNC_9(struct sk_buff *VAR_1, struct net_device *VAR_2)
{
 struct dsa_slave_priv *VAR_3 = FUNC_4(VAR_2);
 struct pcpu_sw_netstats *VAR_4;
 struct sk_buff *VAR_5;

 VAR_4 = FUNC_6(VAR_3->stats64);
 FUNC_7(&VAR_4->syncp);
 VAR_4->tx_packets++;
 VAR_4->tx_bytes += VAR_1->len;
 FUNC_8(&VAR_4->syncp);

 FUNC_0(VAR_1)->deferred_xmit = 0;
 FUNC_0(VAR_1)->clone = ((void*)0);




 FUNC_2(VAR_3, VAR_1);




 VAR_5 = VAR_3->xmit(VAR_1, VAR_2);
 if (!VAR_5) {
  if (!FUNC_0(VAR_1)->deferred_xmit)
   FUNC_3(VAR_1);
  return VAR_0;
 }

 return FUNC_1(VAR_5, VAR_2);
}
