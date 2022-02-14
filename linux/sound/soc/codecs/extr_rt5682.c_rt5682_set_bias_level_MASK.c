
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct rt5682_priv {int regmap; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (int ,int ,int,int) ;
 struct rt5682_priv* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_5,
   enum snd_soc_bias_level VAR_6)
{
 struct rt5682_priv *VAR_7 = FUNC_1(VAR_5);

 switch (VAR_6) {
 case 129:
  FUNC_0(VAR_7->regmap, VAR_1,
   VAR_2, VAR_2);
  FUNC_0(VAR_7->regmap, VAR_3,
   VAR_0 | VAR_4,
   VAR_0 | VAR_4);
  break;

 case 128:
  FUNC_0(VAR_7->regmap, VAR_3,
   VAR_0, VAR_0);
  break;
 case 130:
  FUNC_0(VAR_7->regmap, VAR_3,
   VAR_0 | VAR_4, 0);
  FUNC_0(VAR_7->regmap, VAR_1,
   VAR_2, 0);
  break;

 default:
  break;
 }

 return 0;
}
