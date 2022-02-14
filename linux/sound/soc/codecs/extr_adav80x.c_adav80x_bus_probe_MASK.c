
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct device {int dummy; } ;
struct adav80x {struct regmap* regmap; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct regmap*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct device*,struct adav80x*) ;
 struct adav80x* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*,int *,int ,int ) ;

int FUNC_6(struct device *VAR_4, struct regmap *VAR_5)
{
 struct adav80x *VAR_6;

 if (FUNC_1(VAR_5))
  return FUNC_2(VAR_5);

 VAR_6 = FUNC_4(VAR_4, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 FUNC_3(VAR_4, VAR_6);
 VAR_6->regmap = VAR_5;

 return FUNC_5(VAR_4, &VAR_2,
  VAR_3, FUNC_0(VAR_3));
}
