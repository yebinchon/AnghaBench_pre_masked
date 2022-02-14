
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct max9860_priv {int regmap; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int ,char*,int) ;
 struct max9860_priv* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_2,
      enum snd_soc_bias_level VAR_3)
{
 struct max9860_priv *VAR_4 = FUNC_1(VAR_2->dev);
 int VAR_5;

 switch (VAR_3) {
 case 130:
 case 129:
  break;

 case 128:
  VAR_5 = FUNC_2(VAR_4->regmap, VAR_0,
      VAR_1, VAR_1);
  if (VAR_5) {
   FUNC_0(VAR_2->dev, "Failed to remove SHDN: %d\n",
    VAR_5);
   return VAR_5;
  }
  break;

 case 131:
  VAR_5 = FUNC_2(VAR_4->regmap, VAR_0,
      VAR_1, 0);
  if (VAR_5) {
   FUNC_0(VAR_2->dev, "Failed to request SHDN: %d\n",
    VAR_5);
   return VAR_5;
  }
  break;
 }

 return 0;
}
