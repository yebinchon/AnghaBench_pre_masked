
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ag71xx_platform_data {scalar_t__ phy_mask; scalar_t__ switch_data; TYPE_4__* mii_bus_dev; } ;
struct ag71xx {TYPE_2__* mii_bus; TYPE_1__* pdev; } ;
struct TYPE_8__ {int * bus; } ;
struct TYPE_7__ {int mdio_lock; int (* reset ) (TYPE_2__*) ;} ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct ag71xx*) ;
 struct ag71xx_platform_data* FUNC_1 (struct ag71xx*) ;
 int FUNC_2 (struct ag71xx*) ;
 int FUNC_3 (struct ag71xx*) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (TYPE_4__*) ;
 TYPE_2__* FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_2__*) ;

int FUNC_10(struct ag71xx *VAR_1)
{
 struct ag71xx_platform_data *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->mii_bus_dev == ((void*)0) ||
     VAR_2->mii_bus_dev->bus == ((void*)0) )
  return FUNC_2(VAR_1);

 VAR_1->mii_bus = FUNC_6(VAR_2->mii_bus_dev);
 if (VAR_1->mii_bus == ((void*)0)) {
  FUNC_4(&VAR_1->pdev->dev, "unable to find MII bus on device '%s'\n",
      FUNC_5(VAR_2->mii_bus_dev));
  return -VAR_0;
 }


 if (VAR_1->mii_bus->reset) {
  FUNC_7(&VAR_1->mii_bus->mdio_lock);
  VAR_1->mii_bus->reset(VAR_1->mii_bus);
  FUNC_8(&VAR_1->mii_bus->mdio_lock);
 }

 if (VAR_2->switch_data)
  return FUNC_0(VAR_1);

 if (VAR_2->phy_mask)
  return FUNC_3(VAR_1);

 return FUNC_2(VAR_1);
}
