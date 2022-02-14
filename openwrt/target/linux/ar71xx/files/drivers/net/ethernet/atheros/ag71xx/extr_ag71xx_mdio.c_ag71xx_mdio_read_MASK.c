
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mii_bus {struct ag71xx_mdio* priv; } ;
struct ag71xx_mdio {TYPE_1__* pdata; } ;
struct TYPE_2__ {scalar_t__ builtin_switch; } ;


 int FUNC_0 (struct ag71xx_mdio*,int,int) ;
 int FUNC_1 (struct mii_bus*,int,int) ;

__attribute__((used)) static int FUNC_2(struct mii_bus *VAR_0, int VAR_1, int VAR_2)
{
 struct ag71xx_mdio *VAR_3 = VAR_0->priv;

 if (VAR_3->pdata->builtin_switch)
  return FUNC_1(VAR_0, VAR_1, VAR_2);
 else
  return FUNC_0(VAR_3, VAR_1, VAR_2);
}
