
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mii_bus {struct ag71xx_mdio* priv; } ;
struct ag71xx_mdio {int mii_regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int,int) ;
 int VAR_2 ;
 int FUNC_1 (struct ag71xx_mdio*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct mii_bus *VAR_3, int VAR_4, int VAR_5, u16 VAR_6)
{
 struct ag71xx_mdio *VAR_7 = VAR_3->priv;

 FUNC_0("mii_write: addr=%04x, reg=%04x, value=%04x\n", VAR_4, VAR_5, VAR_6);

 FUNC_2(VAR_7->mii_regmap, VAR_0,
   ((VAR_4 & 0xff) << VAR_2) | (VAR_5 & 0xff));
 FUNC_2(VAR_7->mii_regmap, VAR_1, VAR_6);

 FUNC_1(VAR_7);

 return 0;
}
