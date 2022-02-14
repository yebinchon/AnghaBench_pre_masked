
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_card {int dpcm_lock; int pcm_mutex; int dapm_mutex; int mutex; scalar_t__ instantiated; scalar_t__ num_rtd; int dobj_list; int dapm_dirty; int rtd_list; int dai_link_list; int list; int component_dev_list; int aux_comp_list; int dapm_list; int paths; int widgets; int dev; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct snd_soc_card*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct snd_soc_card*) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct snd_soc_card *VAR_1)
{
 if (!VAR_1->name || !VAR_1->dev)
  return -VAR_0;

 FUNC_1(VAR_1->dev, VAR_1);

 FUNC_0(&VAR_1->widgets);
 FUNC_0(&VAR_1->paths);
 FUNC_0(&VAR_1->dapm_list);
 FUNC_0(&VAR_1->aux_comp_list);
 FUNC_0(&VAR_1->component_dev_list);
 FUNC_0(&VAR_1->list);
 FUNC_0(&VAR_1->dai_link_list);
 FUNC_0(&VAR_1->rtd_list);
 FUNC_0(&VAR_1->dapm_dirty);
 FUNC_0(&VAR_1->dobj_list);

 VAR_1->num_rtd = 0;
 VAR_1->instantiated = 0;
 FUNC_2(&VAR_1->mutex);
 FUNC_2(&VAR_1->dapm_mutex);
 FUNC_2(&VAR_1->pcm_mutex);
 FUNC_4(&VAR_1->dpcm_lock);

 return FUNC_3(VAR_1);
}
