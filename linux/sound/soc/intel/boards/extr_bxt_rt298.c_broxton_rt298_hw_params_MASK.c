
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int dev; struct snd_soc_dai* codec_dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_soc_dai*,int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_2,
 struct snd_pcm_hw_params *VAR_3)
{
 struct snd_soc_pcm_runtime *VAR_4 = VAR_2->private_data;
 struct snd_soc_dai *VAR_5 = VAR_4->codec_dai;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_5, VAR_0,
     19200000, VAR_1);
 if (VAR_6 < 0) {
  FUNC_0(VAR_4->dev, "can't set codec sysclk configuration\n");
  return VAR_6;
 }

 return VAR_6;
}
