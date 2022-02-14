
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {struct oxygen* private_data; } ;
struct TYPE_4__ {int max; int min; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_info {TYPE_2__ value; int count; int type; } ;
struct TYPE_6__ {int dac_volume_max; int dac_volume_min; int dac_channels_mixer; } ;
struct oxygen {TYPE_3__ model; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct snd_kcontrol *VAR_1,
      struct snd_ctl_elem_info *VAR_2)
{
 struct oxygen *VAR_3 = VAR_1->private_data;

 VAR_2->type = VAR_0;
 VAR_2->count = VAR_3->model.dac_channels_mixer;
 VAR_2->value.integer.min = VAR_3->model.dac_volume_min;
 VAR_2->value.integer.max = VAR_3->model.dac_volume_max;
 return 0;
}
