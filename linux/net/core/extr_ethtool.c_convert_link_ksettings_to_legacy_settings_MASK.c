
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int transceiver; int eth_tp_mdix_ctrl; int eth_tp_mdix; int mdio_support; int autoneg; int phy_address; int port; int duplex; int speed; } ;
struct TYPE_3__ {int lp_advertising; int advertising; int supported; } ;
struct ethtool_link_ksettings {TYPE_2__ base; TYPE_1__ link_modes; } ;
struct ethtool_cmd {int transceiver; int eth_tp_mdix_ctrl; int eth_tp_mdix; int mdio_support; int autoneg; int phy_address; int port; int duplex; int lp_advertising; int advertising; int supported; } ;


 int FUNC_0 (struct ethtool_cmd*,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct ethtool_cmd*,int ,int) ;

__attribute__((used)) static bool
FUNC_3(
 struct ethtool_cmd *VAR_0,
 const struct ethtool_link_ksettings *VAR_1)
{
 bool VAR_2 = 1;

 FUNC_2(VAR_0, 0, sizeof(*VAR_0));






 VAR_2 &= FUNC_1(
  &VAR_0->supported,
  VAR_1->link_modes.supported);
 VAR_2 &= FUNC_1(
  &VAR_0->advertising,
  VAR_1->link_modes.advertising);
 VAR_2 &= FUNC_1(
  &VAR_0->lp_advertising,
  VAR_1->link_modes.lp_advertising);
 FUNC_0(VAR_0, VAR_1->base.speed);
 VAR_0->duplex
  = VAR_1->base.duplex;
 VAR_0->port
  = VAR_1->base.port;
 VAR_0->phy_address
  = VAR_1->base.phy_address;
 VAR_0->autoneg
  = VAR_1->base.autoneg;
 VAR_0->mdio_support
  = VAR_1->base.mdio_support;
 VAR_0->eth_tp_mdix
  = VAR_1->base.eth_tp_mdix;
 VAR_0->eth_tp_mdix_ctrl
  = VAR_1->base.eth_tp_mdix_ctrl;
 VAR_0->transceiver
  = VAR_1->base.transceiver;
 return VAR_2;
}
