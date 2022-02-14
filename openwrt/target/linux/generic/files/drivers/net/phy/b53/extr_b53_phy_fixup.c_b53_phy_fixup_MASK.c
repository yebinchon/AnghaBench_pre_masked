
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ addr; struct mii_bus* bus; } ;
struct phy_device {int phy_id; TYPE_1__ mdio; } ;
struct mii_bus {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct mii_bus*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct phy_device *VAR_4)
{
 struct mii_bus *VAR_5 = VAR_4->mdio.bus;
 u32 VAR_6;

 if (VAR_4->mdio.addr != VAR_3)
  return 0;


 VAR_6 = FUNC_0(VAR_5, 0, 2) << 16;
 VAR_6 |= FUNC_0(VAR_5, 0, 3);

 if ((VAR_6 & 0xfffffc00) == VAR_0 ||
     (VAR_6 & 0xfffffc00) == VAR_1 ||
     (VAR_6 & 0xfffffc00) == VAR_2) {
  VAR_4->phy_id = VAR_6;
 }

 return 0;
}
