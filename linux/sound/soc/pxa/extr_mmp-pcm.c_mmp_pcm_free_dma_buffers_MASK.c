
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_dma_buffer {int * area; } ;
struct snd_pcm_substream {struct snd_dma_buffer dma_buffer; } ;
struct snd_pcm {TYPE_1__* streams; } ;
struct gen_pool {int dummy; } ;
struct TYPE_4__ {size_t buffer_bytes_max; } ;
struct TYPE_3__ {struct snd_pcm_substream* substream; } ;


 int FUNC_0 (struct gen_pool*,unsigned long,size_t) ;
 TYPE_2__* VAR_0 ;
 struct gen_pool* FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct snd_pcm *VAR_1)
{
 struct snd_pcm_substream *VAR_2;
 struct snd_dma_buffer *VAR_3;
 int VAR_4;
 struct gen_pool *VAR_5;

 VAR_5 = FUNC_1("asram");
 if (!VAR_5)
  return;

 for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {
  size_t VAR_6 = VAR_0[VAR_4].buffer_bytes_max;

  VAR_2 = VAR_1->streams[VAR_4].substream;
  if (!VAR_2)
   continue;

  VAR_3 = &VAR_2->dma_buffer;
  if (!VAR_3->area)
   continue;
  FUNC_0(VAR_5, (unsigned long)VAR_3->area, VAR_6);
  VAR_3->area = ((void*)0);
 }

}
