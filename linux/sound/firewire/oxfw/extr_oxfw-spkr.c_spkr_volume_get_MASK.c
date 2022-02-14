
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_oxfw {struct fw_spkr* spec; } ;
struct snd_kcontrol {struct snd_oxfw* private_data; } ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct fw_spkr {unsigned int mixer_channels; int * volume; } ;


 size_t* VAR_0 ;

__attribute__((used)) static int FUNC_0(struct snd_kcontrol *VAR_1,
      struct snd_ctl_elem_value *VAR_2)
{
 struct snd_oxfw *VAR_3 = VAR_1->private_data;
 struct fw_spkr *VAR_4 = VAR_3->spec;
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4->mixer_channels; ++VAR_5)
  VAR_2->value.integer.value[VAR_0[VAR_5]] = VAR_4->volume[VAR_5];

 return 0;
}
