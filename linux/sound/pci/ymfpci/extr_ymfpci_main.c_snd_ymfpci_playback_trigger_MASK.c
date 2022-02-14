
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_ymfpci_pcm {int running; TYPE_4__** voices; int use_441_slot; } ;
struct snd_ymfpci {int card; int reg_lock; void** ctrl_playback; TYPE_2__* pcm_mixer; int pcm; } ;
struct snd_pcm_substream {size_t number; int pcm; TYPE_1__* runtime; } ;
struct snd_kcontrol {int id; TYPE_3__* vd; } ;
struct TYPE_8__ {int number; int bank_addr; } ;
struct TYPE_7__ {int access; } ;
struct TYPE_6__ {struct snd_kcontrol* ctl; } ;
struct TYPE_5__ {struct snd_ymfpci_pcm* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *) ;
 struct snd_ymfpci* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_3,
           int VAR_4)
{
 struct snd_ymfpci *VAR_5 = FUNC_2(VAR_3);
 struct snd_ymfpci_pcm *VAR_6 = VAR_3->runtime->private_data;
 struct snd_kcontrol *VAR_7 = ((void*)0);
 int VAR_8 = 0;

 FUNC_3(&VAR_5->reg_lock);
 if (VAR_6->voices[0] == ((void*)0)) {
  VAR_8 = -VAR_0;
  goto __unlock;
 }
 switch (VAR_4) {
 case 130:
 case 132:
 case 131:
  VAR_5->ctrl_playback[VAR_6->voices[0]->number + 1] = FUNC_0(VAR_6->voices[0]->bank_addr);
  if (VAR_6->voices[1] != ((void*)0) && !VAR_6->use_441_slot)
   VAR_5->ctrl_playback[VAR_6->voices[1]->number + 1] = FUNC_0(VAR_6->voices[1]->bank_addr);
  VAR_6->running = 1;
  break;
 case 129:
  if (VAR_3->pcm == VAR_5->pcm && !VAR_6->use_441_slot) {
   VAR_7 = VAR_5->pcm_mixer[VAR_3->number].ctl;
   VAR_7->vd[0].access |= VAR_1;
  }

 case 133:
 case 128:
  VAR_5->ctrl_playback[VAR_6->voices[0]->number + 1] = 0;
  if (VAR_6->voices[1] != ((void*)0) && !VAR_6->use_441_slot)
   VAR_5->ctrl_playback[VAR_6->voices[1]->number + 1] = 0;
  VAR_6->running = 0;
  break;
 default:
  VAR_8 = -VAR_0;
  break;
 }
      __unlock:
 FUNC_4(&VAR_5->reg_lock);
 if (VAR_7)
  FUNC_1(VAR_5->card, VAR_2, &VAR_7->id);
 return VAR_8;
}
