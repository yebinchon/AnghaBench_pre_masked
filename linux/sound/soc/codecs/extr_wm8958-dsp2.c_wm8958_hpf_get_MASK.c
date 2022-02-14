
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wm8994_priv {int * hpf2_ena; int * hpf1_ena; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_4__ {int * value; } ;
struct TYPE_3__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;


 struct wm8994_priv* FUNC_0 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
     struct snd_ctl_elem_value *VAR_1)
{
 int VAR_2 = VAR_0->private_value;
 struct snd_soc_component *VAR_3 = FUNC_1(VAR_0);
 struct wm8994_priv *VAR_4 = FUNC_0(VAR_3);

 if (VAR_2 < 3)
  VAR_1->value.integer.value[0] = VAR_4->hpf1_ena[VAR_2 % 3];
 else
  VAR_1->value.integer.value[0] = VAR_4->hpf2_ena[VAR_2 % 3];

 return 0;
}
