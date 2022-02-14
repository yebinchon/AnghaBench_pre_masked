
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {struct snd_soc_dai* codec_dai; } ;
struct snd_soc_dapm_context {scalar_t__ dev; } ;
struct snd_soc_dai {scalar_t__ dev; } ;
struct TYPE_3__ {int bias_level; } ;
struct snd_soc_card {TYPE_1__ dapm; TYPE_2__* dai_link; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct snd_soc_dai*,int ,int ,int,int ) ;
 int FUNC_2 (struct snd_soc_dai*,int ,int ,int ) ;
 struct snd_soc_pcm_runtime* FUNC_3 (struct snd_soc_card*,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_card *VAR_5,
     struct snd_soc_dapm_context *VAR_6,
     enum snd_soc_bias_level VAR_7)
{
 struct snd_soc_pcm_runtime *VAR_8;
 struct snd_soc_dai *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_3(VAR_5, VAR_5->dai_link[1].name);
 VAR_9 = VAR_8->codec_dai;

 if (VAR_6->dev != VAR_9->dev)
  return 0;

 switch (VAR_7) {
 case 128:
  if (VAR_5->dapm.bias_level == VAR_1) {
   VAR_10 = FUNC_1(VAR_9, 0,
        VAR_3,
        32768, VAR_0);
   if (VAR_10 < 0) {
    FUNC_0("Failed to start FLL\n");
    return VAR_10;
   }

   VAR_10 = FUNC_2(VAR_9,
           VAR_4,
           VAR_0,
           VAR_2);
   if (VAR_10 < 0)
    return VAR_10;
  }
  break;

 default:
  break;
 }

 VAR_5->dapm.bias_level = VAR_7;

 return 0;
}
