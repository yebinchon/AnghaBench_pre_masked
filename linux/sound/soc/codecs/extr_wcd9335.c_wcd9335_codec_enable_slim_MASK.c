
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int chs; } ;
struct wcd_slim_codec_dai_data {TYPE_1__ sconfig; } ;
struct wcd9335_codec {struct wcd_slim_codec_dai_data* dai; } ;
struct snd_soc_dapm_widget {size_t shift; int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;




 int FUNC_0 (int ) ;
 struct wcd9335_codec* FUNC_1 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_2 (int ) ;
 int FUNC_3 (struct wcd_slim_codec_dai_data*,struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dapm_widget *VAR_0,
           struct snd_kcontrol *VAR_1,
           int VAR_2)
{
 struct snd_soc_component *VAR_3 = FUNC_2(VAR_0->dapm);
 struct wcd9335_codec *VAR_4 = FUNC_1(VAR_3);
 struct wcd_slim_codec_dai_data *VAR_5 = &VAR_4->dai[VAR_0->shift];

 switch (VAR_2) {
 case 128:
  FUNC_3(VAR_5, VAR_3);
  break;
 case 129:
  FUNC_0(VAR_5->sconfig.chs);

  break;
 }

 return 0;
}
