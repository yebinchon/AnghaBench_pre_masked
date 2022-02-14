
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssm2602_priv {int type; struct regmap* regmap; } ;
struct regmap {int dummy; } ;
struct device {int dummy; } ;
typedef enum ssm2602_type { ____Placeholder_ssm2602_type } ssm2602_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct device*,struct ssm2602_priv*) ;
 struct ssm2602_priv* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct device*,int *,int *,int) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_5(struct device *VAR_4, enum ssm2602_type VAR_5,
 struct regmap *VAR_6)
{
 struct ssm2602_priv *VAR_7;

 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_7 = FUNC_3(VAR_4, sizeof(*VAR_7), VAR_1);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 FUNC_2(VAR_4, VAR_7);
 VAR_7->type = VAR_5;
 VAR_7->regmap = VAR_6;

 return FUNC_4(VAR_4, &VAR_2,
  &VAR_3, 1);
}
