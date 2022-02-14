
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tse850_priv {int loop1_cache; } ;
struct snd_soc_dapm_context {struct snd_soc_card* card; } ;
struct snd_soc_card {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int * item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 struct tse850_priv* FUNC_0 (struct snd_soc_card*) ;
 struct snd_soc_dapm_context* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
      struct snd_ctl_elem_value *VAR_1)
{
 struct snd_soc_dapm_context *VAR_2 = FUNC_1(VAR_0);
 struct snd_soc_card *VAR_3 = VAR_2->card;
 struct tse850_priv *VAR_4 = FUNC_0(VAR_3);

 VAR_1->value.enumerated.item[0] = VAR_4->loop1_cache;

 return 0;
}
