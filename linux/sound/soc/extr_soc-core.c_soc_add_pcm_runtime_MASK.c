
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int num; int list; } ;
struct snd_soc_card {int num_rtd; int rtd_list; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct snd_soc_card *VAR_0,
  struct snd_soc_pcm_runtime *VAR_1)
{

 FUNC_0(&VAR_1->list, &VAR_0->rtd_list);
 VAR_1->num = VAR_0->num_rtd;
 VAR_0->num_rtd++;
}
