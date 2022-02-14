
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
struct snd_ac97 {int spdif_status; int reg_mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct snd_ac97* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0, struct snd_ctl_elem_value *VAR_1)
{
 struct snd_ac97 *VAR_2 = FUNC_2(VAR_0);

 FUNC_0(&VAR_2->reg_mutex);
 VAR_1->value.iec958.status[0] = VAR_2->spdif_status & 0xff;
 VAR_1->value.iec958.status[1] = (VAR_2->spdif_status >> 8) & 0xff;
 VAR_1->value.iec958.status[2] = (VAR_2->spdif_status >> 16) & 0xff;
 VAR_1->value.iec958.status[3] = (VAR_2->spdif_status >> 24) & 0xff;
 FUNC_1(&VAR_2->reg_mutex);
 return 0;
}
