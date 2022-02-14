
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {struct snd_soc_dai* codec_dai; } ;
struct snd_soc_dapm_context {scalar_t__ dev; int bias_level; } ;
struct snd_soc_dai {scalar_t__ dev; } ;
struct snd_soc_card {TYPE_1__* dai_link; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;
struct TYPE_2__ {int name; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int) ;
 int VAR_5 ;
 int FUNC_1 (struct snd_soc_dai*,int ,int ,int,int) ;
 int FUNC_2 (struct snd_soc_dai*,int ,int,int ) ;
 struct snd_soc_pcm_runtime* FUNC_3 (struct snd_soc_card*,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_card *VAR_6,
       struct snd_soc_dapm_context *VAR_7,
       enum snd_soc_bias_level VAR_8)
{
 struct snd_soc_pcm_runtime *VAR_9;
 struct snd_soc_dai *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_3(VAR_6, VAR_6->dai_link[0].name);
 VAR_10 = VAR_9->codec_dai;

 if (VAR_7->dev != VAR_10->dev)
  return 0;

 switch (VAR_8) {
 case 128:
  if (VAR_7->bias_level == VAR_0) {
   VAR_11 = FUNC_1(VAR_10, VAR_2,
        VAR_3, 32768,
        VAR_5 * 512);
   if (VAR_11 < 0)
    FUNC_0("Failed to start FLL: %d\n", VAR_11);

   VAR_11 = FUNC_2(VAR_10,
           VAR_4,
           VAR_5 * 512,
           VAR_1);
   if (VAR_11 < 0) {
    FUNC_0("Failed to set SYSCLK: %d\n", VAR_11);
    FUNC_1(VAR_10, VAR_2,
          0, 0, 0);
    return VAR_11;
   }
  }
  break;

 default:
  break;
 }

 return 0;
}
