
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_ops {int dummy; } ;


 int VAR_0 ;
 struct snd_pcm_ops const VAR_1 ;
 struct snd_pcm_ops const VAR_2 ;

const struct snd_pcm_ops *FUNC_0(int VAR_3)
{
 return VAR_3 == VAR_0 ?
  &VAR_2 : &VAR_1;
}
