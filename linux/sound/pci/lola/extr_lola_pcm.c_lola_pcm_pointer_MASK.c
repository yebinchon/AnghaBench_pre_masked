
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int runtime; } ;
struct lola_stream {unsigned int bufsize; int dsd; } ;
struct lola {int dummy; } ;
typedef int snd_pcm_uframes_t ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned int) ;
 unsigned int FUNC_1 (struct lola*,int ,int ) ;
 struct lola_stream* FUNC_2 (struct snd_pcm_substream*) ;
 struct lola* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_4(struct snd_pcm_substream *VAR_1)
{
 struct lola *VAR_2 = FUNC_3(VAR_1);
 struct lola_stream *VAR_3 = FUNC_2(VAR_1);
 unsigned int VAR_4 = FUNC_1(VAR_2, VAR_3->dsd, VAR_0);

 if (VAR_4 >= VAR_3->bufsize)
  VAR_4 = 0;
 return FUNC_0(VAR_1->runtime, VAR_4);
}
