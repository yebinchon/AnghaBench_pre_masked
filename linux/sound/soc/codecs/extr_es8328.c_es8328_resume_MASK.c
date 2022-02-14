
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct regmap {int dummy; } ;
struct es8328_priv {int supplies; int clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 struct regmap* FUNC_3 (int ,int *) ;
 int FUNC_4 (struct regmap*) ;
 int FUNC_5 (struct regmap*) ;
 int FUNC_6 (int ,int ) ;
 struct es8328_priv* FUNC_7 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_component *VAR_0)
{
 struct regmap *VAR_1 = FUNC_3(VAR_0->dev, ((void*)0));
 struct es8328_priv *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_7(VAR_0);

 VAR_3 = FUNC_1(VAR_2->clk);
 if (VAR_3) {
  FUNC_2(VAR_0->dev, "unable to enable clock\n");
  return VAR_3;
 }

 VAR_3 = FUNC_6(FUNC_0(VAR_2->supplies),
     VAR_2->supplies);
 if (VAR_3) {
  FUNC_2(VAR_0->dev, "unable to enable regulators\n");
  return VAR_3;
 }

 FUNC_4(VAR_1);
 VAR_3 = FUNC_5(VAR_1);
 if (VAR_3) {
  FUNC_2(VAR_0->dev, "unable to sync regcache\n");
  return VAR_3;
 }

 return 0;
}
