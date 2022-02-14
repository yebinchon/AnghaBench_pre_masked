
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_pcm_runtime {int dev; TYPE_2__* dpcm; int fe_compr; TYPE_1__* dai_link; struct snd_soc_card* card; } ;
struct snd_soc_dapm_widget_list {int num_widgets; TYPE_3__** widgets; } ;
struct snd_soc_card {int dummy; } ;
struct TYPE_6__ {int id; int name; } ;
struct TYPE_5__ {int runtime_update; int runtime; } ;
struct TYPE_4__ {int no_pcm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct snd_soc_pcm_runtime*,struct snd_soc_pcm_runtime*,int) ;
 struct snd_soc_pcm_runtime* FUNC_3 (struct snd_soc_card*,TYPE_3__*,int) ;



__attribute__((used)) static int FUNC_4(struct snd_soc_pcm_runtime *VAR_3, int VAR_4,
 struct snd_soc_dapm_widget_list **VAR_5)
{
 struct snd_soc_card *VAR_6 = VAR_3->card;
 struct snd_soc_dapm_widget_list *VAR_7 = *VAR_5;
 struct snd_soc_pcm_runtime *VAR_8;
 int VAR_9, VAR_10 = 0, VAR_11;


 for (VAR_9 = 0; VAR_9 < VAR_7->num_widgets; VAR_9++) {

  switch (VAR_7->widgets[VAR_9]->id) {
  case 129:
   if (VAR_4 != VAR_1)
    continue;
   break;
  case 128:
   if (VAR_4 != VAR_0)
    continue;
   break;
  default:
   continue;
  }


  VAR_8 = FUNC_3(VAR_6, VAR_7->widgets[VAR_9], VAR_4);
  if (!VAR_8) {
   FUNC_1(VAR_3->dev, "ASoC: no BE found for %s\n",
     VAR_7->widgets[VAR_9]->name);
   continue;
  }


  if (!VAR_8->dai_link->no_pcm)
   continue;


  if (!VAR_3->dpcm[VAR_4].runtime && !VAR_3->fe_compr)
   continue;


  VAR_11 = FUNC_2(VAR_3, VAR_8, VAR_4);
  if (VAR_11 < 0) {
   FUNC_1(VAR_3->dev, "ASoC: can't connect %s\n",
    VAR_7->widgets[VAR_9]->name);
   break;
  } else if (VAR_11 == 0)
   continue;


  VAR_8->dpcm[VAR_4].runtime_update = VAR_2;
  VAR_10++;
 }

 FUNC_0(VAR_3->dev, "ASoC: found %d new BE paths\n", VAR_10);
 return VAR_10;
}
