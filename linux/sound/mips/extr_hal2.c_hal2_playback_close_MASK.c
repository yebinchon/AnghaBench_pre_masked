
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_hal2 {int dac; } ;


 int FUNC_0 (struct snd_hal2*,int *) ;
 struct snd_hal2* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct snd_hal2 *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1, &VAR_1->dac);
 return 0;
}
