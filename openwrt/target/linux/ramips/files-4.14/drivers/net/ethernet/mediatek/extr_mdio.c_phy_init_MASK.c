
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct phy_device {int supported; int advertising; scalar_t__ duplex; scalar_t__ speed; int autoneg; TYPE_1__ mdio; } ;
struct fe_priv {int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct phy_device*) ;

__attribute__((used)) static void FUNC_4(struct fe_priv *VAR_6, struct phy_device *VAR_7)
{
 FUNC_2(VAR_6->netdev, FUNC_1(&VAR_7->mdio.dev), VAR_5);

 VAR_7->autoneg = VAR_1;
 VAR_7->speed = 0;
 VAR_7->duplex = 0;
 VAR_7->supported &= FUNC_0(VAR_2) ?
   VAR_4 : VAR_3;
 VAR_7->advertising = VAR_7->supported | VAR_0;

 FUNC_3(VAR_7);
}
