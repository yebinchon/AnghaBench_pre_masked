
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_dma_buffer {int * area; int addr; int bytes; } ;
struct snd_pcm_substream {struct snd_dma_buffer dma_buffer; } ;
struct snd_pcm {TYPE_2__* card; TYPE_1__* streams; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {struct snd_pcm_substream* substream; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int ,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct snd_pcm *VAR_2)
{
 struct snd_pcm_substream *VAR_3;
 struct snd_dma_buffer *VAR_4;

 VAR_3 = VAR_2->streams[VAR_1].substream;
 if (VAR_3) {
  VAR_4 = &VAR_3->dma_buffer;
  if (VAR_4->area) {
   FUNC_0(VAR_2->card->dev, VAR_4->bytes,
    VAR_4->area, VAR_4->addr);
   VAR_4->area = ((void*)0);
  }
 }

 VAR_3 = VAR_2->streams[VAR_0].substream;
 if (VAR_3) {
  VAR_4 = &VAR_3->dma_buffer;
  if (VAR_4->area) {
   FUNC_0(VAR_2->card->dev, VAR_4->bytes,
    VAR_4->area, VAR_4->addr);
   VAR_4->area = ((void*)0);
  }
 }
}
