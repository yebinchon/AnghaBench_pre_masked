
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ addr; int * area; } ;
struct snd_pcm_substream {TYPE_2__ dma_buffer; } ;
struct snd_pcm {TYPE_1__* streams; } ;
struct TYPE_3__ {struct snd_pcm_substream* substream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(struct snd_pcm *VAR_2)
{
 struct snd_pcm_substream *VAR_3;
 int VAR_4;

 for (VAR_4 = VAR_1; VAR_4 <= VAR_0; VAR_4++) {
  VAR_3 = VAR_2->streams[VAR_4].substream;
  if (!VAR_3)
   continue;

  FUNC_0(&VAR_3->dma_buffer);
  VAR_3->dma_buffer.area = ((void*)0);
  VAR_3->dma_buffer.addr = 0;
 }
}
