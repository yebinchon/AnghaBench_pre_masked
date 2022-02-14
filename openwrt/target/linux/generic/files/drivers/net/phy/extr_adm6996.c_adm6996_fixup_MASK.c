
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int addr; struct mii_bus* bus; } ;
struct phy_device {int phy_id; TYPE_1__ mdio; } ;
struct mii_bus {int (* read ) (struct mii_bus*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mii_bus*,int ) ;
 int FUNC_2 (struct mii_bus*,int ) ;

__attribute__((used)) static int FUNC_3(struct phy_device *VAR_6)
{
 struct mii_bus *VAR_7 = VAR_6->mdio.bus;
 u16 VAR_8;


 if (VAR_6->mdio.addr > 10)
  return 0;


 VAR_8 = VAR_7->read(VAR_7, FUNC_0(VAR_0)) & VAR_1;
 if (VAR_8 != VAR_2)
  return 0;

 VAR_8 = VAR_7->read(VAR_7, FUNC_0(VAR_3)) & VAR_4;
 if (VAR_8 != VAR_5)
  return 0;

 VAR_6->phy_id = (VAR_2 << 16) | VAR_5;

 return 0;
}
