
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_ymfpci {TYPE_4__* pcm_mixer; } ;
struct TYPE_5__ {unsigned int subdevice; } ;
struct snd_kcontrol {TYPE_1__ id; } ;
struct TYPE_6__ {int * value; } ;
struct TYPE_7__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;
struct TYPE_8__ {int right; int left; } ;


 struct snd_ymfpci* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_0,
      struct snd_ctl_elem_value *VAR_1)
{
 struct snd_ymfpci *VAR_2 = FUNC_0(VAR_0);
 unsigned int VAR_3 = VAR_0->id.subdevice;

 VAR_1->value.integer.value[0] = VAR_2->pcm_mixer[VAR_3].left;
 VAR_1->value.integer.value[1] = VAR_2->pcm_mixer[VAR_3].right;
 return 0;
}
