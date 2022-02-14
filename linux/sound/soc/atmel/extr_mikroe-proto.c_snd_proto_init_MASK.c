
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {struct snd_soc_dai* codec_dai; struct snd_soc_card* card; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_soc_card {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_soc_dai*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_pcm_runtime *VAR_3)
{
 struct snd_soc_card *VAR_4 = VAR_3->card;
 struct snd_soc_dai *VAR_5 = VAR_3->codec_dai;


 int VAR_6 = FUNC_1(VAR_5, VAR_1,
      VAR_2, VAR_0);
 if (VAR_6 < 0) {
  FUNC_0(VAR_4->dev, "Failed to set WM8731 SYSCLK: %d\n",
   VAR_6);
  return VAR_6;
 }

 return 0;
}
