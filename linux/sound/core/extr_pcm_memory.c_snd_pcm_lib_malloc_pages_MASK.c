
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; int dev; } ;
struct snd_dma_buffer {size_t bytes; TYPE_2__ dev; int * area; } ;
struct snd_pcm_substream {struct snd_dma_buffer dma_buffer; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {size_t dma_bytes; TYPE_1__* dma_buffer_p; } ;
struct TYPE_3__ {size_t bytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct snd_pcm_substream*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct snd_dma_buffer*) ;
 struct snd_dma_buffer* FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,size_t,struct snd_dma_buffer*) ;
 int FUNC_5 (struct snd_pcm_substream*) ;
 int FUNC_6 (struct snd_pcm_substream*,struct snd_dma_buffer*) ;

int FUNC_7(struct snd_pcm_substream *VAR_4, size_t VAR_5)
{
 struct snd_pcm_runtime *VAR_6;
 struct snd_dma_buffer *VAR_7 = ((void*)0);

 if (FUNC_0(VAR_4))
  return -VAR_0;
 if (FUNC_3(VAR_4->dma_buffer.dev.type ==
         VAR_3))
  return -VAR_0;
 VAR_6 = VAR_4->runtime;

 if (VAR_6->dma_buffer_p) {



  if (VAR_6->dma_buffer_p->bytes >= VAR_5) {
   VAR_6->dma_bytes = VAR_5;
   return 0;
  }
  FUNC_5(VAR_4);
 }
 if (VAR_4->dma_buffer.area != ((void*)0) &&
     VAR_4->dma_buffer.bytes >= VAR_5) {
  VAR_7 = &VAR_4->dma_buffer;
 } else {
  VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_2);
  if (! VAR_7)
   return -VAR_1;
  VAR_7->dev = VAR_4->dma_buffer.dev;
  if (FUNC_4(VAR_4->dma_buffer.dev.type,
     VAR_4->dma_buffer.dev.dev,
     VAR_5, VAR_7) < 0) {
   FUNC_1(VAR_7);
   return -VAR_1;
  }
 }
 FUNC_6(VAR_4, VAR_7);
 VAR_6->dma_bytes = VAR_5;
 return 1;
}
