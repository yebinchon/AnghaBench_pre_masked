
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {int dummy; } ;
struct cs35l35_private {int regmap; } ;


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


 int FUNC_0 (struct cs35l35_private*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,int ,int) ;
 struct cs35l35_private* FUNC_3 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dapm_widget *VAR_11,
  struct snd_kcontrol *VAR_12, int VAR_13)
{
 struct snd_soc_component *VAR_14 = FUNC_4(VAR_11->dapm);
 struct cs35l35_private *VAR_15 = FUNC_3(VAR_14);
 int VAR_16 = 0;

 switch (VAR_13) {
 case 128:
  FUNC_2(VAR_15->regmap, VAR_3,
     VAR_6,
     0 << VAR_7);
  FUNC_2(VAR_15->regmap, VAR_9,
     VAR_4,
     0 << VAR_5);
  FUNC_2(VAR_15->regmap, VAR_9,
     VAR_8, 0);
  break;
 case 129:
  FUNC_2(VAR_15->regmap, VAR_9,
     VAR_4,
     1 << VAR_5);
  FUNC_2(VAR_15->regmap, VAR_9,
       VAR_8, 1);


  FUNC_2(VAR_15->regmap, VAR_2,
       VAR_0, 0);

  VAR_16 = FUNC_0(VAR_15);

  FUNC_2(VAR_15->regmap, VAR_3,
     VAR_6,
     1 << VAR_7);

  FUNC_2(VAR_15->regmap, VAR_2,
       VAR_0,
       1 << VAR_1);
  break;
 default:
  FUNC_1(VAR_14->dev, "Invalid event = 0x%x\n", VAR_13);
  VAR_16 = -VAR_10;
 }
 return VAR_16;
}
