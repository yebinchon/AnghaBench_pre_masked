
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct es8328_priv {TYPE_1__* supplies; struct regmap* regmap; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int supply; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct regmap*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,struct es8328_priv*) ;
 struct es8328_priv* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,int,TYPE_1__*) ;
 int FUNC_7 (struct device*,int *,int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;

int FUNC_8(struct device *VAR_5, struct regmap *VAR_6)
{
 struct es8328_priv *VAR_7;
 int VAR_8;
 int VAR_9;

 if (FUNC_1(VAR_6))
  return FUNC_2(VAR_6);

 VAR_7 = FUNC_5(VAR_5, sizeof(*VAR_7), VAR_1);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 VAR_7->regmap = VAR_6;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_7->supplies); VAR_9++)
  VAR_7->supplies[VAR_9].supply = VAR_4[VAR_9];

 VAR_8 = FUNC_6(VAR_5, FUNC_0(VAR_7->supplies),
    VAR_7->supplies);
 if (VAR_8) {
  FUNC_3(VAR_5, "unable to get regulators\n");
  return VAR_8;
 }

 FUNC_4(VAR_5, VAR_7);

 return FUNC_7(VAR_5,
   &VAR_2, &VAR_3, 1);
}
