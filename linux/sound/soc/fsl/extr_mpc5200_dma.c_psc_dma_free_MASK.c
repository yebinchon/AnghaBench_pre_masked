
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {int dummy; } ;
struct snd_soc_component {int dev; } ;
struct TYPE_4__ {scalar_t__ addr; int * area; } ;
struct snd_pcm_substream {TYPE_2__ dma_buffer; } ;
struct snd_pcm {TYPE_1__* streams; struct snd_soc_pcm_runtime* private_data; } ;
struct TYPE_3__ {struct snd_pcm_substream* substream; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct snd_pcm*) ;
 int FUNC_1 (TYPE_2__*) ;
 struct snd_soc_component* FUNC_2 (struct snd_soc_pcm_runtime*,int ) ;

__attribute__((used)) static void FUNC_3(struct snd_pcm *VAR_1)
{
 struct snd_soc_pcm_runtime *VAR_2 = VAR_1->private_data;
 struct snd_soc_component *VAR_3 = FUNC_2(VAR_2, VAR_0);
 struct snd_pcm_substream *VAR_4;
 int VAR_5;

 FUNC_0(VAR_3->dev, "psc_dma_free(pcm=%p)\n", VAR_1);

 for (VAR_5 = 0; VAR_5 < 2; VAR_5++) {
  VAR_4 = VAR_1->streams[VAR_5].substream;
  if (VAR_4) {
   FUNC_1(&VAR_4->dma_buffer);
   VAR_4->dma_buffer.area = ((void*)0);
   VAR_4->dma_buffer.addr = 0;
  }
 }
}
