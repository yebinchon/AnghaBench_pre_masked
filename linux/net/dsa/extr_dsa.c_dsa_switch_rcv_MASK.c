
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ len; int dev; int protocol; int pkt_type; } ;
struct pcpu_sw_netstats {int syncp; int rx_bytes; int rx_packets; } ;
struct packet_type {int dummy; } ;
struct net_device {struct dsa_port* dsa_ptr; } ;
struct dsa_slave_priv {int stats64; } ;
struct dsa_port {struct sk_buff* (* rcv ) (struct sk_buff*,struct net_device*,struct packet_type*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct dsa_slave_priv*,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 struct dsa_slave_priv* FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_6 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_7 (struct sk_buff*,struct net_device*,struct packet_type*) ;
 struct pcpu_sw_netstats* FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_3, struct net_device *VAR_4,
     struct packet_type *VAR_5, struct net_device *VAR_6)
{
 struct dsa_port *VAR_7 = VAR_4->dsa_ptr;
 struct sk_buff *VAR_8 = ((void*)0);
 struct pcpu_sw_netstats *VAR_9;
 struct dsa_slave_priv *VAR_10;

 if (FUNC_11(!VAR_7)) {
  FUNC_2(VAR_3);
  return 0;
 }

 VAR_3 = FUNC_6(VAR_3, VAR_1);
 if (!VAR_3)
  return 0;

 VAR_8 = VAR_7->rcv(VAR_3, VAR_4, VAR_5);
 if (!VAR_8) {
  FUNC_2(VAR_3);
  return 0;
 }

 VAR_3 = VAR_8;
 VAR_10 = FUNC_3(VAR_3->dev);
 FUNC_5(VAR_3, VAR_0);
 VAR_3->pkt_type = VAR_2;
 VAR_3->protocol = FUNC_1(VAR_3, VAR_3->dev);

 VAR_9 = FUNC_8(VAR_10->stats64);
 FUNC_9(&VAR_9->syncp);
 VAR_9->rx_packets++;
 VAR_9->rx_bytes += VAR_3->len;
 FUNC_10(&VAR_9->syncp);

 if (FUNC_0(VAR_10, VAR_3))
  return 0;

 FUNC_4(VAR_3);

 return 0;
}
