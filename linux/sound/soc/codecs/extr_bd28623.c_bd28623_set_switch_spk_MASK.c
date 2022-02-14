
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {scalar_t__* value; } ;
struct TYPE_3__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;
struct bd28623_priv {scalar_t__ switch_spk; int mute_gpio; } ;


 int FUNC_0 (int ,int) ;
 struct bd28623_priv* FUNC_1 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0,
      struct snd_ctl_elem_value *VAR_1)
{
 struct snd_soc_component *VAR_2 =
  FUNC_2(VAR_0);
 struct bd28623_priv *VAR_3 = FUNC_1(VAR_2);

 if (VAR_3->switch_spk == VAR_1->value.integer.value[0])
  return 0;

 VAR_3->switch_spk = VAR_1->value.integer.value[0];

 FUNC_0(VAR_3->mute_gpio, VAR_3->switch_spk ? 0 : 1);

 return 0;
}
