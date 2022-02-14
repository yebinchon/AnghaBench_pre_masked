
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int channels; } ;
struct snd_emu10k1_voice {unsigned int number; TYPE_1__* epcm; } ;
struct snd_emu10k1_pcm_mixer {int* attn; } ;
struct snd_emu10k1 {int dummy; } ;
struct TYPE_2__ {struct snd_pcm_substream* substream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_emu10k1*,int ,unsigned int,int) ;
 int FUNC_1 (struct snd_emu10k1*,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct snd_emu10k1 *VAR_4, struct snd_emu10k1_voice *VAR_5,
            int VAR_6, int VAR_7,
            struct snd_emu10k1_pcm_mixer *VAR_8)
{
 struct snd_pcm_substream *VAR_9;
 struct snd_pcm_runtime *VAR_10;
 unsigned int VAR_11, VAR_12;
 unsigned int VAR_13, VAR_14;

 if (VAR_5 == ((void*)0))
  return;
 VAR_9 = VAR_5->epcm->substream;
 VAR_10 = VAR_9->runtime;
 VAR_13 = VAR_5->number;

 VAR_11 = VAR_7 ? 0 : 0x00ff;
 VAR_14 = VAR_10->channels == 2 ? (VAR_6 ? 1 : 2) : 0;
 VAR_12 = VAR_8 != ((void*)0) ? (VAR_8->attn[VAR_14] << 16) : 0;
 FUNC_0(VAR_4, VAR_2, VAR_13, VAR_11);
 FUNC_0(VAR_4, VAR_3, VAR_13, VAR_12 | 0xffff);
 FUNC_0(VAR_4, VAR_0, VAR_13, VAR_12 | 0xffff);
 FUNC_0(VAR_4, VAR_1, VAR_13, 0x7f7f);
 FUNC_1(VAR_4, VAR_13);
}
