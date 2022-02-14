
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct max9850_priv {int regmap; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;






 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_soc_component*) ;
 struct max9850_priv* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_0,
      enum snd_soc_bias_level VAR_1)
{
 struct max9850_priv *VAR_2 = FUNC_3(VAR_0);
 int VAR_3;

 switch (VAR_1) {
 case 130:
  break;
 case 129:
  break;
 case 128:
  if (FUNC_2(VAR_0) == 131) {
   VAR_3 = FUNC_1(VAR_2->regmap);
   if (VAR_3) {
    FUNC_0(VAR_0->dev,
     "Failed to sync cache: %d\n", VAR_3);
    return VAR_3;
   }
  }
  break;
 case 131:
  break;
 }
 return 0;
}
