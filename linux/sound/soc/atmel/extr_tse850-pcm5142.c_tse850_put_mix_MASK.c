
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tse850_priv {int add_cache; int add; } ;
struct snd_soc_dapm_context {struct snd_soc_card* card; } ;
struct snd_soc_card {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int FUNC_0 (int ,int) ;
 struct tse850_priv* FUNC_1 (struct snd_soc_card*) ;
 struct snd_soc_dapm_context* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (struct snd_soc_dapm_context*,struct snd_kcontrol*,int,int *) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_0,
     struct snd_ctl_elem_value *VAR_1)
{
 struct snd_soc_dapm_context *VAR_2 = FUNC_2(VAR_0);
 struct snd_soc_card *VAR_3 = VAR_2->card;
 struct tse850_priv *VAR_4 = FUNC_1(VAR_3);
 int VAR_5 = !!VAR_1->value.integer.value[0];

 if (VAR_4->add_cache == VAR_5)
  return 0;





 FUNC_0(VAR_4->add, VAR_5);
 VAR_4->add_cache = VAR_5;

 FUNC_3(VAR_2, VAR_0, VAR_5, ((void*)0));
 return 1;
}
