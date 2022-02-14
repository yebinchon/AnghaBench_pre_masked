
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct alc5623_priv {int regmap; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 struct alc5623_priv* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_0)
{
 struct alc5623_priv *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;


 FUNC_1(VAR_1->regmap, 0);
 VAR_2 = FUNC_2(VAR_1->regmap);
 if (VAR_2 != 0) {
  FUNC_0(VAR_0->dev, "Failed to sync register cache: %d\n",
   VAR_2);
  FUNC_1(VAR_1->regmap, 1);
  return VAR_2;
 }

 return 0;
}
