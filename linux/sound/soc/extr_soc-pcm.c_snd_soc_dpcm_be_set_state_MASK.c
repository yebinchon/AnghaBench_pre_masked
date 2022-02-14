
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* dpcm; } ;
typedef enum snd_soc_dpcm_state { ____Placeholder_snd_soc_dpcm_state } snd_soc_dpcm_state ;
struct TYPE_2__ {int state; } ;



void FUNC_0(struct snd_soc_pcm_runtime *VAR_0,
  int VAR_1, enum snd_soc_dpcm_state VAR_2)
{
 VAR_0->dpcm[VAR_1].state = VAR_2;
}
