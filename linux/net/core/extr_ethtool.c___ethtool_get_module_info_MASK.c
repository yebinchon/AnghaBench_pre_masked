
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_device {TYPE_1__* drv; } ;
struct net_device {scalar_t__ sfp_bus; struct phy_device* phydev; struct ethtool_ops* ethtool_ops; } ;
struct ethtool_ops {int (* get_module_info ) (struct net_device*,struct ethtool_modinfo*) ;} ;
struct ethtool_modinfo {int dummy; } ;
struct TYPE_2__ {int (* module_info ) (struct phy_device*,struct ethtool_modinfo*) ;} ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,struct ethtool_modinfo*) ;
 int FUNC_1 (struct phy_device*,struct ethtool_modinfo*) ;
 int FUNC_2 (struct net_device*,struct ethtool_modinfo*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1,
         struct ethtool_modinfo *VAR_2)
{
 const struct ethtool_ops *VAR_3 = VAR_1->ethtool_ops;
 struct phy_device *VAR_4 = VAR_1->phydev;

 if (VAR_1->sfp_bus)
  return FUNC_0(VAR_1->sfp_bus, VAR_2);

 if (VAR_4 && VAR_4->drv && VAR_4->drv->module_info)
  return VAR_4->drv->module_info(VAR_4, VAR_2);

 if (VAR_3->get_module_info)
  return VAR_3->get_module_info(VAR_1, VAR_2);

 return -VAR_0;
}
