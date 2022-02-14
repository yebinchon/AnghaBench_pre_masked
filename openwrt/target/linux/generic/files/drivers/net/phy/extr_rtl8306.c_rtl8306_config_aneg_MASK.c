
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl_priv {int dev; } ;
struct TYPE_2__ {scalar_t__ addr; } ;
struct phy_device {TYPE_1__ mdio; struct rtl_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct phy_device *VAR_2)
{
 struct rtl_priv *VAR_3 = VAR_2->priv;


 if (VAR_2->mdio.addr == 0)
  return 0;


 FUNC_1(&VAR_3->dev, FUNC_0(4, VAR_1), 1);
 FUNC_1(&VAR_3->dev, FUNC_0(4, VAR_0), 1);

 return 0;
}
