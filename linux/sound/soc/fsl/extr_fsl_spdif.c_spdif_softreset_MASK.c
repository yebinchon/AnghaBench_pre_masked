
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regmap {int dummy; } ;
struct fsl_spdif_priv {struct regmap* regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct regmap*,int) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct regmap*) ;
 int FUNC_3 (struct regmap*,int ,int*) ;
 int FUNC_4 (struct regmap*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct fsl_spdif_priv *VAR_3)
{
 struct regmap *VAR_4 = VAR_3->regmap;
 u32 VAR_5, VAR_6 = 1000;

 FUNC_0(VAR_4, 1);

 FUNC_4(VAR_4, VAR_1, VAR_2);





 do {
  FUNC_3(VAR_4, VAR_1, &VAR_5);
 } while ((VAR_5 & VAR_2) && VAR_6--);

 FUNC_0(VAR_4, 0);
 FUNC_1(VAR_4);
 FUNC_2(VAR_4);

 if (VAR_6)
  return 0;
 else
  return -VAR_0;
}
