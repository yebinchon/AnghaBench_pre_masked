
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ pkt_type; scalar_t__ len; } ;
struct TYPE_2__ {int multicast; int rx_bytes; int rx_packets; int rx_dropped; } ;
struct net_device {TYPE_1__ stats; } ;
struct hsr_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct hsr_node*,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_3(struct sk_buff *VAR_3, struct net_device *VAR_4,
          struct hsr_node *VAR_5)
{
 bool VAR_6;
 int VAR_7;

 VAR_6 = (VAR_3->pkt_type == VAR_2);
 FUNC_0(VAR_5, VAR_3);
 FUNC_2(VAR_3, VAR_0);
 VAR_7 = FUNC_1(VAR_3);
 if (VAR_7 == VAR_1) {
  VAR_4->stats.rx_dropped++;
 } else {
  VAR_4->stats.rx_packets++;
  VAR_4->stats.rx_bytes += VAR_3->len;
  if (VAR_6)
   VAR_4->stats.multicast++;
 }
}
