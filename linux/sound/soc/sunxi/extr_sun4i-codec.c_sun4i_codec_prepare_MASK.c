
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_pcm_substream*,struct snd_soc_dai*) ;
 int FUNC_1 (struct snd_pcm_substream*,struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1,
          struct snd_soc_dai *VAR_2)
{
 if (VAR_1->stream == VAR_0)
  return FUNC_1(VAR_1, VAR_2);

 return FUNC_0(VAR_1, VAR_2);
}
