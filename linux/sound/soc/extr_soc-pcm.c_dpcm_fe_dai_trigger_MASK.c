
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* dpcm; } ;
struct snd_pcm_substream {int stream; struct snd_soc_pcm_runtime* private_data; } ;
struct TYPE_2__ {scalar_t__ runtime_update; int trigger_pending; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_pcm_substream*,int) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_1, int VAR_2)
{
 struct snd_soc_pcm_runtime *VAR_3 = VAR_1->private_data;
 int VAR_4 = VAR_1->stream;




 if (VAR_3->dpcm[VAR_4].runtime_update != VAR_0) {
  VAR_3->dpcm[VAR_4].trigger_pending = VAR_2 + 1;
  return 0;
 }


 return FUNC_0(VAR_1, VAR_2);
}
