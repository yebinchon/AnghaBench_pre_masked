
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct station_info {int filled; int expected_throughput; } ;
struct net_device {int dummy; } ;
struct TYPE_5__ {scalar_t__ autoneg; scalar_t__ duplex; int speed; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;
struct batadv_hardif_neigh_node {int addr; struct batadv_hard_iface* if_incoming; } ;
struct TYPE_6__ {int flags; int throughput_override; } ;
struct batadv_hard_iface {TYPE_2__ bat_v; TYPE_3__* net_dev; int soft_iface; } ;
typedef int link_settings ;
struct TYPE_7__ {int name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_3__*,struct ethtool_link_ksettings*) ;
 int FUNC_2 (int *) ;
 struct net_device* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,char*,int ,int,int) ;
 int FUNC_5 (struct batadv_hard_iface*) ;
 scalar_t__ FUNC_6 (struct batadv_hard_iface*) ;
 int FUNC_7 (struct net_device*,int ,struct station_info*) ;
 int FUNC_8 (struct station_info*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct ethtool_link_ksettings*,int ,int) ;
 int FUNC_11 () ;
 int FUNC_12 () ;

__attribute__((used)) static u32 FUNC_13(struct batadv_hardif_neigh_node *VAR_8)
{
 struct batadv_hard_iface *VAR_9 = VAR_8->if_incoming;
 struct ethtool_link_ksettings VAR_10;
 struct net_device *VAR_11;
 struct station_info VAR_12;
 u32 VAR_13;
 int VAR_14;




 VAR_13 = FUNC_2(&VAR_9->bat_v.throughput_override);
 if (VAR_13 != 0)
  return VAR_13;




 if (FUNC_6(VAR_9)) {
  if (!FUNC_5(VAR_9))

   goto default_throughput;

  VAR_11 = FUNC_3(VAR_9->net_dev);
  if (!VAR_11)
   goto default_throughput;

  VAR_14 = FUNC_7(VAR_11, VAR_8->addr, &VAR_12);

  if (!VAR_14) {

   FUNC_8(&VAR_12);
  }

  FUNC_9(VAR_11);
  if (VAR_14 == -VAR_5) {




   return 0;
  }
  if (VAR_14)
   goto default_throughput;
  if (!(VAR_12.filled & FUNC_0(VAR_6)))
   goto default_throughput;

  return VAR_12.expected_throughput / 100;
 }




 FUNC_10(&VAR_10, 0, sizeof(VAR_10));
 FUNC_11();
 VAR_14 = FUNC_1(VAR_9->net_dev, &VAR_10);
 FUNC_12();
 if (VAR_14 == 0 && VAR_10.base.autoneg == VAR_0) {

  if (VAR_10.base.duplex == VAR_4)
   VAR_9->bat_v.flags |= VAR_1;
  else
   VAR_9->bat_v.flags &= ~VAR_1;

  VAR_13 = VAR_10.base.speed;
  if (VAR_13 && VAR_13 != VAR_7)
   return VAR_13 * 10;
 }

default_throughput:
 if (!(VAR_9->bat_v.flags & VAR_3)) {
  FUNC_4(VAR_9->soft_iface,
       "WiFi driver or ethtool info does not provide information about link speeds on interface %s, therefore defaulting to hardcoded throughput values of %u.%1u Mbps. Consider overriding the throughput manually or checking your driver.\n",
       VAR_9->net_dev->name,
       VAR_2 / 10,
       VAR_2 % 10);
  VAR_9->bat_v.flags |= VAR_3;
 }


 return VAR_2;
}
