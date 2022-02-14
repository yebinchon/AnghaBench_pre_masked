
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct vlan_pcpu_stats {unsigned int tx_bytes; int syncp; int tx_packets; } ;
struct vlan_ethhdr {scalar_t__ h_vlan_proto; } ;
struct vlan_dev_priv {scalar_t__ vlan_proto; int flags; TYPE_1__* vlan_pcpu_stats; int real_dev; int vlan_id; } ;
struct sk_buff {unsigned int len; int dev; int priority; scalar_t__ data; } ;
struct net_device {int dummy; } ;
typedef int netdev_tx_t ;
struct TYPE_2__ {int tx_dropped; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,scalar_t__,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 struct vlan_pcpu_stats* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct net_device*,int ) ;
 struct vlan_dev_priv* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct vlan_dev_priv*,struct sk_buff*) ;

__attribute__((used)) static netdev_tx_t FUNC_12(struct sk_buff *VAR_3,
         struct net_device *VAR_4)
{
 struct vlan_dev_priv *VAR_5 = FUNC_10(VAR_4);
 struct vlan_ethhdr *VAR_6 = (struct vlan_ethhdr *)(VAR_3->data);
 unsigned int VAR_7;
 int VAR_8;






 if (VAR_6->h_vlan_proto != VAR_5->vlan_proto ||
     VAR_5->flags & VAR_2) {
  u16 VAR_9;
  VAR_9 = VAR_5->vlan_id;
  VAR_9 |= FUNC_9(VAR_4, VAR_3->priority);
  FUNC_0(VAR_3, VAR_5->vlan_proto, VAR_9);
 }

 VAR_3->dev = VAR_5->real_dev;
 VAR_7 = VAR_3->len;
 if (FUNC_8(FUNC_3(VAR_4)))
  return FUNC_11(VAR_5, VAR_3);

 VAR_8 = FUNC_1(VAR_3);

 if (FUNC_2(VAR_8 == VAR_1 || VAR_8 == VAR_0)) {
  struct vlan_pcpu_stats *VAR_10;

  VAR_10 = FUNC_5(VAR_5->vlan_pcpu_stats);
  FUNC_6(&VAR_10->syncp);
  VAR_10->tx_packets++;
  VAR_10->tx_bytes += VAR_7;
  FUNC_7(&VAR_10->syncp);
 } else {
  FUNC_4(VAR_5->vlan_pcpu_stats->tx_dropped);
 }

 return VAR_8;
}
