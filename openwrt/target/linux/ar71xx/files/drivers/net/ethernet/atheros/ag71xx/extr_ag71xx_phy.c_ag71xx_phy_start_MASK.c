
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ag71xx_platform_data {scalar_t__ switch_data; scalar_t__ mii_bus_dev; } ;
struct ag71xx {int link; scalar_t__ phy_dev; } ;


 int FUNC_0 (struct ag71xx*) ;
 struct ag71xx_platform_data* FUNC_1 (struct ag71xx*) ;
 int FUNC_2 (struct ag71xx*) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(struct ag71xx *VAR_0)
{
 struct ag71xx_platform_data *VAR_1 = FUNC_1(VAR_0);

 if (VAR_0->phy_dev) {
  FUNC_3(VAR_0->phy_dev);
 } else if (VAR_1->mii_bus_dev && VAR_1->switch_data) {
  FUNC_0(VAR_0);
 } else {
  VAR_0->link = 1;
  FUNC_2(VAR_0);
 }
}
