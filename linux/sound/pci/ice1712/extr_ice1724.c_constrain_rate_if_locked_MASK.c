
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_2__ {unsigned int rate_min; unsigned int rate_max; } ;
struct snd_pcm_runtime {TYPE_1__ hw; } ;
struct snd_ice1712 {unsigned int (* get_rate ) (struct snd_ice1712*) ;} ;


 scalar_t__ FUNC_0 (struct snd_ice1712*) ;
 struct snd_ice1712* FUNC_1 (struct snd_pcm_substream*) ;
 unsigned int FUNC_2 (struct snd_ice1712*) ;

__attribute__((used)) static void FUNC_3(struct snd_pcm_substream *VAR_0)
{
 struct snd_ice1712 *VAR_1 = FUNC_1(VAR_0);
 struct snd_pcm_runtime *VAR_2 = VAR_0->runtime;
 unsigned int VAR_3;
 if (FUNC_0(VAR_1)) {
  VAR_3 = VAR_1->get_rate(VAR_1);
  if (VAR_3 >= VAR_2->hw.rate_min
      && VAR_3 <= VAR_2->hw.rate_max) {
   VAR_2->hw.rate_min = VAR_3;
   VAR_2->hw.rate_max = VAR_3;
  }
 }
}
