
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ymfpci_voice {TYPE_1__* bank; } ;
struct snd_ymfpci_pcm {scalar_t__ running; struct snd_ymfpci_voice** voices; } ;
struct snd_ymfpci {size_t active_bank; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_ymfpci_pcm* private_data; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_2__ {int start; } ;


 int FUNC_0 (int ) ;
 struct snd_ymfpci* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct snd_ymfpci *VAR_1 = FUNC_1(VAR_0);
 struct snd_pcm_runtime *VAR_2 = VAR_0->runtime;
 struct snd_ymfpci_pcm *VAR_3 = VAR_2->private_data;
 struct snd_ymfpci_voice *VAR_4 = VAR_3->voices[0];

 if (!(VAR_3->running && VAR_4))
  return 0;
 return FUNC_0(VAR_4->bank[VAR_1->active_bank].start);
}
