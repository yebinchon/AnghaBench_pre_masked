
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {struct snd_soc_dai* cpu_dai; struct snd_soc_dai* codec_dai; } ;
struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_soc_dai*,int ,int ,int ) ;
 int FUNC_2 (struct snd_soc_dai*,int,int,int,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_5,
       struct snd_pcm_hw_params *VAR_6)
{
 struct snd_soc_pcm_runtime *VAR_7 = VAR_5->private_data;
 struct snd_soc_dai *VAR_8 = VAR_7->codec_dai;
 struct snd_soc_dai *VAR_9 = VAR_7->cpu_dai;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_8, 0,
         VAR_0, VAR_4);
 if (VAR_10) {
  FUNC_0(VAR_9->dev,
   "Failed to set the codec sysclk.\n");
  return VAR_10;
 }

 FUNC_2(VAR_9, 0x3, 0x3, 2, 0);

 VAR_10 = FUNC_1(VAR_9, VAR_2, 0,
    VAR_3);

 if (VAR_10 && VAR_10 != -VAR_1) {
  FUNC_0(VAR_9->dev,
   "Can't set the IMX_SSP_SYS_CLK CPU system clock.\n");
  return VAR_10;
 }

 return 0;
}
