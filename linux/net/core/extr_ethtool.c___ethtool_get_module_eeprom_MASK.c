
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct phy_device {TYPE_1__* drv; } ;
struct net_device {scalar_t__ sfp_bus; struct phy_device* phydev; struct ethtool_ops* ethtool_ops; } ;
struct ethtool_ops {int (* get_module_eeprom ) (struct net_device*,struct ethtool_eeprom*,int *) ;} ;
struct ethtool_eeprom {int dummy; } ;
struct TYPE_2__ {int (* module_eeprom ) (struct phy_device*,struct ethtool_eeprom*,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,struct ethtool_eeprom*,int *) ;
 int FUNC_1 (struct phy_device*,struct ethtool_eeprom*,int *) ;
 int FUNC_2 (struct net_device*,struct ethtool_eeprom*,int *) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1,
           struct ethtool_eeprom *VAR_2, u8 *VAR_3)
{
 const struct ethtool_ops *VAR_4 = VAR_1->ethtool_ops;
 struct phy_device *VAR_5 = VAR_1->phydev;

 if (VAR_1->sfp_bus)
  return FUNC_0(VAR_1->sfp_bus, VAR_2, VAR_3);

 if (VAR_5 && VAR_5->drv && VAR_5->drv->module_eeprom)
  return VAR_5->drv->module_eeprom(VAR_5, VAR_2, VAR_3);

 if (VAR_4->get_module_eeprom)
  return VAR_4->get_module_eeprom(VAR_1, VAR_2, VAR_3);

 return -VAR_0;
}
