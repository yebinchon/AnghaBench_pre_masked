
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct device {int dummy; } ;
struct aic23 {struct regmap* regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct device*,struct aic23*) ;
 struct aic23* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct device*,int *,int *,int) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_5(struct device *VAR_4, struct regmap *VAR_5)
{
 struct aic23 *VAR_6;

 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_6 = FUNC_3(VAR_4, sizeof(struct aic23), VAR_1);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_6->regmap = VAR_5;

 FUNC_2(VAR_4, VAR_6);

 return FUNC_4(VAR_4,
          &VAR_2,
          &VAR_3, 1);
}
