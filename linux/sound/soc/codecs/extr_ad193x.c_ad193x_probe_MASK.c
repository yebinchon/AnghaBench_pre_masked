
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct device {int dummy; } ;
struct ad193x_priv {int type; struct regmap* regmap; } ;
typedef enum ad193x_type { ____Placeholder_ad193x_type } ad193x_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct ad193x_priv*) ;
 int VAR_3 ;
 int FUNC_3 (struct device*,struct ad193x_priv*) ;
 struct ad193x_priv* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*,int *,int *,int) ;
 int VAR_4 ;

int FUNC_6(struct device *VAR_5, struct regmap *VAR_6,
   enum ad193x_type VAR_7)
{
 struct ad193x_priv *VAR_8;

 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_8 = FUNC_4(VAR_5, sizeof(*VAR_8), VAR_1);
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 VAR_8->regmap = VAR_6;
 VAR_8->type = VAR_7;

 FUNC_3(VAR_5, VAR_8);

 if (FUNC_2(VAR_8))
  return FUNC_5(VAR_5, &VAR_4,
             &VAR_2, 1);
 return FUNC_5(VAR_5, &VAR_4,
  &VAR_3, 1);
}
