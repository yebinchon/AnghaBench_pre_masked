
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_3__* codec_dai; } ;
struct snd_soc_dapm_widget {TYPE_1__* dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_soc_card {TYPE_2__* dai_link; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_6__ {struct snd_soc_component* component; } ;
struct TYPE_5__ {int name; } ;
struct TYPE_4__ {struct snd_soc_card* card; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct snd_soc_component*,int ) ;
 struct snd_soc_pcm_runtime* FUNC_2 (struct snd_soc_card*,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_0,
     struct snd_kcontrol *VAR_1, int VAR_2)
{
 struct snd_soc_card *VAR_3 = VAR_0->dapm->card;
 struct snd_soc_pcm_runtime *VAR_4;
 struct snd_soc_component *VAR_5;

 VAR_4 = FUNC_2(VAR_3, VAR_3->dai_link[0].name);
 VAR_5 = VAR_4->codec_dai->component;
 return FUNC_1(VAR_5, FUNC_0(VAR_2));
}
