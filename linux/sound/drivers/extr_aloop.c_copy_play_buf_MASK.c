
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_runtime {char* dma_area; scalar_t__ buffer_size; TYPE_3__* control; TYPE_2__* status; } ;
struct loopback_pcm {unsigned int buf_pos; unsigned int pcm_salign; unsigned int pcm_buffer_size; scalar_t__ silent_size; TYPE_1__* substream; } ;
typedef unsigned int snd_pcm_uframes_t ;
struct TYPE_6__ {unsigned int appl_ptr; } ;
struct TYPE_5__ {scalar_t__ state; } ;
struct TYPE_4__ {struct snd_pcm_runtime* runtime; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct loopback_pcm*,unsigned int) ;
 int FUNC_1 (char*,char*,unsigned int) ;
 scalar_t__ FUNC_2 (struct snd_pcm_runtime*) ;

__attribute__((used)) static void FUNC_3(struct loopback_pcm *VAR_1,
     struct loopback_pcm *VAR_2,
     unsigned int VAR_3)
{
 struct snd_pcm_runtime *VAR_4 = VAR_1->substream->runtime;
 char *VAR_5 = VAR_4->dma_area;
 char *VAR_6 = VAR_2->substream->runtime->dma_area;
 unsigned int VAR_7 = VAR_1->buf_pos;
 unsigned int VAR_8 = VAR_2->buf_pos;
 unsigned int VAR_9 = 0;



 if (VAR_4->status->state == VAR_0 &&
     FUNC_2(VAR_4) < VAR_4->buffer_size) {
      snd_pcm_uframes_t VAR_10, VAR_11, VAR_12;
  VAR_10 = VAR_11 = VAR_4->control->appl_ptr;
  VAR_11 -= VAR_11 % VAR_4->buffer_size;
  VAR_11 += VAR_1->buf_pos / VAR_1->pcm_salign;
  if (VAR_10 < VAR_11)
   VAR_11 -= VAR_4->buffer_size;
  VAR_12 = (VAR_10 - VAR_11) * VAR_1->pcm_salign;
  if (VAR_12 < VAR_3) {
   VAR_9 = VAR_3 - VAR_12;
   VAR_3 = VAR_12;
  }
 }

 for (;;) {
  unsigned int VAR_13 = VAR_3;
  if (VAR_7 + VAR_13 > VAR_1->pcm_buffer_size)
   VAR_13 = VAR_1->pcm_buffer_size - VAR_7;
  if (VAR_8 + VAR_13 > VAR_2->pcm_buffer_size)
   VAR_13 = VAR_2->pcm_buffer_size - VAR_8;
  FUNC_1(VAR_6 + VAR_8, VAR_5 + VAR_7, VAR_13);
  VAR_2->silent_size = 0;
  VAR_3 -= VAR_13;
  if (!VAR_3)
   break;
  VAR_7 = (VAR_7 + VAR_13) % VAR_1->pcm_buffer_size;
  VAR_8 = (VAR_8 + VAR_13) % VAR_2->pcm_buffer_size;
 }

 if (VAR_9 > 0) {
  FUNC_0(VAR_2, VAR_9);
  VAR_2->silent_size = 0;
 }
}
