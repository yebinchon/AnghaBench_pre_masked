
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct lola_stream {int dummy; } ;
struct lola_pcm {int dummy; } ;
struct lola {int open_mutex; } ;


 int FUNC_0 (struct lola_pcm*,struct lola_stream*) ;
 struct lola_pcm* FUNC_1 (struct snd_pcm_substream*) ;
 struct lola_stream* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (struct lola*,struct lola_stream*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct snd_pcm_substream*) ;
 struct lola* FUNC_7 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_0)
{
 struct lola *VAR_1 = FUNC_7(VAR_0);
 struct lola_pcm *VAR_2 = FUNC_1(VAR_0);
 struct lola_stream *VAR_3 = FUNC_2(VAR_0);

 FUNC_4(&VAR_1->open_mutex);
 FUNC_3(VAR_1, VAR_3);
 FUNC_0(VAR_2, VAR_3);
 FUNC_5(&VAR_1->open_mutex);
 return FUNC_6(VAR_0);
}
