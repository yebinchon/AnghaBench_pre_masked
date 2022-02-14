
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tumbler_mono_vol {size_t index; } ;
struct snd_pmac {struct pmac_tumbler* mixer_data; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct pmac_tumbler {int * mono_vol; } ;


 int VAR_0 ;
 struct snd_pmac* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_1,
       struct snd_ctl_elem_value *VAR_2)
{
 struct tumbler_mono_vol *VAR_3 = (struct tumbler_mono_vol *)VAR_1->private_value;
 struct snd_pmac *VAR_4 = FUNC_0(VAR_1);
 struct pmac_tumbler *VAR_5;
 if (! (VAR_5 = VAR_4->mixer_data))
  return -VAR_0;
 VAR_2->value.integer.value[0] = VAR_5->mono_vol[VAR_3->index];
 return 0;
}
