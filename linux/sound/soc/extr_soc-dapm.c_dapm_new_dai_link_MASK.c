
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_2__* dai_link; } ;
struct snd_soc_dapm_widget {int num_kcontrols; struct snd_kcontrol** kcontrols; TYPE_3__* kcontrol_news; int name; struct snd_soc_pcm_runtime* priv; struct snd_soc_dapm_context* dapm; } ;
struct snd_soc_dapm_context {int dev; TYPE_1__* card; } ;
struct snd_kcontrol {struct snd_soc_dapm_widget* private_data; } ;
struct snd_card {int dummy; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_5__ {int num_params; } ;
struct TYPE_4__ {struct snd_card* snd_card; } ;


 int FUNC_0 (int ,char*,int ,int ,int) ;
 int FUNC_1 (struct snd_card*,struct snd_kcontrol*) ;
 struct snd_kcontrol* FUNC_2 (TYPE_3__*,struct snd_soc_dapm_widget*,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_0)
{
 int VAR_1, VAR_2;
 struct snd_kcontrol *VAR_3;
 struct snd_soc_dapm_context *VAR_4 = VAR_0->dapm;
 struct snd_card *VAR_5 = VAR_4->card->snd_card;
 struct snd_soc_pcm_runtime *VAR_6 = VAR_0->priv;


 if (VAR_6->dai_link->num_params <= 1)
  return 0;


 for (VAR_1 = 0; VAR_1 < VAR_0->num_kcontrols; VAR_1++) {
  VAR_3 = FUNC_2(&VAR_0->kcontrol_news[VAR_1], VAR_0,
     VAR_0->name, ((void*)0));
  VAR_2 = FUNC_1(VAR_5, VAR_3);
  if (VAR_2 < 0) {
   FUNC_0(VAR_4->dev,
    "ASoC: failed to add widget %s dapm kcontrol %s: %d\n",
    VAR_0->name, VAR_0->kcontrol_news[VAR_1].name, VAR_2);
   return VAR_2;
  }
  VAR_3->private_data = VAR_0;
  VAR_0->kcontrols[VAR_1] = VAR_3;
 }

 return 0;
}
