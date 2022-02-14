
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct rme32 {int fullduplex_mode; } ;


 int FUNC_0 (struct snd_pcm_substream*) ;
 struct rme32* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct rme32 *VAR_1 = FUNC_1(VAR_0);
 if (! VAR_1->fullduplex_mode)
  return 0;
 return FUNC_0(VAR_0);
}
