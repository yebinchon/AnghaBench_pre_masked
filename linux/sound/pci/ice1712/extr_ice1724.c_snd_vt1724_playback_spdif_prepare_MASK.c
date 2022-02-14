
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_ice1712 {int force_pdma4; } ;
struct TYPE_2__ {int rate; } ;


 struct snd_ice1712* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_ice1712*,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_0)
{
 struct snd_ice1712 *VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1->force_pdma4)
  FUNC_2(VAR_1, VAR_0->runtime->rate);
 return FUNC_1(VAR_0);
}
