
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {struct snd_soc_dai* codec_dai; } ;
struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_soc_dai*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_2)
{
 struct snd_soc_pcm_runtime *VAR_3 = VAR_2->private_data;
 struct snd_soc_dai *VAR_4 = VAR_3->codec_dai;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4, 0,
      VAR_0, 0, 0);
 if (VAR_5 < 0) {
  FUNC_0(VAR_4->dev, "failed to stop PLL: %d\n", VAR_5);
  return -VAR_1;
 }

 return VAR_5;
}
