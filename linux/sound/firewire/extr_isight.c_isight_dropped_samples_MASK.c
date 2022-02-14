
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_pcm_runtime {int buffer_size; scalar_t__ dma_area; } ;
struct isight {int total_samples; int buffer_pointer; TYPE_1__* pcm; int pcm_running; } ;
struct TYPE_2__ {struct snd_pcm_runtime* runtime; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct isight*) ;
 int FUNC_2 (struct isight*,int) ;
 int FUNC_3 (scalar_t__,int ,int) ;

__attribute__((used)) static void FUNC_4(struct isight *VAR_0, unsigned int VAR_1)
{
 struct snd_pcm_runtime *VAR_2;
 u32 VAR_3;
 unsigned int VAR_4;

 if (!FUNC_0(VAR_0->pcm_running))
  return;

 VAR_2 = VAR_0->pcm->runtime;
 VAR_3 = VAR_1 - VAR_0->total_samples;
 if (VAR_3 < VAR_2->buffer_size) {
  if (VAR_0->buffer_pointer + VAR_3 <= VAR_2->buffer_size) {
   FUNC_3(VAR_2->dma_area + VAR_0->buffer_pointer * 4,
          0, VAR_3 * 4);
  } else {
   VAR_4 = VAR_2->buffer_size - VAR_0->buffer_pointer;
   FUNC_3(VAR_2->dma_area + VAR_0->buffer_pointer * 4,
          0, VAR_4 * 4);
   FUNC_3(VAR_2->dma_area, 0, (VAR_3 - VAR_4) * 4);
  }
  FUNC_2(VAR_0, VAR_3);
 } else {
  FUNC_1(VAR_0);
 }
}
