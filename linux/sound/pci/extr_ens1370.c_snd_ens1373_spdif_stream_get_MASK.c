
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* status; } ;
struct TYPE_4__ {TYPE_1__ iec958; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct ensoniq {int spdif_stream; int reg_lock; } ;


 struct ensoniq* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0,
     struct snd_ctl_elem_value *VAR_1)
{
 struct ensoniq *VAR_2 = FUNC_0(VAR_0);
 FUNC_1(&VAR_2->reg_lock);
 VAR_1->value.iec958.status[0] = (VAR_2->spdif_stream >> 0) & 0xff;
 VAR_1->value.iec958.status[1] = (VAR_2->spdif_stream >> 8) & 0xff;
 VAR_1->value.iec958.status[2] = (VAR_2->spdif_stream >> 16) & 0xff;
 VAR_1->value.iec958.status[3] = (VAR_2->spdif_stream >> 24) & 0xff;
 FUNC_2(&VAR_2->reg_lock);
 return 0;
}
