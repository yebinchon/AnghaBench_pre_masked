
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {int dummy; } ;
struct cs35l33_private {int regmap; int amp_cal; int is_tdm_mode; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,unsigned int,unsigned int) ;
 struct cs35l33_private* FUNC_3 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_4 (int ) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dapm_widget *VAR_6,
 struct snd_kcontrol *VAR_7, int VAR_8)
{
 struct snd_soc_component *VAR_9 = FUNC_4(VAR_6->dapm);
 struct cs35l33_private *VAR_10 = FUNC_3(VAR_9);
 unsigned int VAR_11;

 switch (VAR_8) {
 case 128:
  FUNC_2(VAR_10->regmap, VAR_4,
        VAR_2, 0);
  VAR_11 = VAR_10->is_tdm_mode ? 0 : VAR_3;
  FUNC_2(VAR_10->regmap, VAR_5,
        VAR_3, VAR_11);
  FUNC_0(VAR_9->dev, "BST turned on\n");
  break;
 case 129:
  FUNC_0(VAR_9->dev, "SDIN turned on\n");
  if (!VAR_10->amp_cal) {
   FUNC_2(VAR_10->regmap, VAR_1,
        VAR_0, VAR_0);
   FUNC_0(VAR_9->dev, "Amp calibration started\n");
   FUNC_5(10000, 11000);
  }
  break;
 case 130:
  FUNC_2(VAR_10->regmap, VAR_5,
        VAR_3, VAR_3);
  FUNC_5(4000, 4100);
  FUNC_2(VAR_10->regmap, VAR_4,
        VAR_2, VAR_2);
  FUNC_0(VAR_9->dev, "BST and SDIN turned off\n");
  break;
 default:
  FUNC_1(VAR_9->dev, "Invalid event = 0x%x\n", VAR_8);

 }

 return 0;
}
