
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int * mixplayb; TYPE_4__* dma_adb; struct pcm_vol* pcm_vol; } ;
typedef TYPE_5__ vortex_t ;
struct TYPE_9__ {int subdevice; } ;
struct snd_kcontrol {TYPE_1__ id; } ;
struct TYPE_10__ {unsigned char* value; } ;
struct TYPE_11__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;
struct pcm_vol {unsigned char* vol; size_t dma; int* mixin; scalar_t__ active; } ;
struct TYPE_12__ {int nr_ch; } ;


 scalar_t__ FUNC_0 (TYPE_5__*) ;
 TYPE_5__* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (TYPE_5__*,int ,int,unsigned char) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0,
    struct snd_ctl_elem_value *VAR_1)
{
 int VAR_2;
 int VAR_3 = 0;
 int VAR_4;
 unsigned char VAR_5;
 vortex_t *VAR_6 = FUNC_1(VAR_0);
 int VAR_7 = VAR_0->id.subdevice;
 struct pcm_vol *VAR_8 = &VAR_6->pcm_vol[VAR_7];
 int VAR_9 = (FUNC_0(VAR_6) ? 4 : 2);
 for (VAR_2 = 0; VAR_2 < VAR_9; VAR_2++) {
  if (VAR_8->vol[VAR_2] != VAR_1->value.integer.value[VAR_2]) {
   VAR_8->vol[VAR_2] = VAR_1->value.integer.value[VAR_2];
   if (VAR_8->active) {
    switch (VAR_6->dma_adb[VAR_8->dma].nr_ch) {
    case 1:
     VAR_4 = VAR_8->mixin[0];
     break;
    case 2:
    default:
     VAR_4 = VAR_8->mixin[(VAR_2 < 2) ? VAR_2 : (VAR_2 - 2)];
     break;
    case 4:
     VAR_4 = VAR_8->mixin[VAR_2];
     break;
    }
    VAR_5 = VAR_8->vol[VAR_2];
    FUNC_2(VAR_6,
     VAR_6->mixplayb[VAR_2], VAR_4, VAR_5);
   }
   VAR_3 = 1;
  }
 }
 return VAR_3;
}
