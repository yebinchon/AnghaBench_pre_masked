
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_ymfpci_pcm {int use_441_slot; scalar_t__ last_pos; scalar_t__ period_pos; int buffer_size; int period_size; } ;
struct snd_ymfpci {scalar_t__ pcm; int card; TYPE_1__* pcm_mixer; } ;
struct snd_pcm_substream {scalar_t__ pcm; size_t number; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {unsigned int channels; int buffer_size; int period_size; struct snd_ymfpci_pcm* private_data; } ;
struct snd_kcontrol {int id; TYPE_2__* vd; } ;
struct TYPE_4__ {int access; } ;
struct TYPE_3__ {struct snd_kcontrol* ctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *) ;
 struct snd_ymfpci* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_ymfpci_pcm*,unsigned int,struct snd_pcm_runtime*,int) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_2)
{
 struct snd_ymfpci *VAR_3 = FUNC_1(VAR_2);
 struct snd_pcm_runtime *VAR_4 = VAR_2->runtime;
 struct snd_ymfpci_pcm *VAR_5 = VAR_4->private_data;
 struct snd_kcontrol *VAR_6;
 unsigned int VAR_7;

 VAR_5->period_size = VAR_4->period_size;
 VAR_5->buffer_size = VAR_4->buffer_size;
 VAR_5->period_pos = 0;
 VAR_5->last_pos = 0;
 for (VAR_7 = 0; VAR_7 < VAR_4->channels; VAR_7++)
  FUNC_2(VAR_5, VAR_7, VAR_4,
       VAR_2->pcm == VAR_3->pcm);

 if (VAR_2->pcm == VAR_3->pcm && !VAR_5->use_441_slot) {
  VAR_6 = VAR_3->pcm_mixer[VAR_2->number].ctl;
  VAR_6->vd[0].access &= ~VAR_0;
  FUNC_0(VAR_3->card, VAR_1, &VAR_6->id);
 }
 return 0;
}
