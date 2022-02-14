
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {struct snd_soc_card* card; } ;
struct snd_soc_card_drvdata_davinci {scalar_t__ mclk; } ;
struct snd_soc_card {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;


 int FUNC_0 (scalar_t__) ;
 struct snd_soc_card_drvdata_davinci* FUNC_1 (struct snd_soc_card*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct snd_soc_pcm_runtime *VAR_1 = VAR_0->private_data;
 struct snd_soc_card *VAR_2 = VAR_1->card;
 struct snd_soc_card_drvdata_davinci *VAR_3 =
  FUNC_1(VAR_2);

 if (VAR_3->mclk)
  return FUNC_0(VAR_3->mclk);

 return 0;
}
