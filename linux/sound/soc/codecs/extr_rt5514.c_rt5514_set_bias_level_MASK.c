
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct rt5514_priv {int regmap; int i2c_regmap; int dsp_enabled; int mclk; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;


 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_7 (struct snd_soc_component*) ;
 struct rt5514_priv* FUNC_8 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_9(struct snd_soc_component *VAR_3,
   enum snd_soc_bias_level VAR_4)
{
 struct rt5514_priv *VAR_5 = FUNC_8(VAR_3);
 int VAR_6;

 switch (VAR_4) {
 case 129:
  if (FUNC_1(VAR_5->mclk))
   break;

  if (FUNC_7(VAR_3) == VAR_1) {
   FUNC_2(VAR_5->mclk);
  } else {
   VAR_6 = FUNC_3(VAR_5->mclk);
   if (VAR_6)
    return VAR_6;
  }
  break;

 case 128:
  if (FUNC_7(VAR_3) == VAR_0) {





   if (VAR_5->dsp_enabled) {
    VAR_5->dsp_enabled = 0;
    FUNC_6(VAR_5->i2c_regmap,
     VAR_2,
     FUNC_0(VAR_2));
    FUNC_4(VAR_5->regmap);
    FUNC_5(VAR_5->regmap);
   }
  }
  break;

 default:
  break;
 }

 return 0;
}
