
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct phy_device {scalar_t__ link; scalar_t__ duplex; int speed; } ;
struct net_device {int dummy; } ;
struct fe_priv {scalar_t__* link; TYPE_2__* phy; TYPE_1__* soc; } ;
struct TYPE_4__ {scalar_t__* duplex; int* speed; int lock; struct phy_device** phy; scalar_t__* phy_node; } ;
struct TYPE_3__ {int (* mdio_adjust_link ) (struct fe_priv*,int) ;} ;





 struct fe_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct fe_priv*,int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
 struct fe_priv *VAR_1 = FUNC_0(VAR_0);
 unsigned long VAR_2;
 int VAR_3;

 FUNC_1(&VAR_1->phy->lock, VAR_2);
 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  if (VAR_1->phy->phy_node[VAR_3]) {
   struct phy_device *VAR_4 = VAR_1->phy->phy[VAR_3];
   int VAR_5 = 0;

   if (VAR_4->link)
    if (VAR_1->phy->duplex[VAR_3] != VAR_4->duplex ||
        VAR_1->phy->speed[VAR_3] != VAR_4->speed)
     VAR_5 = 1;

   if (VAR_4->link != VAR_1->link[VAR_3])
    VAR_5 = 1;

   switch (VAR_4->speed) {
   case 128:
   case 129:
   case 130:
    VAR_1->link[VAR_3] = VAR_4->link;
    VAR_1->phy->duplex[VAR_3] = VAR_4->duplex;
    VAR_1->phy->speed[VAR_3] = VAR_4->speed;

    if (VAR_5 &&
        VAR_1->soc->mdio_adjust_link)
     VAR_1->soc->mdio_adjust_link(VAR_1, VAR_3);
    break;
   }
  }
 }
 FUNC_2(&VAR_1->phy->lock, VAR_2);
}
