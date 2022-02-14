
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {TYPE_1__* dev; } ;
struct snd_kcontrol {int dummy; } ;
struct arizona {int regmap; } ;
struct TYPE_3__ {int parent; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_0 (struct snd_soc_component*,int ) ;
 int FUNC_1 (struct snd_soc_component*,int ) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 struct arizona* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,char*,int) ;
 int FUNC_5 (int ,int ,unsigned int*) ;
 struct snd_soc_component* FUNC_6 (int ) ;
 int FUNC_7 (struct snd_soc_dapm_widget*,unsigned int) ;
 int FUNC_8 (struct snd_soc_dapm_widget*,struct snd_kcontrol*,int) ;

__attribute__((used)) static int FUNC_9(struct snd_soc_dapm_widget *VAR_5,
    struct snd_kcontrol *VAR_6, int VAR_7)
{
 struct snd_soc_component *VAR_8 = FUNC_6(VAR_5->dapm);
 struct arizona *VAR_9 = FUNC_3(VAR_8->dev->parent);
 unsigned int VAR_10 = 0;
 int VAR_11;

 switch (VAR_7) {
 case 128:
  VAR_11 = FUNC_5(VAR_9->regmap, VAR_3, &VAR_10);
  if (VAR_11 != 0) {
   FUNC_2(VAR_8->dev,
    "Failed to read SYSCLK state: %d\n", VAR_11);
   return -VAR_4;
  }

  VAR_10 = (VAR_10 & VAR_1) >> VAR_2;

  if (VAR_10 >= 3) {
   VAR_11 = FUNC_1(VAR_8, VAR_0);
   if (VAR_11) {
    FUNC_2(VAR_8->dev,
     "Failed to raise DVFS: %d\n", VAR_11);
    return VAR_11;
   }
  }

  FUNC_7(VAR_5, VAR_10);
  break;

 case 129:
  VAR_11 = FUNC_0(VAR_8, VAR_0);
  if (VAR_11)
   FUNC_4(VAR_8->dev,
     "Failed to lower DVFS: %d\n", VAR_11);
  break;

 default:
  break;
 }

 return FUNC_8(VAR_5, VAR_6, VAR_7);
}
