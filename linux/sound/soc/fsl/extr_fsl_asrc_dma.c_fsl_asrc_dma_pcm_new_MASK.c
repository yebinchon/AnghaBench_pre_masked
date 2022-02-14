
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_pcm_runtime {struct snd_pcm* pcm; TYPE_1__* card; } ;
struct snd_pcm_substream {int dma_buffer; } ;
struct snd_pcm {TYPE_3__* streams; TYPE_2__* card; } ;
struct snd_card {int dev; } ;
struct TYPE_6__ {struct snd_pcm_substream* substream; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {struct snd_card* snd_card; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_pcm_runtime *VAR_4)
{
 struct snd_card *VAR_5 = VAR_4->card->snd_card;
 struct snd_pcm_substream *VAR_6;
 struct snd_pcm *VAR_7 = VAR_4->pcm;
 int VAR_8, VAR_9;

 VAR_8 = FUNC_2(VAR_5->dev, FUNC_0(32));
 if (VAR_8) {
  FUNC_1(VAR_5->dev, "failed to set DMA mask\n");
  return VAR_8;
 }

 for (VAR_9 = VAR_3; VAR_9 <= VAR_2; VAR_9++) {
  VAR_6 = VAR_7->streams[VAR_9].substream;
  if (!VAR_6)
   continue;

  VAR_8 = FUNC_3(VAR_1, VAR_7->card->dev,
    VAR_0, &VAR_6->dma_buffer);
  if (VAR_8) {
   FUNC_1(VAR_5->dev, "failed to allocate DMA buffer\n");
   goto err;
  }
 }

 return 0;

err:
 if (--VAR_9 == 0 && VAR_7->streams[VAR_9].substream)
  FUNC_4(&VAR_7->streams[VAR_9].substream->dma_buffer);

 return VAR_8;
}
