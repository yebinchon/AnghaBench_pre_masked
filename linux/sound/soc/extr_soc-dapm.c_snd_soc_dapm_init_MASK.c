
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_context {int idle_bias_off; int list; int dev; int suspend_bias_off; int bias_level; struct snd_soc_component* component; struct snd_soc_card* card; } ;
struct snd_soc_component {TYPE_1__* driver; int dev; } ;
struct snd_soc_card {int dapm_list; int dev; } ;
struct TYPE_2__ {int suspend_bias_off; int idle_bias_on; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;

void FUNC_2(struct snd_soc_dapm_context *VAR_1,
         struct snd_soc_card *VAR_2,
         struct snd_soc_component *VAR_3)
{
 VAR_1->card = VAR_2;
 VAR_1->component = VAR_3;
 VAR_1->bias_level = VAR_0;

 if (VAR_3) {
  VAR_1->dev = VAR_3->dev;
  VAR_1->idle_bias_off = !VAR_3->driver->idle_bias_on,
  VAR_1->suspend_bias_off = VAR_3->driver->suspend_bias_off;
 } else {
  VAR_1->dev = VAR_2->dev;
 }

 FUNC_0(&VAR_1->list);
 FUNC_1(&VAR_1->list, &VAR_2->dapm_list);
}
