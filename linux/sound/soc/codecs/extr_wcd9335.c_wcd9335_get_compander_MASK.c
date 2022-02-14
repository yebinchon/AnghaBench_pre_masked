
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wcd9335_codec {int * comp_enabled; } ;
struct soc_mixer_control {int shift; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 struct wcd9335_codec* FUNC_0 (int ) ;
 struct snd_soc_component* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
          struct snd_ctl_elem_value *VAR_1)
{

 struct snd_soc_component *VAR_2 = FUNC_1(VAR_0);
 int VAR_3 = ((struct soc_mixer_control *)VAR_0->private_value)->shift;
 struct wcd9335_codec *VAR_4 = FUNC_0(VAR_2->dev);

 VAR_1->value.integer.value[0] = VAR_4->comp_enabled[VAR_3];
 return 0;
}
