
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {size_t stream; } ;
struct lola_pcm {int dummy; } ;
struct lola {struct lola_pcm* pcm; } ;


 struct lola* FUNC_0 (struct snd_pcm_substream*) ;

__attribute__((used)) static struct lola_pcm *FUNC_1(struct snd_pcm_substream *VAR_0)
{
 struct lola *VAR_1 = FUNC_0(VAR_0);
 return &VAR_1->pcm[VAR_0->stream];
}
