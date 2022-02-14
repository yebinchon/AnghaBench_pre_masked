
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct aic31xx_priv {int supplies; int regmap; int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct aic31xx_priv*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 struct aic31xx_priv* FUNC_7 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_component *VAR_0)
{
 struct aic31xx_priv *VAR_1 = FUNC_7(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_6(FUNC_0(VAR_1->supplies),
        VAR_1->supplies);
 if (VAR_2)
  return VAR_2;

 FUNC_3(VAR_1->regmap, 0);


 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 < 0)
  FUNC_2(VAR_1->dev, "Could not reset device: %d\n", VAR_2);

 VAR_2 = FUNC_4(VAR_1->regmap);
 if (VAR_2) {
  FUNC_2(VAR_0->dev,
   "Failed to restore cache: %d\n", VAR_2);
  FUNC_3(VAR_1->regmap, 1);
  FUNC_5(FUNC_0(VAR_1->supplies),
           VAR_1->supplies);
  return VAR_2;
 }

 return 0;
}
