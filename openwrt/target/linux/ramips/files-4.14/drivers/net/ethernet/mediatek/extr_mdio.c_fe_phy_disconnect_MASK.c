
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fe_priv {scalar_t__ mii_bus; TYPE_2__* phy; TYPE_1__* soc; scalar_t__* link; } ;
struct TYPE_4__ {scalar_t__* phy; int lock; scalar_t__* phy_fixed; } ;
struct TYPE_3__ {int (* mdio_adjust_link ) (struct fe_priv*,int) ;} ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct fe_priv*,int) ;

__attribute__((used)) static void FUNC_6(struct fe_priv *VAR_0)
{
 unsigned long VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 8; VAR_2++)
  if (VAR_0->phy->phy_fixed[VAR_2]) {
   FUNC_3(&VAR_0->phy->lock, VAR_1);
   VAR_0->link[VAR_2] = 0;
   if (VAR_0->soc->mdio_adjust_link)
    VAR_0->soc->mdio_adjust_link(VAR_0, VAR_2);
   FUNC_4(&VAR_0->phy->lock, VAR_1);
  } else if (VAR_0->phy->phy[VAR_2]) {
   FUNC_2(VAR_0->phy->phy[VAR_2]);
  } else if (VAR_0->mii_bus && FUNC_0(VAR_0->mii_bus, VAR_2)) {
   FUNC_1(FUNC_0(VAR_0->mii_bus, VAR_2));
  }
}
