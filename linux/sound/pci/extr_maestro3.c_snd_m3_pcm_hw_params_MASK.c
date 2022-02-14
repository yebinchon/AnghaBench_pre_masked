
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_2__* pcm; TYPE_3__* runtime; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct m3_dma {int buffer_addr; } ;
struct TYPE_6__ {int dma_addr; struct m3_dma* private_data; } ;
struct TYPE_5__ {TYPE_1__* card; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_substream*,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_0,
    struct snd_pcm_hw_params *VAR_1)
{
 struct m3_dma *VAR_2 = VAR_0->runtime->private_data;
 int VAR_3;

 if ((VAR_3 = FUNC_2(VAR_0, FUNC_1(VAR_1))) < 0)
  return VAR_3;

 VAR_2->buffer_addr = VAR_0->runtime->dma_addr;
 if (VAR_2->buffer_addr & 0x3) {
  FUNC_0(VAR_0->pcm->card->dev, "oh my, not aligned\n");
  VAR_2->buffer_addr = VAR_2->buffer_addr & ~0x3;
 }
 return 0;
}
