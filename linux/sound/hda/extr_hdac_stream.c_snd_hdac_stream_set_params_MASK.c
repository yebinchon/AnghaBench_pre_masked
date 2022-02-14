
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ no_period_wakeup; } ;
struct hdac_stream {unsigned int bufsize; unsigned int period_bytes; unsigned int format_val; scalar_t__ no_period_wakeup; struct snd_pcm_substream* substream; } ;


 int VAR_0 ;
 int FUNC_0 (struct hdac_stream*) ;
 unsigned int FUNC_1 (struct snd_pcm_substream*) ;
 unsigned int FUNC_2 (struct snd_pcm_substream*) ;

int FUNC_3(struct hdac_stream *VAR_1,
     unsigned int VAR_2)
{

 unsigned int VAR_3, VAR_4;
 struct snd_pcm_substream *VAR_5 = VAR_1->substream;
 struct snd_pcm_runtime *VAR_6;
 int VAR_7;

 if (!VAR_5)
  return -VAR_0;
 VAR_6 = VAR_5->runtime;
 VAR_3 = FUNC_1(VAR_5);
 VAR_4 = FUNC_2(VAR_5);

 if (VAR_3 != VAR_1->bufsize ||
     VAR_4 != VAR_1->period_bytes ||
     VAR_2 != VAR_1->format_val ||
     VAR_6->no_period_wakeup != VAR_1->no_period_wakeup) {
  VAR_1->bufsize = VAR_3;
  VAR_1->period_bytes = VAR_4;
  VAR_1->format_val = VAR_2;
  VAR_1->no_period_wakeup = VAR_6->no_period_wakeup;
  VAR_7 = FUNC_0(VAR_1);
  if (VAR_7 < 0)
   return VAR_7;
 }
 return 0;
}
