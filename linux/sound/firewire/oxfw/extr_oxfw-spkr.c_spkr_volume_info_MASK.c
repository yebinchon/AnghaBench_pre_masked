
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_oxfw {struct fw_spkr* spec; } ;
struct snd_kcontrol {struct snd_oxfw* private_data; } ;
struct TYPE_4__ {int max; int min; } ;
struct TYPE_3__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_info {TYPE_1__ value; int count; int type; } ;
struct fw_spkr {int volume_max; int volume_min; int mixer_channels; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct snd_kcontrol *VAR_1,
       struct snd_ctl_elem_info *VAR_2)
{
 struct snd_oxfw *VAR_3 = VAR_1->private_data;
 struct fw_spkr *VAR_4 = VAR_3->spec;

 VAR_2->type = VAR_0;
 VAR_2->count = VAR_4->mixer_channels;
 VAR_2->value.integer.min = VAR_4->volume_min;
 VAR_2->value.integer.max = VAR_4->volume_max;

 return 0;
}
