
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct device {int dummy; } ;
struct cs4271_private {struct regmap* regmap; } ;


 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct device*,struct cs4271_private**) ;
 int VAR_0 ;
 int FUNC_3 (struct device*,struct cs4271_private*) ;
 int FUNC_4 (struct device*,int *,int *,int) ;
 int VAR_1 ;

int FUNC_5(struct device *VAR_2, struct regmap *VAR_3)
{
 struct cs4271_private *VAR_4;
 int VAR_5;

 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_5 = FUNC_2(VAR_2, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_3(VAR_2, VAR_4);
 VAR_4->regmap = VAR_3;

 return FUNC_4(VAR_2, &VAR_1,
            &VAR_0, 1);
}
