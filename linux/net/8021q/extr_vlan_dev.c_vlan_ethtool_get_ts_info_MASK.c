
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vlan_dev_priv {TYPE_2__* real_dev; } ;
struct phy_device {TYPE_1__* drv; } ;
struct net_device {int dummy; } ;
struct ethtool_ts_info {int so_timestamping; int phc_index; } ;
struct ethtool_ops {int (* get_ts_info ) (TYPE_2__*,struct ethtool_ts_info*) ;} ;
struct TYPE_4__ {struct phy_device* phydev; struct ethtool_ops* ethtool_ops; } ;
struct TYPE_3__ {int (* ts_info ) (struct phy_device*,struct ethtool_ts_info*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct phy_device*,struct ethtool_ts_info*) ;
 int FUNC_1 (TYPE_2__*,struct ethtool_ts_info*) ;
 struct vlan_dev_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2,
        struct ethtool_ts_info *VAR_3)
{
 const struct vlan_dev_priv *VAR_4 = FUNC_2(VAR_2);
 const struct ethtool_ops *VAR_5 = VAR_4->real_dev->ethtool_ops;
 struct phy_device *VAR_6 = VAR_4->real_dev->phydev;

 if (VAR_6 && VAR_6->drv && VAR_6->drv->ts_info) {
   return VAR_6->drv->ts_info(VAR_6, VAR_3);
 } else if (VAR_5->get_ts_info) {
  return VAR_5->get_ts_info(VAR_4->real_dev, VAR_3);
 } else {
  VAR_3->so_timestamping = VAR_0 |
   VAR_1;
  VAR_3->phc_index = -1;
 }

 return 0;
}
