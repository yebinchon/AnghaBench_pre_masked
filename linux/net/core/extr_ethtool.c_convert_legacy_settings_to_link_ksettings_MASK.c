
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int eth_tp_mdix_ctrl; int eth_tp_mdix; int mdio_support; int autoneg; int phy_address; int port; int duplex; int speed; } ;
struct TYPE_3__ {int lp_advertising; int advertising; int supported; } ;
struct ethtool_link_ksettings {TYPE_2__ base; TYPE_1__ link_modes; } ;
struct ethtool_cmd {int eth_tp_mdix_ctrl; int eth_tp_mdix; int mdio_support; int autoneg; int phy_address; int port; int duplex; int lp_advertising; int advertising; int supported; scalar_t__ maxrxpkt; scalar_t__ maxtxpkt; } ;


 int FUNC_0 (struct ethtool_cmd const*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ethtool_link_ksettings*,int ,int) ;

__attribute__((used)) static bool
FUNC_3(
 struct ethtool_link_ksettings *VAR_0,
 const struct ethtool_cmd *VAR_1)
{
 bool VAR_2 = 1;

 FUNC_2(VAR_0, 0, sizeof(*VAR_0));





 if (VAR_1->maxtxpkt ||
     VAR_1->maxrxpkt)
  VAR_2 = 0;

 FUNC_1(
  VAR_0->link_modes.supported,
  VAR_1->supported);
 FUNC_1(
  VAR_0->link_modes.advertising,
  VAR_1->advertising);
 FUNC_1(
  VAR_0->link_modes.lp_advertising,
  VAR_1->lp_advertising);
 VAR_0->base.speed
  = FUNC_0(VAR_1);
 VAR_0->base.duplex
  = VAR_1->duplex;
 VAR_0->base.port
  = VAR_1->port;
 VAR_0->base.phy_address
  = VAR_1->phy_address;
 VAR_0->base.autoneg
  = VAR_1->autoneg;
 VAR_0->base.mdio_support
  = VAR_1->mdio_support;
 VAR_0->base.eth_tp_mdix
  = VAR_1->eth_tp_mdix;
 VAR_0->base.eth_tp_mdix_ctrl
  = VAR_1->eth_tp_mdix_ctrl;
 return VAR_2;
}
