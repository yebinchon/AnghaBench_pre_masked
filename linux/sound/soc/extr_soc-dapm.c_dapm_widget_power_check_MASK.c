
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int power_checked; int new_power; int (* power_check ) (struct snd_soc_dapm_widget*) ;scalar_t__ force; } ;


 int FUNC_0 (struct snd_soc_dapm_widget*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dapm_widget *VAR_0)
{
 if (VAR_0->power_checked)
  return VAR_0->new_power;

 if (VAR_0->force)
  VAR_0->new_power = 1;
 else
  VAR_0->new_power = VAR_0->power_check(VAR_0);

 VAR_0->power_checked = 1;

 return VAR_0->new_power;
}
