
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {struct pcm_vol* pcm_vol; } ;
typedef TYPE_4__ vortex_t ;
struct TYPE_9__ {int subdevice; } ;
struct snd_kcontrol {TYPE_3__ id; } ;
struct TYPE_7__ {int * value; } ;
struct TYPE_8__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct pcm_vol {int * vol; } ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 TYPE_4__* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
    struct snd_ctl_elem_value *VAR_1)
{
 int VAR_2;
 vortex_t *VAR_3 = FUNC_1(VAR_0);
 int VAR_4 = VAR_0->id.subdevice;
 struct pcm_vol *VAR_5 = &VAR_3->pcm_vol[VAR_4];
 int VAR_6 = (FUNC_0(VAR_3) ? 4 : 2);
 for (VAR_2 = 0; VAR_2 < VAR_6; VAR_2++)
  VAR_1->value.integer.value[VAR_2] = VAR_5->vol[VAR_2];
 return 0;
}
