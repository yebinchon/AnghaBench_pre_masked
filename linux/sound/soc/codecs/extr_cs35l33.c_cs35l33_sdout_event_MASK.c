
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {int dummy; } ;
struct cs35l33_private {int regmap; int is_tdm_mode; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,unsigned int,unsigned int) ;
 struct cs35l33_private* FUNC_3 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dapm_widget *VAR_5,
 struct snd_kcontrol *VAR_6, int VAR_7)
{
 struct snd_soc_component *VAR_8 = FUNC_4(VAR_5->dapm);
 struct cs35l33_private *VAR_9 = FUNC_3(VAR_8);
 unsigned int VAR_10 = VAR_3 | VAR_1;
 unsigned int VAR_11 = VAR_4;
 unsigned int VAR_12, VAR_13;

 switch (VAR_7) {
 case 128:
  if (VAR_9->is_tdm_mode) {

   VAR_12 = VAR_3;

   VAR_13 = 0;
  } else {

   VAR_12 = VAR_1;

   VAR_13 = VAR_4;
  }
  FUNC_0(VAR_8->dev, "SDOUT turned on\n");
  break;
 case 129:
  VAR_12 = VAR_3 | VAR_1;
  VAR_13 = VAR_4;
  FUNC_0(VAR_8->dev, "SDOUT turned off\n");
  break;
 default:
  FUNC_1(VAR_8->dev, "Invalid event = 0x%x\n", VAR_7);
  return 0;
 }

 FUNC_2(VAR_9->regmap, VAR_2,
  VAR_10, VAR_12);
 FUNC_2(VAR_9->regmap, VAR_0,
  VAR_11, VAR_13);

 return 0;
}
