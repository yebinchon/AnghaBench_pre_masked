
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_runtime {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ,int ,int ,void*,int ,int) ;

int FUNC_1(struct snd_pcm_runtime *VAR_4, void *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_4, 0, VAR_1,
      VAR_3, VAR_5,
      VAR_0, -1);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_4, 0, VAR_0,
      VAR_2, VAR_5,
      VAR_1, -1);

 return VAR_6;
}
