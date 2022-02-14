
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int channels; int rate; } ;
struct lola_stream {scalar_t__ index; int opened; unsigned int bufsize; unsigned int period_bytes; unsigned int format_verb; struct lola_stream* master; } ;
struct lola_pcm {scalar_t__ num_streams; } ;
struct lola {int sample_rate; int open_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct lola_pcm*,struct lola_stream*) ;
 unsigned int FUNC_1 (struct snd_pcm_substream*) ;
 struct lola_pcm* FUNC_2 (struct snd_pcm_substream*) ;
 struct lola_stream* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (struct lola*,int ) ;
 int FUNC_5 (struct lola*,struct lola_stream*,int) ;
 int FUNC_6 (struct lola*,struct lola_pcm*,struct lola_stream*) ;
 int FUNC_7 (struct lola*,struct lola_pcm*,struct snd_pcm_substream*,struct lola_stream*) ;
 int FUNC_8 (struct lola*,struct lola_stream*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 unsigned int FUNC_11 (struct snd_pcm_substream*) ;
 unsigned int FUNC_12 (struct snd_pcm_substream*) ;
 struct lola* FUNC_13 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_14(struct snd_pcm_substream *VAR_1)
{
 struct lola *VAR_2 = FUNC_13(VAR_1);
 struct lola_pcm *VAR_3 = FUNC_2(VAR_1);
 struct lola_stream *VAR_4 = FUNC_3(VAR_1);
 struct snd_pcm_runtime *VAR_5 = VAR_1->runtime;
 unsigned int VAR_6, VAR_7, VAR_8;
 int VAR_9, VAR_10;

 FUNC_9(&VAR_2->open_mutex);
 FUNC_8(VAR_2, VAR_4);
 FUNC_0(VAR_3, VAR_4);
 if (VAR_4->index + VAR_5->channels > VAR_3->num_streams) {
  FUNC_10(&VAR_2->open_mutex);
  return -VAR_0;
 }
 for (VAR_9 = 1; VAR_9 < VAR_5->channels; VAR_9++) {
  VAR_4[VAR_9].master = VAR_4;
  VAR_4[VAR_9].opened = 1;
 }
 FUNC_10(&VAR_2->open_mutex);

 VAR_6 = FUNC_11(VAR_1);
 VAR_7 = FUNC_12(VAR_1);
 VAR_8 = FUNC_1(VAR_1);

 VAR_4->bufsize = VAR_6;
 VAR_4->period_bytes = VAR_7;
 VAR_4->format_verb = VAR_8;

 VAR_10 = FUNC_7(VAR_2, VAR_3, VAR_1, VAR_4);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_4(VAR_2, VAR_5->rate);
 if (VAR_10 < 0)
  return VAR_10;
 VAR_2->sample_rate = VAR_5->rate;

 VAR_10 = FUNC_5(VAR_2, VAR_4, VAR_5->channels);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_6(VAR_2, VAR_3, VAR_4);
 if (VAR_10 < 0) {
  FUNC_8(VAR_2, VAR_4);
  return VAR_10;
 }

 return 0;
}
