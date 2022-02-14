
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_params {int dummy; } ;


 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;

int FUNC_2(struct snd_pcm_hw_params *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0);

 if (VAR_1 > 0)
  return VAR_1 * FUNC_0(VAR_0);
 else
  return VAR_1;
}
