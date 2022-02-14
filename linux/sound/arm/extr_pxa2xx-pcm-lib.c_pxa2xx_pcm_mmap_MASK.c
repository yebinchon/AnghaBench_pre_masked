
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct snd_pcm_substream {TYPE_2__* pcm; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dma_bytes; int dma_addr; int dma_area; } ;
struct TYPE_4__ {TYPE_1__* card; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int ,struct vm_area_struct*,int ,int ,int ) ;

int FUNC_1(struct snd_pcm_substream *VAR_0,
 struct vm_area_struct *VAR_1)
{
 struct snd_pcm_runtime *VAR_2 = VAR_0->runtime;
 return FUNC_0(VAR_0->pcm->card->dev, VAR_1, VAR_2->dma_area,
      VAR_2->dma_addr, VAR_2->dma_bytes);
}
