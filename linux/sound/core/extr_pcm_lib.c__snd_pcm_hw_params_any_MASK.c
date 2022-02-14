
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_params {unsigned int info; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct snd_pcm_hw_params*,unsigned int) ;
 int FUNC_1 (struct snd_pcm_hw_params*,int ,int) ;

void FUNC_2(struct snd_pcm_hw_params *VAR_4)
{
 unsigned int VAR_5;
 FUNC_1(VAR_4, 0, sizeof(*VAR_4));
 for (VAR_5 = VAR_1; VAR_5 <= VAR_3; VAR_5++)
  FUNC_0(VAR_4, VAR_5);
 for (VAR_5 = VAR_0; VAR_5 <= VAR_2; VAR_5++)
  FUNC_0(VAR_4, VAR_5);
 VAR_4->info = ~0U;
}
