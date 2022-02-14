
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {TYPE_1__* dev; int sk; } ;
struct phy_device {TYPE_2__* drv; } ;
struct TYPE_4__ {int (* txtstamp ) (struct phy_device*,struct sk_buff*,unsigned int) ;} ;
struct TYPE_3__ {struct phy_device* phydev; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int (*) (struct phy_device*,struct sk_buff*,unsigned int)) ;
 struct sk_buff* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct phy_device*,struct sk_buff*,unsigned int) ;

void FUNC_4(struct sk_buff *VAR_1)
{
 struct phy_device *VAR_2;
 struct sk_buff *VAR_3;
 unsigned int VAR_4;

 if (!VAR_1->sk)
  return;

 VAR_4 = FUNC_0(VAR_1);
 if (VAR_4 == VAR_0)
  return;

 VAR_2 = VAR_1->dev->phydev;
 if (FUNC_1(VAR_2->drv->txtstamp)) {
  VAR_3 = FUNC_2(VAR_1);
  if (!VAR_3)
   return;
  VAR_2->drv->txtstamp(VAR_2, VAR_3, VAR_4);
 }
}
