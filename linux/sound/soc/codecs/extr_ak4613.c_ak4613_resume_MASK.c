
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct regmap {int dummy; } ;


 struct regmap* FUNC_0 (int ,int *) ;
 int FUNC_1 (struct regmap*,int) ;
 int FUNC_2 (struct regmap*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_0)
{
 struct regmap *VAR_1 = FUNC_0(VAR_0->dev, ((void*)0));

 FUNC_1(VAR_1, 0);
 return FUNC_2(VAR_1);
}
