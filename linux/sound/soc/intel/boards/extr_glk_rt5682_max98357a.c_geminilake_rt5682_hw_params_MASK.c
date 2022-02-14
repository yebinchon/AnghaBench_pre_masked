
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int dev; struct snd_soc_dai* codec_dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_soc_dai*,int,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0,
 struct snd_pcm_hw_params *VAR_1)
{
 struct snd_soc_pcm_runtime *VAR_2 = VAR_0->private_data;
 struct snd_soc_dai *VAR_3 = VAR_2->codec_dai;
 int VAR_4;


 VAR_4 = FUNC_1(VAR_3, 0x0, 0x0, 2, 24);
 if (VAR_4 < 0) {
  FUNC_0(VAR_2->dev, "set TDM slot err:%d\n", VAR_4);
  return VAR_4;
 }

 return VAR_4;
}
