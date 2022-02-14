
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* status; } ;
struct TYPE_4__ {TYPE_1__ iec958; } ;
struct snd_ctl_elem_value {TYPE_2__ value; int id; } ;
struct emu10k1x {int* spdif_bits; } ;


 unsigned int FUNC_0 (struct snd_kcontrol*,int *) ;
 struct emu10k1x* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
      struct snd_ctl_elem_value *VAR_1)
{
 struct emu10k1x *VAR_2 = FUNC_1(VAR_0);
 unsigned int VAR_3 = FUNC_0(VAR_0, &VAR_1->id);

 VAR_1->value.iec958.status[0] = (VAR_2->spdif_bits[VAR_3] >> 0) & 0xff;
 VAR_1->value.iec958.status[1] = (VAR_2->spdif_bits[VAR_3] >> 8) & 0xff;
 VAR_1->value.iec958.status[2] = (VAR_2->spdif_bits[VAR_3] >> 16) & 0xff;
 VAR_1->value.iec958.status[3] = (VAR_2->spdif_bits[VAR_3] >> 24) & 0xff;
 return 0;
}
