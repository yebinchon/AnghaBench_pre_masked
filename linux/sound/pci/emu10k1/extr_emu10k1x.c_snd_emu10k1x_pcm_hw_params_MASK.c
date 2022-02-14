
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* pcm; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct emu10k1x_pcm* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct emu10k1x_pcm {TYPE_2__* voice; TYPE_3__* emu; } ;
struct TYPE_6__ {TYPE_2__* voices; } ;
struct TYPE_5__ {int use; struct emu10k1x_pcm* epcm; } ;
struct TYPE_4__ {size_t device; } ;


 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_substream*,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0,
          struct snd_pcm_hw_params *VAR_1)
{
 struct snd_pcm_runtime *VAR_2 = VAR_0->runtime;
 struct emu10k1x_pcm *VAR_3 = VAR_2->private_data;

 if (! VAR_3->voice) {
  VAR_3->voice = &VAR_3->emu->voices[VAR_0->pcm->device];
  VAR_3->voice->use = 1;
  VAR_3->voice->epcm = VAR_3;
 }

 return FUNC_1(VAR_0,
     FUNC_0(VAR_1));
}
