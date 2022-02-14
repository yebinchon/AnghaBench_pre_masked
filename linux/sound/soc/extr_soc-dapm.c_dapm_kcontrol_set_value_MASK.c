
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct dapm_kcontrol_data {unsigned int value; TYPE_1__* widget; } ;
struct TYPE_2__ {unsigned int on_val; } ;


 struct dapm_kcontrol_data* FUNC_0 (struct snd_kcontrol const*) ;

__attribute__((used)) static bool FUNC_1(const struct snd_kcontrol *VAR_0,
 unsigned int VAR_1)
{
 struct dapm_kcontrol_data *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2->value == VAR_1)
  return 0;

 if (VAR_2->widget)
  VAR_2->widget->on_val = VAR_1;

 VAR_2->value = VAR_1;

 return 1;
}
