
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {int cpu_dai; } ;
struct snd_pcm_substream {int runtime; TYPE_1__* pstr; struct snd_soc_pcm_runtime* private_data; } ;
struct psc_dma_stream {int period_current; int period_bytes; } ;
struct psc_dma {struct psc_dma_stream playback; struct psc_dma_stream capture; } ;
typedef int snd_pcm_uframes_t ;
typedef int dma_addr_t ;
struct TYPE_2__ {scalar_t__ stream; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 struct psc_dma* FUNC_1 (int ) ;

__attribute__((used)) static snd_pcm_uframes_t
FUNC_2(struct snd_pcm_substream *VAR_1)
{
 struct snd_soc_pcm_runtime *VAR_2 = VAR_1->private_data;
 struct psc_dma *VAR_3 = FUNC_1(VAR_2->cpu_dai);
 struct psc_dma_stream *VAR_4;
 dma_addr_t VAR_5;

 if (VAR_1->pstr->stream == VAR_0)
  VAR_4 = &VAR_3->capture;
 else
  VAR_4 = &VAR_3->playback;

 VAR_5 = VAR_4->period_current * VAR_4->period_bytes;

 return FUNC_0(VAR_1->runtime, VAR_5);
}
