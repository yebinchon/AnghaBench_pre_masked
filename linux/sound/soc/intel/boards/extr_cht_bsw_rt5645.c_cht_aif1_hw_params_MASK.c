
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
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_soc_dai*,int ,int ,int ,int) ;
 int FUNC_3 (struct snd_soc_dai*,int ,int,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_4,
        struct snd_pcm_hw_params *VAR_5)
{
 struct snd_soc_pcm_runtime *VAR_6 = VAR_4->private_data;
 struct snd_soc_dai *VAR_7 = VAR_6->codec_dai;
 int VAR_8;


 VAR_8 = FUNC_2(VAR_7, 0, VAR_1,
      VAR_0, FUNC_1(VAR_5) * 512);
 if (VAR_8 < 0) {
  FUNC_0(VAR_6->dev, "can't set codec pll: %d\n", VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_3(VAR_7, VAR_2,
    FUNC_1(VAR_5) * 512, VAR_3);
 if (VAR_8 < 0) {
  FUNC_0(VAR_6->dev, "can't set codec sysclk: %d\n", VAR_8);
  return VAR_8;
 }

 return 0;
}
