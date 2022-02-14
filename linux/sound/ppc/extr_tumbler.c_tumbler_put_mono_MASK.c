
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tumbler_mono_vol {unsigned int max; size_t index; } ;
struct snd_pmac {struct pmac_tumbler* mixer_data; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {unsigned int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct pmac_tumbler {unsigned int* mono_vol; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_pmac* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct pmac_tumbler*,struct tumbler_mono_vol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_2,
       struct snd_ctl_elem_value *VAR_3)
{
 struct tumbler_mono_vol *VAR_4 = (struct tumbler_mono_vol *)VAR_2->private_value;
 struct snd_pmac *VAR_5 = FUNC_0(VAR_2);
 struct pmac_tumbler *VAR_6;
 unsigned int VAR_7;
 int VAR_8;

 if (! (VAR_6 = VAR_5->mixer_data))
  return -VAR_1;
 VAR_7 = VAR_3->value.integer.value[0];
 if (VAR_7 >= VAR_4->max)
  return -VAR_0;
 VAR_8 = VAR_6->mono_vol[VAR_4->index] != VAR_7;
 if (VAR_8) {
  VAR_6->mono_vol[VAR_4->index] = VAR_7;
  FUNC_1(VAR_6, VAR_4);
 }
 return VAR_8;
}
