
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_soc_pcm_runtime {struct snd_pcm* pcm; TYPE_1__* card; } ;
struct snd_pcm {TYPE_3__* streams; } ;
struct snd_card {int dev; } ;
struct TYPE_8__ {int buffer_bytes_max; } ;
struct TYPE_7__ {TYPE_2__* substream; } ;
struct TYPE_6__ {int dma_buffer; } ;
struct TYPE_5__ {struct snd_card* snd_card; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ) ;
 TYPE_4__ VAR_3 ;
 int FUNC_3 (int ,int ,int ,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_pcm_runtime *VAR_4)
{
 struct snd_card *VAR_5 = VAR_4->card->snd_card;
 struct snd_pcm *VAR_6 = VAR_4->pcm;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_5->dev, FUNC_0(36));
 if (VAR_7)
  return VAR_7;





 if (VAR_6->streams[VAR_2].substream) {
  VAR_7 = FUNC_3(VAR_0, VAR_5->dev,
   VAR_3.buffer_bytes_max,
   &VAR_6->streams[VAR_2].substream->dma_buffer);
  if (VAR_7) {
   FUNC_1(VAR_5->dev, "can't alloc playback dma buffer\n");
   return VAR_7;
  }
 }

 if (VAR_6->streams[VAR_1].substream) {
  VAR_7 = FUNC_3(VAR_0, VAR_5->dev,
   VAR_3.buffer_bytes_max,
   &VAR_6->streams[VAR_1].substream->dma_buffer);
  if (VAR_7) {
   FUNC_1(VAR_5->dev, "can't alloc capture dma buffer\n");
   FUNC_4(&VAR_6->streams[VAR_2].substream->dma_buffer);
   return VAR_7;
  }
 }

 return 0;
}
