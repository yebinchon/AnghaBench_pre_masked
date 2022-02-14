
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_pcm_runtime {struct snd_pcm* pcm; TYPE_3__* card; } ;
struct snd_pcm {TYPE_2__* streams; } ;
struct snd_card {TYPE_1__* dev; } ;
struct TYPE_6__ {struct snd_card* snd_card; } ;
struct TYPE_5__ {scalar_t__ substream; } ;
struct TYPE_4__ {scalar_t__ coherent_dma_mask; int * dma_mask; } ;


 scalar_t__ FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct snd_pcm*) ;
 int FUNC_2 (struct snd_pcm*,size_t) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_pcm_runtime *VAR_3)
{
 struct snd_card *VAR_4 = VAR_3->card->snd_card;
 struct snd_pcm *VAR_5 = VAR_3->pcm;
 int VAR_6;

 if (!VAR_4->dev->dma_mask)
  VAR_4->dev->dma_mask = &VAR_2;
 if (!VAR_4->dev->coherent_dma_mask)
  VAR_4->dev->coherent_dma_mask = FUNC_0(32);

 if (VAR_5->streams[VAR_1].substream) {
  VAR_6 = FUNC_2(VAR_5,
    VAR_1);
  if (VAR_6)
   return VAR_6;
 }

 if (VAR_5->streams[VAR_0].substream) {
  VAR_6 = FUNC_2(VAR_5,
    VAR_0);
  if (VAR_6) {
   FUNC_1(VAR_5);
   return VAR_6;
  }
 }

 return 0;
}
