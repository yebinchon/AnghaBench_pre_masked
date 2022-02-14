
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {struct snd_soc_dai* codec_dai; } ;
struct snd_soc_dapm_context {scalar_t__ dev; } ;
struct snd_soc_dai {scalar_t__ dev; } ;
struct snd_soc_card {TYPE_1__* dai_link; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;
struct TYPE_2__ {int name; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct snd_soc_dai*,int ,int ,int ,int ) ;
 int FUNC_2 (struct snd_soc_dai*,int ,int,int ) ;
 struct snd_soc_pcm_runtime* FUNC_3 (struct snd_soc_card*,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_card *VAR_3,
       struct snd_soc_dapm_context *VAR_4,
       enum snd_soc_bias_level VAR_5)
{
 struct snd_soc_pcm_runtime *VAR_6;
 struct snd_soc_dai *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_3(VAR_3, VAR_3->dai_link[1].name);
 VAR_7 = VAR_6->codec_dai;

 if (VAR_4->dev != VAR_7->dev)
  return 0;

 switch (VAR_5) {
 case 128:
  VAR_8 = FUNC_2(VAR_7, VAR_2,
          32768, VAR_0);
  if (VAR_8 < 0)
   return VAR_8;

  VAR_8 = FUNC_1(VAR_7, VAR_1,
       0, 0, 0);
  if (VAR_8 < 0) {
   FUNC_0("Failed to stop FLL\n");
   return VAR_8;
  }
  break;

 default:
  break;
 }

 return 0;
}
