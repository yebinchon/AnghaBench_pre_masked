
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_runtime {int dummy; } ;
struct snd_pcm_hw_constraint_ranges {int dummy; } ;
typedef int snd_pcm_hw_param_t ;


 int FUNC_0 (struct snd_pcm_runtime*,unsigned int,int ,int ,void*,int ,int) ;
 int VAR_0 ;

int FUNC_1(struct snd_pcm_runtime *VAR_1,
     unsigned int VAR_2,
     snd_pcm_hw_param_t VAR_3,
     const struct snd_pcm_hw_constraint_ranges *VAR_4)
{
 return FUNC_0(VAR_1, VAR_2, VAR_3,
       VAR_0, (void *)VAR_4,
       VAR_3, -1);
}
