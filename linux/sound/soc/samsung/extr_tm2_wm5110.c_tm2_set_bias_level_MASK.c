
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_2__* codec_dai; } ;
struct snd_soc_dapm_context {scalar_t__ dev; } ;
struct TYPE_6__ {int bias_level; } ;
struct snd_soc_card {TYPE_3__ dapm; TYPE_1__* dai_link; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;
struct TYPE_5__ {scalar_t__ dev; } ;
struct TYPE_4__ {int name; } ;




 struct snd_soc_pcm_runtime* FUNC_0 (struct snd_soc_card*,int ) ;
 int FUNC_1 (struct snd_soc_card*) ;
 int FUNC_2 (struct snd_soc_card*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_card *VAR_0,
    struct snd_soc_dapm_context *VAR_1,
    enum snd_soc_bias_level VAR_2)
{
 struct snd_soc_pcm_runtime *VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_0->dai_link[0].name);

 if (VAR_1->dev != VAR_3->codec_dai->dev)
  return 0;

 switch (VAR_2) {
 case 128:
  if (VAR_0->dapm.bias_level == 129)
   FUNC_1(VAR_0);
  break;
 case 129:
  FUNC_2(VAR_0);
  break;
 default:
  break;
 }

 return 0;
}
