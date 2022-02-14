
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int dummy; } ;
struct list_head {int dummy; } ;
struct dapm_kcontrol_data {struct list_head paths; } ;


 struct dapm_kcontrol_data* FUNC_0 (struct snd_kcontrol const*) ;

__attribute__((used)) static struct list_head *FUNC_1(
 const struct snd_kcontrol *VAR_0)
{
 struct dapm_kcontrol_data *VAR_1 = FUNC_0(VAR_0);

 return &VAR_1->paths;
}
