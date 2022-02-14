
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_2__ {int fifo_size; int buffer_bytes_max; int periods_max; int periods_min; int period_bytes_max; int period_bytes_min; int formats; int info; } ;
struct snd_pcm_runtime {TYPE_1__ hw; } ;
struct snd_pcm_hardware {int fifo_size; int buffer_bytes_max; int periods_max; int periods_min; int period_bytes_max; int period_bytes_min; int formats; int info; } ;



int FUNC_0(struct snd_pcm_substream *VAR_0,
 const struct snd_pcm_hardware *VAR_1)
{
 struct snd_pcm_runtime *VAR_2 = VAR_0->runtime;
 VAR_2->hw.info = VAR_1->info;
 VAR_2->hw.formats = VAR_1->formats;
 VAR_2->hw.period_bytes_min = VAR_1->period_bytes_min;
 VAR_2->hw.period_bytes_max = VAR_1->period_bytes_max;
 VAR_2->hw.periods_min = VAR_1->periods_min;
 VAR_2->hw.periods_max = VAR_1->periods_max;
 VAR_2->hw.buffer_bytes_max = VAR_1->buffer_bytes_max;
 VAR_2->hw.fifo_size = VAR_1->fifo_size;
 return 0;
}
