
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* dpcm; } ;
struct snd_pcm_substream {int dummy; } ;
typedef enum snd_soc_dpcm_update { ____Placeholder_snd_soc_dpcm_update } snd_soc_dpcm_update ;
struct TYPE_2__ {int runtime_update; scalar_t__ trigger_pending; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcm_substream*,scalar_t__) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 struct snd_pcm_substream* FUNC_3 (struct snd_soc_pcm_runtime*,int) ;

__attribute__((used)) static void FUNC_4(struct snd_soc_pcm_runtime *VAR_1,
         int VAR_2, enum snd_soc_dpcm_update VAR_3)
{
 struct snd_pcm_substream *VAR_4 =
  FUNC_3(VAR_1, VAR_2);

 FUNC_1(VAR_4);
 if (VAR_3 == VAR_0 && VAR_1->dpcm[VAR_2].trigger_pending) {
  FUNC_0(VAR_4,
           VAR_1->dpcm[VAR_2].trigger_pending - 1);
  VAR_1->dpcm[VAR_2].trigger_pending = 0;
 }
 VAR_1->dpcm[VAR_2].runtime_update = VAR_3;
 FUNC_2(VAR_4);
}
