
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct snd_soc_pcm_runtime {struct snd_pcm* pcm; struct snd_soc_dai* cpu_dai; TYPE_1__* card; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm {TYPE_4__* streams; TYPE_2__* card; } ;
struct snd_card {int dev; } ;
struct TYPE_10__ {size_t buffer_bytes_max; } ;
struct TYPE_9__ {TYPE_3__* substream; } ;
struct TYPE_8__ {int dma_buffer; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {struct snd_card* snd_card; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (int ,char*,struct snd_card*,struct snd_soc_dai*,struct snd_pcm*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ) ;
 TYPE_5__ VAR_5 ;
 int FUNC_4 (int ,int ,size_t,int *) ;
 int FUNC_5 (int *) ;
 struct snd_soc_component* FUNC_6 (struct snd_soc_pcm_runtime*,int ) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_pcm_runtime *VAR_6)
{
 struct snd_card *VAR_7 = VAR_6->card->snd_card;
 struct snd_soc_component *VAR_8 = FUNC_6(VAR_6, VAR_0);
 struct snd_soc_dai *VAR_9 = VAR_6->cpu_dai;
 struct snd_pcm *VAR_10 = VAR_6->pcm;
 size_t VAR_11 = VAR_5.buffer_bytes_max;
 int VAR_12;

 FUNC_1(VAR_8->dev, "psc_dma_new(card=%p, dai=%p, pcm=%p)\n",
  VAR_7, VAR_9, VAR_10);

 VAR_12 = FUNC_3(VAR_7->dev, FUNC_0(32));
 if (VAR_12)
  return VAR_12;

 if (VAR_10->streams[VAR_4].substream) {
  VAR_12 = FUNC_4(VAR_2, VAR_10->card->dev,
    VAR_11, &VAR_10->streams[VAR_4].substream->dma_buffer);
  if (VAR_12)
   goto playback_alloc_err;
 }

 if (VAR_10->streams[VAR_3].substream) {
  VAR_12 = FUNC_4(VAR_2, VAR_10->card->dev,
    VAR_11, &VAR_10->streams[VAR_3].substream->dma_buffer);
  if (VAR_12)
   goto capture_alloc_err;
 }

 return 0;

 capture_alloc_err:
 if (VAR_10->streams[VAR_4].substream)
  FUNC_5(&VAR_10->streams[VAR_4].substream->dma_buffer);

 playback_alloc_err:
 FUNC_2(VAR_7->dev, "Cannot allocate buffer(s)\n");

 return -VAR_1;
}
