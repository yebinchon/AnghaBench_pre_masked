
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psb6970_priv {int dev; } ;
struct TYPE_2__ {scalar_t__ addr; } ;
struct phy_device {TYPE_1__ mdio; struct psb6970_priv* priv; } ;


 int FUNC_0 (struct psb6970_priv*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct phy_device *VAR_0)
{
 struct psb6970_priv *VAR_1 = VAR_0->priv;

 if (!VAR_1)
  return;

 if (VAR_0->mdio.addr == 0)
  FUNC_1(&VAR_1->dev);
 FUNC_0(VAR_1);
}
