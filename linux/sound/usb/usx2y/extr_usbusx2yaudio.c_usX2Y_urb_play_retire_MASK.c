
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int actual_length; } ;
struct snd_usX2Y_substream {scalar_t__ transfer_done; scalar_t__ hwptr_done; TYPE_2__* pcm_substream; TYPE_1__* usX2Y; } ;
struct snd_pcm_runtime {scalar_t__ buffer_size; scalar_t__ period_size; } ;
struct TYPE_4__ {struct snd_pcm_runtime* runtime; } ;
struct TYPE_3__ {int stride; } ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(struct snd_usX2Y_substream *VAR_0, struct urb *VAR_1)
{
 struct snd_pcm_runtime *VAR_2 = VAR_0->pcm_substream->runtime;
 int VAR_3 = VAR_1->actual_length / VAR_0->usX2Y->stride;

 VAR_0->transfer_done += VAR_3;
 VAR_0->hwptr_done += VAR_3;
 if (VAR_0->hwptr_done >= VAR_2->buffer_size)
  VAR_0->hwptr_done -= VAR_2->buffer_size;
 if (VAR_0->transfer_done >= VAR_2->period_size) {
  VAR_0->transfer_done -= VAR_2->period_size;
  FUNC_0(VAR_0->pcm_substream);
 }
}
