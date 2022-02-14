
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_widget {int on_val; int shift; int regulator; int name; TYPE_1__* dapm; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;

int FUNC_6(struct snd_soc_dapm_widget *VAR_1,
     struct snd_kcontrol *VAR_2, int VAR_3)
{
 int VAR_4;

 FUNC_5(VAR_1->dapm);

 if (FUNC_0(VAR_3)) {
  if (VAR_1->on_val & VAR_0) {
   VAR_4 = FUNC_2(VAR_1->regulator, 0);
   if (VAR_4 != 0)
    FUNC_1(VAR_1->dapm->dev,
      "ASoC: Failed to unbypass %s: %d\n",
      VAR_1->name, VAR_4);
  }

  return FUNC_4(VAR_1->regulator);
 } else {
  if (VAR_1->on_val & VAR_0) {
   VAR_4 = FUNC_2(VAR_1->regulator, 1);
   if (VAR_4 != 0)
    FUNC_1(VAR_1->dapm->dev,
      "ASoC: Failed to bypass %s: %d\n",
      VAR_1->name, VAR_4);
  }

  return FUNC_3(VAR_1->regulator, VAR_1->shift);
 }
}
