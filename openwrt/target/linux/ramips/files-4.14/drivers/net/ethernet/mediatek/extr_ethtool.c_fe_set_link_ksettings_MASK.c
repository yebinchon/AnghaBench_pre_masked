
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int phydev; } ;
struct fe_priv {int phy_flags; scalar_t__ mii_bus; TYPE_4__* phy_dev; TYPE_2__* phy; } ;
struct TYPE_7__ {size_t phy_address; } ;
struct ethtool_link_ksettings {TYPE_3__ base; } ;
struct TYPE_5__ {size_t addr; } ;
struct TYPE_8__ {TYPE_1__ mdio; } ;
struct TYPE_6__ {TYPE_4__** phy; scalar_t__* phy_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_0 (scalar_t__,size_t) ;
 struct fe_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,struct ethtool_link_ksettings const*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3,
      const struct ethtool_link_ksettings *VAR_4)
{
 struct fe_priv *VAR_5 = FUNC_1(VAR_3);

 if (!VAR_5->phy_dev)
  goto out_sset;

 if (VAR_4->base.phy_address != VAR_5->phy_dev->mdio.addr) {
  if (VAR_5->phy->phy_node[VAR_4->base.phy_address]) {
   VAR_5->phy_dev = VAR_5->phy->phy[VAR_4->base.phy_address];
   VAR_5->phy_flags = VAR_2;
  } else if (VAR_5->mii_bus && FUNC_0(VAR_5->mii_bus, VAR_4->base.phy_address)) {
   VAR_5->phy_dev = FUNC_0(VAR_5->mii_bus, VAR_4->base.phy_address);
   VAR_5->phy_flags = VAR_1;
  } else {
   goto out_sset;
  }
 }

 return FUNC_2(VAR_3->phydev, VAR_4);

out_sset:
 return -VAR_0;
}
