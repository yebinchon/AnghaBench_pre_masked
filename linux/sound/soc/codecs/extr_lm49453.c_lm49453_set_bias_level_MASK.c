
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct lm49453_priv {int regmap; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_soc_component*) ;
 struct lm49453_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_3,
      enum snd_soc_bias_level VAR_4)
{
 struct lm49453_priv *VAR_5 = FUNC_2(VAR_3);

 switch (VAR_4) {
 case 130:
 case 129:
  break;

 case 128:
  if (FUNC_1(VAR_3) == 131)
   FUNC_0(VAR_5->regmap);

  FUNC_3(VAR_3, VAR_1,
        VAR_2, VAR_0);
  break;

 case 131:
  FUNC_3(VAR_3, VAR_1,
        VAR_2, 0);
  break;
 }

 return 0;
}
