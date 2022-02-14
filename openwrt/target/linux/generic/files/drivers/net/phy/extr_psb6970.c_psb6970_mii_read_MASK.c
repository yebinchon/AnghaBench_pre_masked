
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {struct mii_bus* bus; } ;
struct phy_device {TYPE_1__ mdio; } ;
struct mii_bus {int (* read ) (struct mii_bus*,int ) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mii_bus*,int ) ;

__attribute__((used)) static u16 FUNC_2(struct phy_device *VAR_0, int VAR_1)
{
 struct mii_bus *VAR_2 = VAR_0->mdio.bus;

 return VAR_2->read(VAR_2, FUNC_0(VAR_1));
}
