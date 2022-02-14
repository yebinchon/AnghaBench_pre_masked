
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {size_t number; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int channels; struct snd_emu10k1_pcm* private_data; } ;
struct snd_emu10k1_pcm {unsigned int start_addr; scalar_t__* voices; scalar_t__ extra; } ;
struct snd_emu10k1 {int * pcm_mixer; } ;


 int FUNC_0 (struct snd_emu10k1*,int,int,scalar_t__,unsigned int,unsigned int,int *) ;
 unsigned int FUNC_1 (struct snd_pcm_substream*) ;
 unsigned int FUNC_2 (struct snd_pcm_substream*) ;
 struct snd_emu10k1* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_0)
{
 struct snd_emu10k1 *VAR_1 = FUNC_3(VAR_0);
 struct snd_pcm_runtime *VAR_2 = VAR_0->runtime;
 struct snd_emu10k1_pcm *VAR_3 = VAR_2->private_data;
 unsigned int VAR_4, VAR_5;

 VAR_4 = VAR_3->start_addr;
 VAR_5 = FUNC_2(VAR_0);
 if (VAR_2->channels == 2) {
  VAR_4 >>= 1;
  VAR_5 >>= 1;
 }
 VAR_5 += VAR_4;
 FUNC_0(VAR_1, 1, 1, VAR_3->extra,
       VAR_4, VAR_5, ((void*)0));
 VAR_4 = VAR_3->start_addr;
 VAR_5 = VAR_3->start_addr + FUNC_1(VAR_0);
 FUNC_0(VAR_1, 1, 0, VAR_3->voices[0],
       VAR_4, VAR_5,
       &VAR_1->pcm_mixer[VAR_0->number]);
 if (VAR_3->voices[1])
  FUNC_0(VAR_1, 0, 0, VAR_3->voices[1],
        VAR_4, VAR_5,
        &VAR_1->pcm_mixer[VAR_0->number]);
 return 0;
}
