
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; int protocol; int pkt_type; struct net_device* dev; } ;
struct pcpu_sw_netstats {int syncp; int rx_bytes; int rx_packets; } ;
struct TYPE_2__ {int rx_dropped; } ;
struct net_device {int flags; int tstats; TYPE_1__ stats; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int ,int ) ;
 struct pcpu_sw_netstats* FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static netdev_tx_t FUNC_12(struct sk_buff *VAR_4)
{
 struct net_device *VAR_5 = VAR_4->dev;
 struct pcpu_sw_netstats *VAR_6;

 if (FUNC_11(!(VAR_5->flags & VAR_1))) {
  FUNC_2(VAR_4);
  VAR_5->stats.rx_dropped++;
  return VAR_2;
 }

 FUNC_6(VAR_4);
 FUNC_4(VAR_4);
 FUNC_5(VAR_4);

 VAR_4->pkt_type = VAR_3;
 VAR_4->protocol = FUNC_1(VAR_4, VAR_5);
 FUNC_7(VAR_4, FUNC_0(VAR_4), VAR_0);

 VAR_6 = FUNC_8(VAR_5->tstats);
 FUNC_9(&VAR_6->syncp);
 VAR_6->rx_packets++;
 VAR_6->rx_bytes += VAR_4->len;
 FUNC_10(&VAR_6->syncp);

 FUNC_3(VAR_4);
 return VAR_2;
}
