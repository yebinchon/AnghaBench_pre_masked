
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_2__ {int extern_boost; } ;
struct cs35l36_private {int regmap; TYPE_1__ pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int ,int) ;
 struct cs35l36_private* FUNC_2 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dapm_widget *VAR_6,
          struct snd_kcontrol *VAR_7, int VAR_8)
{
 struct snd_soc_component *VAR_9 =
   FUNC_3(VAR_6->dapm);
 struct cs35l36_private *VAR_10 =
   FUNC_2(VAR_9);

 switch (VAR_8) {
 case 128:
  if (!VAR_10->pdata.extern_boost)
   FUNC_1(VAR_10->regmap, VAR_4,
        VAR_2,
        VAR_1 <<
        VAR_3);
  break;
 case 129:
  if (!VAR_10->pdata.extern_boost)
   FUNC_1(VAR_10->regmap, VAR_4,
        VAR_2,
        VAR_0 <<
        VAR_3);
  break;
 default:
  FUNC_0(VAR_9->dev, "Invalid event = 0x%x\n", VAR_8);
  return -VAR_5;
 }

 return 0;
}
