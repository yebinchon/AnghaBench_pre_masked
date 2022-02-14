
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mii_bus {struct ag71xx_mdio* priv; } ;
struct ag71xx_mdio {TYPE_1__* pdata; } ;
struct TYPE_2__ {scalar_t__ builtin_switch; } ;


 int FUNC_0 (struct ag71xx_mdio*,int,int,int ) ;
 int FUNC_1 (struct mii_bus*,int,int,int ) ;

__attribute__((used)) static int FUNC_2(struct mii_bus *VAR_0, int VAR_1, int VAR_2, u16 VAR_3)
{
 struct ag71xx_mdio *VAR_4 = VAR_0->priv;

 if (VAR_4->pdata->builtin_switch)
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 else
  FUNC_0(VAR_4, VAR_1, VAR_2, VAR_3);
 return 0;
}
