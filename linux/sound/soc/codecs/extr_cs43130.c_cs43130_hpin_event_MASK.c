
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {int dummy; } ;
struct cs43130_private {int regmap; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;


 int FUNC_1 (int ,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int ) ;
 struct cs43130_private* FUNC_3 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dapm_widget *VAR_3,
         struct snd_kcontrol *VAR_4, int VAR_5)
{
 struct snd_soc_component *VAR_6 = FUNC_4(VAR_3->dapm);
 struct cs43130_private *VAR_7 = FUNC_3(VAR_6);

 switch (VAR_5) {
 case 129:
  FUNC_2(VAR_7->regmap, VAR_2,
           FUNC_0(VAR_2));
  break;
 case 128:
  FUNC_2(VAR_7->regmap, VAR_1,
           FUNC_0(VAR_1));
  break;
 default:
  FUNC_1(VAR_6->dev, "Invalid HPIN event = 0x%x\n", VAR_5);
  return -VAR_0;
 }
 return 0;
}
