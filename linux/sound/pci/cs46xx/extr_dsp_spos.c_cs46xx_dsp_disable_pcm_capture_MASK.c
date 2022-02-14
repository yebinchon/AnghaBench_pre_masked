
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_cs46xx {int spos_mutex; struct dsp_spos_instance* dsp_spos_instance; } ;
struct dsp_spos_instance {int * pcm_input; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_cs46xx*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4 (struct snd_cs46xx *VAR_1)
{
 struct dsp_spos_instance * VAR_2 = VAR_1->dsp_spos_instance;

 if (FUNC_3(!VAR_2->pcm_input))
  return -VAR_0;

 FUNC_1(&VAR_1->spos_mutex);
 FUNC_0 (VAR_1,VAR_2->pcm_input);
 VAR_2->pcm_input = ((void*)0);
 FUNC_2(&VAR_1->spos_mutex);

 return 0;
}
