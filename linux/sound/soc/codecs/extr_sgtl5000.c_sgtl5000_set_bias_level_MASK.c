
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct sgtl5000_priv {int regmap; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 struct sgtl5000_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_2,
       enum snd_soc_bias_level VAR_3)
{
 struct sgtl5000_priv *VAR_4 = FUNC_2(VAR_2);
 int VAR_5;

 switch (VAR_3) {
 case 130:
 case 129:
 case 128:
  FUNC_0(VAR_4->regmap, 0);
  VAR_5 = FUNC_1(VAR_4->regmap);
  if (VAR_5) {
   FUNC_0(VAR_4->regmap, 1);
   return VAR_5;
  }

  FUNC_3(VAR_2, VAR_0,
        VAR_1,
        VAR_1);
  break;
 case 131:
  FUNC_0(VAR_4->regmap, 1);
  FUNC_3(VAR_2, VAR_0,
        VAR_1, 0);
  break;
 }

 return 0;
}
