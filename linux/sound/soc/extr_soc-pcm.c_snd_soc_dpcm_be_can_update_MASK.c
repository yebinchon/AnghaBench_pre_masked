
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* dpcm; } ;
struct TYPE_2__ {scalar_t__ runtime_update; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_0(struct snd_soc_pcm_runtime *VAR_2,
  struct snd_soc_pcm_runtime *VAR_3, int VAR_4)
{
 if ((VAR_2->dpcm[VAR_4].runtime_update == VAR_1) ||
    ((VAR_2->dpcm[VAR_4].runtime_update == VAR_0) &&
    VAR_3->dpcm[VAR_4].runtime_update))
  return 1;
 return 0;
}
