
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {scalar_t__ runtime; } ;


 int FUNC_0 (struct snd_pcm_substream*) ;
 scalar_t__ FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_pcm_substream*,unsigned long) ;
 int FUNC_3 (struct snd_pcm_substream*,unsigned long) ;

int FUNC_4(struct snd_pcm_substream *VAR_0)
{
 unsigned long VAR_1;

 FUNC_2(VAR_0, VAR_1);
 if (VAR_0->runtime && FUNC_1(VAR_0))
  FUNC_0(VAR_0);
 FUNC_3(VAR_0, VAR_1);
 return 0;
}
