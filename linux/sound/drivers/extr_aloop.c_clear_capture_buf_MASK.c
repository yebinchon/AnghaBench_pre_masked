
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_runtime {char* dma_area; int channels; int format; } ;
struct loopback_pcm {unsigned int buf_pos; scalar_t__ silent_size; scalar_t__ pcm_buffer_size; TYPE_1__* substream; } ;
struct TYPE_2__ {struct snd_pcm_runtime* runtime; } ;


 int FUNC_0 (struct snd_pcm_runtime*,unsigned int) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static void FUNC_2(struct loopback_pcm *VAR_0, unsigned int VAR_1)
{
 struct snd_pcm_runtime *VAR_2 = VAR_0->substream->runtime;
 char *VAR_3 = VAR_2->dma_area;
 unsigned int VAR_4 = VAR_0->buf_pos;

 if (VAR_0->silent_size >= VAR_0->pcm_buffer_size)
  return;
 if (VAR_0->silent_size + VAR_1 > VAR_0->pcm_buffer_size)
  VAR_1 = VAR_0->pcm_buffer_size - VAR_0->silent_size;

 for (;;) {
  unsigned int VAR_5 = VAR_1;
  if (VAR_4 + VAR_5 > VAR_0->pcm_buffer_size)
   VAR_5 = VAR_0->pcm_buffer_size - VAR_4;
  FUNC_1(VAR_2->format, VAR_3 + VAR_4,
        FUNC_0(VAR_2, VAR_5) *
         VAR_2->channels);
  VAR_0->silent_size += VAR_5;
  VAR_1 -= VAR_5;
  if (!VAR_1)
   break;
  VAR_4 = 0;
 }
}
