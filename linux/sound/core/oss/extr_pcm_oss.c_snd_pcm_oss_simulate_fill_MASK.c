
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {TYPE_1__* control; scalar_t__ boundary; scalar_t__ buffer_size; } ;
typedef scalar_t__ snd_pcm_uframes_t ;
struct TYPE_2__ {scalar_t__ appl_ptr; } ;



__attribute__((used)) static void FUNC_0(struct snd_pcm_substream *VAR_0,
          snd_pcm_uframes_t VAR_1)
{
 struct snd_pcm_runtime *VAR_2 = VAR_0->runtime;
 snd_pcm_uframes_t VAR_3;
 VAR_3 = VAR_1 + VAR_2->buffer_size;
 VAR_3 %= VAR_2->boundary;
 VAR_2->control->appl_ptr = VAR_3;
}
