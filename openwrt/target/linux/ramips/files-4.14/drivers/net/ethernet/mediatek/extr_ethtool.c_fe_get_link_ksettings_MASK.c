
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int phydev; } ;
struct fe_priv {scalar_t__ phy_flags; int phy_dev; } ;
struct ethtool_link_ksettings {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct fe_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,struct ethtool_link_ksettings*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2,
      struct ethtool_link_ksettings *VAR_3)
{
 struct fe_priv *VAR_4 = FUNC_0(VAR_2);

 if (!VAR_4->phy_dev)
  return -VAR_0;

 if (VAR_4->phy_flags == VAR_1) {
  if (FUNC_2(VAR_4->phy_dev))
   return -VAR_0;
 }

 FUNC_1(VAR_2->phydev, VAR_3);

 return 0;
}
