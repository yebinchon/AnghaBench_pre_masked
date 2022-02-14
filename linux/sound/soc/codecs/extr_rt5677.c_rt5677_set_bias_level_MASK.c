
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct rt5677_priv {int is_vref_slow; int dsp_vad_en; int regmap; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;




 int FUNC_0 (int ,scalar_t__,int,int) ;
 int FUNC_1 (int ,scalar_t__,int) ;
 int FUNC_2 (struct snd_soc_component*,int) ;
 int FUNC_3 (struct snd_soc_component*) ;
 struct rt5677_priv* FUNC_4 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_17,
   enum snd_soc_bias_level VAR_18)
{
 struct rt5677_priv *VAR_19 = FUNC_4(VAR_17);

 switch (VAR_18) {
 case 130:
  break;

 case 129:
  if (FUNC_3(VAR_17) == 128) {
   FUNC_2(VAR_17, 0);

   FUNC_0(VAR_19->regmap, VAR_7,
    VAR_2 | VAR_4,
    5 << VAR_3 |
    5 << VAR_5);
   FUNC_0(VAR_19->regmap,
    VAR_6 + VAR_0,
    0x0f00, 0x0f00);
   FUNC_0(VAR_19->regmap, VAR_7,
    VAR_12 | VAR_13 |
    VAR_15 | VAR_14 |
    VAR_9 | VAR_16,
    VAR_15 | VAR_14 |
    VAR_9 | VAR_16);
   VAR_19->is_vref_slow = 0;
   FUNC_0(VAR_19->regmap, VAR_8,
    VAR_10, VAR_10);
   FUNC_0(VAR_19->regmap, VAR_1,
    0x1, 0x1);
  }
  break;

 case 128:
  break;

 case 131:
  FUNC_0(VAR_19->regmap, VAR_1, 0x1, 0x0);
  FUNC_1(VAR_19->regmap, VAR_11, 0x0000);
  FUNC_1(VAR_19->regmap, VAR_7,
   2 << VAR_3 |
   2 << VAR_5);
  FUNC_0(VAR_19->regmap, VAR_8,
   VAR_10, 0);
  FUNC_0(VAR_19->regmap,
   VAR_6 + VAR_0, 0x0f00, 0x0000);

  if (VAR_19->dsp_vad_en)
   FUNC_2(VAR_17, 1);
  break;

 default:
  break;
 }

 return 0;
}
