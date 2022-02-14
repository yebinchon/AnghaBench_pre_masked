
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {TYPE_1__* dev; } ;
struct snd_kcontrol {int dummy; } ;
struct arizona {int regmap; } ;
struct TYPE_2__ {int parent; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 struct arizona* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 struct snd_soc_component* FUNC_3 (int ) ;
 int FUNC_4 (struct snd_soc_dapm_widget*,unsigned int) ;
 int FUNC_5 (struct snd_soc_dapm_widget*,struct snd_kcontrol*,int) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dapm_widget *VAR_3,
     struct snd_kcontrol *VAR_4, int VAR_5)
{
 struct snd_soc_component *VAR_6 = FUNC_3(VAR_3->dapm);
 struct arizona *VAR_7 = FUNC_1(VAR_6->dev->parent);
 unsigned int VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_7->regmap, VAR_2, &VAR_8);
 if (VAR_9 != 0) {
  FUNC_0(VAR_6->dev, "Failed to read SYSCLK state: %d\n", VAR_9);
  return VAR_9;
 }

 VAR_8 = (VAR_8 & VAR_0) >> VAR_1;

 FUNC_4(VAR_3, VAR_8);

 return FUNC_5(VAR_3, VAR_4, VAR_5);
}
