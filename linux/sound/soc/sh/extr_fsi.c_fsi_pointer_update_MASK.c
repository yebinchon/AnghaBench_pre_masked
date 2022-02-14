
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ periods; } ;
struct fsi_stream {int buff_sample_pos; int period_samples; int period_pos; struct snd_pcm_substream* substream; } ;


 int FUNC_0 (struct snd_pcm_substream*) ;

__attribute__((used)) static void FUNC_1(struct fsi_stream *VAR_0, int VAR_1)
{
 VAR_0->buff_sample_pos += VAR_1;

 if (VAR_0->buff_sample_pos >=
     VAR_0->period_samples * (VAR_0->period_pos + 1)) {
  struct snd_pcm_substream *VAR_2 = VAR_0->substream;
  struct snd_pcm_runtime *VAR_3 = VAR_2->runtime;

  VAR_0->period_pos++;

  if (VAR_0->period_pos >= VAR_3->periods) {
   VAR_0->buff_sample_pos = 0;
   VAR_0->period_pos = 0;
  }

  FUNC_0(VAR_2);
 }
}
