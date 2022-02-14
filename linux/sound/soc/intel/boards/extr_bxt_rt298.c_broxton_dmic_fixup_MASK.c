
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_interval {int min; int max; } ;


 int VAR_0 ;
 struct snd_interval* FUNC_0 (struct snd_pcm_hw_params*,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_pcm_runtime *VAR_1,
    struct snd_pcm_hw_params *VAR_2)
{
 struct snd_interval *VAR_3 = FUNC_0(VAR_2,
      VAR_0);
 VAR_3->min = VAR_3->max = 4;

 return 0;
}
