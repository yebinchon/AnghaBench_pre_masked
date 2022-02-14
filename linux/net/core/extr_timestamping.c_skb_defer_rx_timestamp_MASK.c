
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {TYPE_2__* dev; } ;
struct phy_device {TYPE_1__* drv; } ;
struct TYPE_4__ {struct phy_device* phydev; } ;
struct TYPE_3__ {int (* rxtstamp ) (struct phy_device*,struct sk_buff*,unsigned int) ;} ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct sk_buff*,scalar_t__) ;
 int FUNC_1 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_2 (int (*) (struct phy_device*,struct sk_buff*,unsigned int)) ;
 unsigned int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct phy_device*,struct sk_buff*,unsigned int) ;

bool FUNC_6(struct sk_buff *VAR_2)
{
 struct phy_device *VAR_3;
 unsigned int VAR_4;

 if (!VAR_2->dev || !VAR_2->dev->phydev || !VAR_2->dev->phydev->drv)
  return 0;

 if (FUNC_4(VAR_2) < VAR_0)
  return 0;

 FUNC_1(VAR_2, VAR_0);

 VAR_4 = FUNC_3(VAR_2);

 FUNC_0(VAR_2, VAR_0);

 if (VAR_4 == VAR_1)
  return 0;

 VAR_3 = VAR_2->dev->phydev;
 if (FUNC_2(VAR_3->drv->rxtstamp))
  return VAR_3->drv->rxtstamp(VAR_3, VAR_2, VAR_4);

 return 0;
}
