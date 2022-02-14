
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct dapm_kcontrol_data {TYPE_1__* widget; } ;
struct TYPE_2__ {int power; } ;


 struct dapm_kcontrol_data* FUNC_0 (struct snd_kcontrol const*) ;

__attribute__((used)) static bool FUNC_1(const struct snd_kcontrol *VAR_0)
{
 struct dapm_kcontrol_data *VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1->widget)
  return 1;

 return VAR_1->widget->power;
}
