
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_pcm_runtime {struct snd_pcm* pcm; TYPE_1__* card; } ;
struct snd_pcm_substream {int dma_buffer; } ;
struct snd_pcm {TYPE_2__* streams; } ;
struct snd_card {int dev; } ;
struct TYPE_6__ {int buffer_bytes_max; } ;
struct TYPE_5__ {struct snd_pcm_substream* substream; } ;
struct TYPE_4__ {struct snd_card* snd_card; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,int *) ;
 int FUNC_4 (int *) ;
 TYPE_3__ VAR_3 ;

__attribute__((used)) static int FUNC_5(struct snd_soc_pcm_runtime *VAR_4)
{
 struct snd_card *VAR_5 = VAR_4->card->snd_card;
 struct snd_pcm *VAR_6 = VAR_4->pcm;
 struct snd_pcm_substream *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_5->dev, FUNC_0(32));
 if (VAR_8)
  return VAR_8;

 VAR_7 = VAR_6->streams[VAR_2].substream;
 if (VAR_7) {
  VAR_8 = FUNC_3(VAR_0, VAR_5->dev,
       VAR_3.buffer_bytes_max,
       &VAR_7->dma_buffer);
  if (VAR_8) {
   FUNC_1(VAR_5->dev,
    "can't alloc playback dma buffer: %d\n", VAR_8);
   return VAR_8;
  }
 }

 VAR_7 = VAR_6->streams[VAR_1].substream;
 if (VAR_7) {
  VAR_8 = FUNC_3(VAR_0, VAR_5->dev,
       VAR_3.buffer_bytes_max,
       &VAR_7->dma_buffer);
  if (VAR_8) {
   FUNC_1(VAR_5->dev,
    "can't alloc capture dma buffer: %d\n", VAR_8);
   FUNC_4(&VAR_6->streams[VAR_2].substream->dma_buffer);
   return VAR_8;
  }
 }

 return 0;
}
