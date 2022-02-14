
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu10k1_voice {int number; int * epcm; scalar_t__ efx; scalar_t__ midi; scalar_t__ synth; scalar_t__ pcm; scalar_t__ use; int * interrupt; } ;
struct snd_emu10k1 {int voice_lock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct snd_emu10k1*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct snd_emu10k1 *VAR_1,
      struct snd_emu10k1_voice *VAR_2)
{
 unsigned long VAR_3;

 if (FUNC_0(!VAR_2))
  return -VAR_0;
 FUNC_2(&VAR_1->voice_lock, VAR_3);
 VAR_2->interrupt = ((void*)0);
 VAR_2->use = VAR_2->pcm = VAR_2->synth = VAR_2->midi = VAR_2->efx = 0;
 VAR_2->epcm = ((void*)0);
 FUNC_1(VAR_1, VAR_2->number);
 FUNC_3(&VAR_1->voice_lock, VAR_3);
 return 0;
}
