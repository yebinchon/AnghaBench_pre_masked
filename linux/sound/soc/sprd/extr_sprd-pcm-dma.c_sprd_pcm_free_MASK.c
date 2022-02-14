
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ addr; int * area; } ;
struct snd_pcm_substream {TYPE_1__ dma_buffer; } ;
struct snd_pcm {TYPE_2__* streams; } ;
struct TYPE_4__ {struct snd_pcm_substream* substream; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct snd_pcm *VAR_0)
{
 struct snd_pcm_substream *VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->streams); VAR_2++) {
  VAR_1 = VAR_0->streams[VAR_2].substream;
  if (VAR_1) {
   FUNC_1(&VAR_1->dma_buffer);
   VAR_1->dma_buffer.area = ((void*)0);
   VAR_1->dma_buffer.addr = 0;
  }
 }
}
