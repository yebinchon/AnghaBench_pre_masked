
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dev; int type; } ;
struct snd_dma_buffer {scalar_t__ bytes; TYPE_1__ dev; } ;
struct snd_pcm_substream {TYPE_3__* pcm; int number; scalar_t__ stream; struct snd_dma_buffer dma_buffer; } ;
struct TYPE_6__ {int name; int device; TYPE_2__* card; } ;
struct TYPE_5__ {int number; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,char,int ,int ,size_t) ;
 int FUNC_1 (int ,int ,size_t,struct snd_dma_buffer*) ;
 size_t VAR_1 ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_2, size_t VAR_3)
{
 struct snd_dma_buffer *VAR_4 = &VAR_2->dma_buffer;
 size_t VAR_5 = VAR_3;
 int VAR_6;

 do {
  if ((VAR_6 = FUNC_1(VAR_4->dev.type, VAR_4->dev.dev,
            VAR_3, VAR_4)) < 0) {
   if (VAR_6 != -VAR_0)
    return VAR_6;
  } else
   return 0;
  VAR_3 >>= 1;
 } while (VAR_3 >= VAR_1);
 VAR_4->bytes = 0;
 FUNC_0("ALSA pcmC%dD%d%c,%d:%s: cannot preallocate for size %zu\n",
  VAR_2->pcm->card->number, VAR_2->pcm->device,
  VAR_2->stream ? 'c' : 'p', VAR_2->number,
  VAR_2->pcm->name, VAR_5);
 return 0;
}
