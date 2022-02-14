
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_sgtl5000 {int util_data; } ;
struct snd_soc_pcm_runtime {struct snd_soc_card* card; struct snd_soc_dai* codec_dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_soc_card {int dev; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 struct tegra_sgtl5000* FUNC_2 (struct snd_soc_card*) ;
 int FUNC_3 (struct snd_soc_dai*,int ,int,int ) ;
 int FUNC_4 (int *,int,int) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_2,
     struct snd_pcm_hw_params *VAR_3)
{
 struct snd_soc_pcm_runtime *VAR_4 = VAR_2->private_data;
 struct snd_soc_dai *VAR_5 = VAR_4->codec_dai;
 struct snd_soc_card *VAR_6 = VAR_4->card;
 struct tegra_sgtl5000 *VAR_7 = FUNC_2(VAR_6);
 int VAR_8, VAR_9;
 int VAR_10;

 VAR_8 = FUNC_1(VAR_3);
 switch (VAR_8) {
 case 11025:
 case 22050:
 case 44100:
 case 88200:
  VAR_9 = 11289600;
  break;
 default:
  VAR_9 = 12288000;
  break;
 }

 VAR_10 = FUNC_4(&VAR_7->util_data, VAR_8, VAR_9);
 if (VAR_10 < 0) {
  FUNC_0(VAR_6->dev, "Can't configure clocks\n");
  return VAR_10;
 }

 VAR_10 = FUNC_3(VAR_5, VAR_0, VAR_9,
         VAR_1);
 if (VAR_10 < 0) {
  FUNC_0(VAR_6->dev, "codec_dai clock not set\n");
  return VAR_10;
 }

 return 0;
}
