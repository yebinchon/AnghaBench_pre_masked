
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {int dummy; } ;
struct cs35l36_private {int regmap; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;



 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ,int ,int ,int) ;
 struct cs35l36_private* FUNC_5 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_6 (int ) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_dapm_widget *VAR_13,
      struct snd_kcontrol *VAR_14, int VAR_15)
{
 struct snd_soc_component *VAR_16 =
   FUNC_6(VAR_13->dapm);
 struct cs35l36_private *VAR_17 =
   FUNC_5(VAR_16);
 u32 VAR_18;

 switch (VAR_15) {
 case 129:
  FUNC_4(VAR_17->regmap, VAR_11,
       VAR_4,
       1 << VAR_5);

  FUNC_7(2000, 2100);

  FUNC_3(VAR_17->regmap, VAR_6, &VAR_18);

  if (FUNC_0(VAR_18 & VAR_10))
   FUNC_1(VAR_17->dev, "PLL Unlocked\n");

  FUNC_4(VAR_17->regmap, VAR_3,
       VAR_7,
       VAR_8);
  FUNC_4(VAR_17->regmap, VAR_2,
       VAR_0,
       0 << VAR_1);
  break;
 case 128:
  FUNC_4(VAR_17->regmap, VAR_3,
       VAR_7,
       VAR_9);
  FUNC_4(VAR_17->regmap, VAR_2,
       VAR_0,
       1 << VAR_1);
  break;
 case 130:
  FUNC_4(VAR_17->regmap, VAR_11,
       VAR_4,
       0 << VAR_5);

  FUNC_7(2000, 2100);
  break;
 default:
  FUNC_2(VAR_16->dev, "Invalid event = 0x%x\n", VAR_15);
  return -VAR_12;
 }

 return 0;
}
