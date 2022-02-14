
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_interval {int min; int max; } ;


 int VAR_0 ;
 struct snd_interval* FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_pcm_runtime *VAR_1,
   struct snd_pcm_hw_params *VAR_2)
{
 struct snd_interval *VAR_3 = FUNC_0(VAR_2,
      VAR_0);
 if (FUNC_1(VAR_2) == 2)
  VAR_3->min = VAR_3->max = 2;
 else
  VAR_3->min = VAR_3->max = 4;

 return 0;
}
