
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {scalar_t__ number; } ;
struct snd_es18xx {int caps; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_es18xx*,struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_es18xx*,struct snd_pcm_substream*) ;
 struct snd_es18xx* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1)
{
        struct snd_es18xx *VAR_2 = FUNC_2(VAR_1);
 if (VAR_1->number == 0 && (VAR_2->caps & VAR_0))
  return FUNC_0(VAR_2, VAR_1);
 else
  return FUNC_1(VAR_2, VAR_1);
}
