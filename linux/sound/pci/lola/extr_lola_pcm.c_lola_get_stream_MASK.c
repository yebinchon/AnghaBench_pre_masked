
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {unsigned int number; } ;
struct lola_stream {int dummy; } ;
struct lola_pcm {struct lola_stream* streams; } ;


 struct lola_pcm* FUNC_0 (struct snd_pcm_substream*) ;

__attribute__((used)) static struct lola_stream *FUNC_1(struct snd_pcm_substream *VAR_0)
{
 struct lola_pcm *VAR_1 = FUNC_0(VAR_0);
 unsigned int VAR_2 = VAR_0->number;
 return &VAR_1->streams[VAR_2];
}
