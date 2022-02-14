
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {int dummy; } ;
struct cs35l34_private {int regmap; int tdm_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,int ,int,int) ;
 struct cs35l34_private* FUNC_3 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_4 (int ) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dapm_widget *VAR_4,
  struct snd_kcontrol *VAR_5, int VAR_6)
{
 struct snd_soc_component *VAR_7 = FUNC_4(VAR_4->dapm);
 struct cs35l34_private *VAR_8 = FUNC_3(VAR_7);
 int VAR_9;

 switch (VAR_6) {
 case 128:
  if (VAR_8->tdm_mode)
   FUNC_2(VAR_8->regmap, VAR_3,
      VAR_1, 0x00);

  VAR_9 = FUNC_2(VAR_8->regmap, VAR_2,
      VAR_0, 0);
  if (VAR_9 < 0) {
   FUNC_0(VAR_7->dev, "Cannot set Power bits %d\n", VAR_9);
   return VAR_9;
  }
  FUNC_5(5000, 5100);
 break;
 case 129:
  if (VAR_8->tdm_mode) {
   FUNC_2(VAR_8->regmap, VAR_3,
     VAR_1, VAR_1);
  }
  VAR_9 = FUNC_2(VAR_8->regmap, VAR_2,
     VAR_0, VAR_0);
 break;
 default:
  FUNC_1("Invalid event = 0x%x\n", VAR_6);
 }
 return 0;
}
