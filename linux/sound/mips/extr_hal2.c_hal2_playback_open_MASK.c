
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int hw; } ;
struct snd_hal2 {int dac; } ;


 int FUNC_0 (struct snd_hal2*,int *) ;
 int VAR_0 ;
 struct snd_hal2* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1)
{
 struct snd_pcm_runtime *VAR_2 = VAR_1->runtime;
 struct snd_hal2 *VAR_3 = FUNC_1(VAR_1);
 int VAR_4;

 VAR_2->hw = VAR_0;

 VAR_4 = FUNC_0(VAR_3, &VAR_3->dac);
 if (VAR_4)
  return VAR_4;
 return 0;
}
