
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ addr; } ;
struct phy_device {TYPE_2__ mdio; struct net_device* attached_dev; struct ar8xxx_priv* priv; } ;
struct net_device {int eth_mangle_tx; int eth_mangle_rx; int priv_flags; struct ar8xxx_priv* phy_ptr; } ;
struct TYPE_6__ {scalar_t__ ports; } ;
struct ar8xxx_priv {int initialized; int port4_phy; TYPE_3__ dev; struct phy_device* phy; TYPE_1__* chip; } ;
struct TYPE_4__ {scalar_t__ config_at_probe; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ar8xxx_priv*) ;
 int FUNC_2 (struct phy_device*) ;
 int FUNC_3 (struct ar8xxx_priv*) ;
 scalar_t__ FUNC_4 (struct ar8xxx_priv*) ;
 scalar_t__ FUNC_5 (struct ar8xxx_priv*) ;

__attribute__((used)) static int
FUNC_6(struct phy_device *VAR_5)
{
 struct ar8xxx_priv *VAR_6 = VAR_5->priv;
 struct net_device *VAR_7 = VAR_5->attached_dev;
 int VAR_8;

 if (FUNC_0(!VAR_6))
  return -VAR_1;

 if (VAR_6->chip->config_at_probe)
  return FUNC_2(VAR_5);

 VAR_6->phy = VAR_5;

 if (VAR_5->mdio.addr != 0) {
  if (FUNC_5(VAR_6)) {

   VAR_6->dev.ports = (VAR_0 - 1);
   VAR_6->initialized = 0;
   VAR_6->port4_phy = 1;
   FUNC_1(VAR_6);
   return 0;
  }

  return 0;
 }

 VAR_8 = FUNC_3(VAR_6);
 if (VAR_8)
  return VAR_8;


 if (FUNC_4(VAR_6)) {
  VAR_7->phy_ptr = VAR_6;
  VAR_7->priv_flags |= VAR_2;
  VAR_7->eth_mangle_rx = VAR_3;
  VAR_7->eth_mangle_tx = VAR_4;
 }

 return 0;
}
