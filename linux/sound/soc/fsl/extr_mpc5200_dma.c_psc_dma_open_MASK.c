
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_pcm_runtime {int cpu_dai; } ;
struct snd_pcm_substream {TYPE_3__* pcm; TYPE_1__* pstr; struct snd_soc_pcm_runtime* private_data; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dummy; } ;
struct psc_dma_stream {struct snd_pcm_substream* stream; } ;
struct psc_dma {struct psc_dma_stream playback; struct psc_dma_stream capture; int dev; } ;
struct TYPE_6__ {TYPE_2__* card; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {scalar_t__ stream; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,struct snd_pcm_substream*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 int FUNC_2 (struct snd_pcm_runtime*,int ) ;
 struct psc_dma* FUNC_3 (int ) ;
 int FUNC_4 (struct snd_pcm_substream*,int *) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_3)
{
 struct snd_pcm_runtime *VAR_4 = VAR_3->runtime;
 struct snd_soc_pcm_runtime *VAR_5 = VAR_3->private_data;
 struct psc_dma *VAR_6 = FUNC_3(VAR_5->cpu_dai);
 struct psc_dma_stream *VAR_7;
 int VAR_8;

 FUNC_0(VAR_6->dev, "psc_dma_open(substream=%p)\n", VAR_3);

 if (VAR_3->pstr->stream == VAR_1)
  VAR_7 = &VAR_6->capture;
 else
  VAR_7 = &VAR_6->playback;

 FUNC_4(VAR_3, &VAR_2);

 VAR_8 = FUNC_2(VAR_4,
  VAR_0);
 if (VAR_8 < 0) {
  FUNC_1(VAR_3->pcm->card->dev, "invalid buffer size\n");
  return VAR_8;
 }

 VAR_7->stream = VAR_3;
 return 0;
}
