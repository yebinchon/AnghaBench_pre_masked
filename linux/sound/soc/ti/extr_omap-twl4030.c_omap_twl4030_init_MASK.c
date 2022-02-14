
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct snd_soc_pcm_runtime {struct snd_soc_card* card; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_card {int dev; struct snd_soc_dapm_context dapm; } ;
struct omap_twl4030 {scalar_t__ jack_detect; int hs_jack; } ;
struct omap_tw4030_pdata {int has_linein; int has_digimic1; int has_digimic0; int has_carkitmic; int has_hsmic; int has_submic; int has_mainmic; int has_carkit; int has_predriv; int has_hs; int has_hf; int has_ear; int custom_routing; } ;
struct TYPE_6__ {scalar_t__ gpio; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 struct omap_tw4030_pdata* FUNC_1 (int ) ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 struct omap_twl4030* FUNC_2 (struct snd_soc_card*) ;
 int FUNC_3 (struct snd_soc_card*,char*,int ,int *,TYPE_1__*,int ) ;
 int FUNC_4 (int *,int ,TYPE_1__*) ;
 int FUNC_5 (struct snd_soc_dapm_context*,int ,char*) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_pcm_runtime *VAR_3)
{
 struct snd_soc_card *VAR_4 = VAR_3->card;
 struct snd_soc_dapm_context *VAR_5 = &VAR_4->dapm;
 struct omap_tw4030_pdata *VAR_6 = FUNC_1(VAR_4->dev);
 struct omap_twl4030 *VAR_7 = FUNC_2(VAR_4);
 int VAR_8 = 0;


 if (VAR_7->jack_detect > 0) {
  VAR_1[0].gpio = VAR_7->jack_detect;

  VAR_8 = FUNC_3(VAR_3->card, "Headset Jack",
         VAR_0, &VAR_7->hs_jack,
         VAR_2,
         FUNC_0(VAR_2));
  if (VAR_8)
   return VAR_8;

  VAR_8 = FUNC_4(&VAR_7->hs_jack,
          FUNC_0(VAR_1),
          VAR_1);
  if (VAR_8)
   return VAR_8;
 }





 if (!VAR_6 || !VAR_6->custom_routing)
  return VAR_8;


 FUNC_5(VAR_5, VAR_6->has_ear, "Earpiece Spk");
 FUNC_5(VAR_5, VAR_6->has_hf, "Handsfree Spk");
 FUNC_5(VAR_5, VAR_6->has_hs, "Headset Stereophone");
 FUNC_5(VAR_5, VAR_6->has_predriv, "Ext Spk");
 FUNC_5(VAR_5, VAR_6->has_carkit, "Carkit Spk");

 FUNC_5(VAR_5, VAR_6->has_mainmic, "Main Mic");
 FUNC_5(VAR_5, VAR_6->has_submic, "Sub Mic");
 FUNC_5(VAR_5, VAR_6->has_hsmic, "Headset Mic");
 FUNC_5(VAR_5, VAR_6->has_carkitmic, "Carkit Mic");
 FUNC_5(VAR_5, VAR_6->has_digimic0, "Digital0 Mic");
 FUNC_5(VAR_5, VAR_6->has_digimic1, "Digital1 Mic");
 FUNC_5(VAR_5, VAR_6->has_linein, "Line In");

 return VAR_8;
}
