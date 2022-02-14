
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {int dummy; } ;
struct cs35l33_private {int amp_cal; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 struct cs35l33_private* FUNC_3 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_4 (int ) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dapm_widget *VAR_2,
 struct snd_kcontrol *VAR_3, int VAR_4)
{
 struct snd_soc_component *VAR_5 = FUNC_4(VAR_2->dapm);
 struct cs35l33_private *VAR_6 = FUNC_3(VAR_5);

 switch (VAR_4) {
 case 128:
  if (!VAR_6->amp_cal) {
   FUNC_5(8000, 9000);
   VAR_6->amp_cal = 1;
   FUNC_2(VAR_6->regmap, VAR_1,
        VAR_0, 0);
   FUNC_0(VAR_5->dev, "Amp calibration done\n");
  }
  FUNC_0(VAR_5->dev, "Amp turned on\n");
  break;
 case 129:
  FUNC_0(VAR_5->dev, "Amp turned off\n");
  break;
 default:
  FUNC_1(VAR_5->dev, "Invalid event = 0x%x\n", VAR_4);
  break;
 }

 return 0;
}
