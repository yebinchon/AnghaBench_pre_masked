
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_widget {int shift; int dapm; } ;
struct snd_soc_component {TYPE_1__* dev; } ;
struct snd_kcontrol {int dummy; } ;
struct arizona {int regmap; int dev; } ;
struct TYPE_2__ {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (struct snd_soc_dapm_widget*,struct snd_kcontrol*,int) ;
 int FUNC_1 (int ,char*) ;
 struct arizona* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int,int) ;
 int FUNC_4 (struct snd_soc_component*,int ) ;
 struct snd_soc_component* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dapm_widget *VAR_4,
     struct snd_kcontrol *VAR_5,
     int VAR_6)
{
 struct snd_soc_component *VAR_7 = FUNC_5(VAR_4->dapm);
 struct arizona *VAR_8 = FUNC_2(VAR_7->dev->parent);
 int VAR_9;

 switch (VAR_6) {
 case 129:
  VAR_9 = FUNC_4(VAR_7,
            VAR_0);
  if (VAR_9 & VAR_2) {
   FUNC_1(VAR_8->dev,
     "Speaker not enabled due to temperature\n");
   return -VAR_3;
  }

  FUNC_3(VAR_8->regmap,
      VAR_1,
      1 << VAR_4->shift, 1 << VAR_4->shift);
  break;
 case 128:
  FUNC_3(VAR_8->regmap,
      VAR_1,
      1 << VAR_4->shift, 0);
  break;
 default:
  break;
 }

 return FUNC_0(VAR_4, VAR_5, VAR_6);
}
