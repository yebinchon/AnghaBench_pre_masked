
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct lola_stream {scalar_t__ opened; struct snd_pcm_substream* substream; } ;
struct lola {scalar_t__ ref_count_rate; int open_mutex; scalar_t__ sample_rate; } ;


 struct lola_stream* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct lola* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_0)
{
 struct lola *VAR_1 = FUNC_3(VAR_0);
 struct lola_stream *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->open_mutex);
 if (VAR_2->substream == VAR_0) {
  VAR_2->substream = ((void*)0);
  VAR_2->opened = 0;
 }
 if (--VAR_1->ref_count_rate == 0) {

  VAR_1->sample_rate = 0;
 }
 FUNC_2(&VAR_1->open_mutex);
 return 0;
}
