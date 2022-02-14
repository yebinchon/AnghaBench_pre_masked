
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_bus {struct ag71xx_mdio* priv; } ;
struct ag71xx_mdio {int mii_regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ag71xx_mdio*) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct mii_bus *VAR_6, int VAR_7, int VAR_8)
{
 struct ag71xx_mdio *VAR_9 = VAR_6->priv;
 int VAR_10;
 int VAR_11;

 VAR_10 = FUNC_1(VAR_9);
 if (VAR_10)
  return 0xffff;

 FUNC_3(VAR_9->mii_regmap, VAR_1, VAR_5);
 FUNC_3(VAR_9->mii_regmap, VAR_0,
   ((VAR_7 & 0xff) << VAR_3) | (VAR_8 & 0xff));
 FUNC_3(VAR_9->mii_regmap, VAR_1, VAR_4);

 VAR_10 = FUNC_1(VAR_9);
 if (VAR_10)
  return 0xffff;

 FUNC_2(VAR_9->mii_regmap, VAR_2, &VAR_11);
 VAR_11 &= 0xffff;
 FUNC_3(VAR_9->mii_regmap, VAR_1, VAR_5);

 FUNC_0("mii_read: addr=%04x, reg=%04x, value=%04x\n", VAR_7, VAR_8, VAR_11);

 return VAR_11;
}
