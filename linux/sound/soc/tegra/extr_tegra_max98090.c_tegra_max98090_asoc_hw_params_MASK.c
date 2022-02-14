
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_max98090 {int util_data; } ;
struct snd_soc_pcm_runtime {struct snd_soc_card* card; struct snd_soc_dai* codec_dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_soc_card {int dev; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 struct tegra_max98090* FUNC_2 (struct snd_soc_card*) ;
 int FUNC_3 (struct snd_soc_dai*,int ,int,int ) ;
 int FUNC_4 (int *,int,int) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_1,
     struct snd_pcm_hw_params *VAR_2)
{
 struct snd_soc_pcm_runtime *VAR_3 = VAR_1->private_data;
 struct snd_soc_dai *VAR_4 = VAR_3->codec_dai;
 struct snd_soc_card *VAR_5 = VAR_3->card;
 struct tegra_max98090 *VAR_6 = FUNC_2(VAR_5);
 int VAR_7, VAR_8;
 int VAR_9;

 VAR_7 = FUNC_1(VAR_2);
 switch (VAR_7) {
 case 8000:
 case 16000:
 case 24000:
 case 32000:
 case 48000:
 case 64000:
 case 96000:
  VAR_8 = 12288000;
  break;
 case 11025:
 case 22050:
 case 44100:
 case 88200:
  VAR_8 = 11289600;
  break;
 default:
  VAR_8 = 12000000;
  break;
 }

 VAR_9 = FUNC_4(&VAR_6->util_data, VAR_7, VAR_8);
 if (VAR_9 < 0) {
  FUNC_0(VAR_5->dev, "Can't configure clocks\n");
  return VAR_9;
 }

 VAR_9 = FUNC_3(VAR_4, 0, VAR_8,
     VAR_0);
 if (VAR_9 < 0) {
  FUNC_0(VAR_5->dev, "codec_dai clock not set\n");
  return VAR_9;
 }

 return 0;
}
