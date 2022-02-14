
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_pcm_runtime {struct snd_soc_dai* cpu_dai; struct snd_soc_dai* codec_dai; } ;
struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int) ;
 unsigned int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_soc_dai*,int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_2,
 struct snd_pcm_hw_params *VAR_3)
{
 struct snd_soc_pcm_runtime *VAR_4 = VAR_2->private_data;
 struct snd_soc_dai *VAR_5 = VAR_4->codec_dai;
 struct snd_soc_dai *VAR_6 = VAR_4->cpu_dai;
 unsigned int VAR_7 = FUNC_1(VAR_3);
 u32 VAR_8;
 int VAR_9;


 switch (VAR_7) {
 case 96000:
  VAR_8 = 256 * VAR_7;
  break;
 default:
  VAR_8 = 512 * VAR_7;
  break;
 }


 VAR_9 = FUNC_2(VAR_5, VAR_1, VAR_8, 0);
 if (VAR_9) {
  FUNC_0(VAR_5->dev, "Failed to set sysclk to %u.%03uMHz\n",
   VAR_8 / 1000000, VAR_8 / 1000 % 1000);
  return VAR_9;
 }


 VAR_9 = FUNC_2(VAR_6, VAR_0, VAR_8, 0);
 if (VAR_9) {
  FUNC_0(VAR_6->dev, "Failed to set sysclk to %u.%03uMHz\n",
   VAR_8 / 1000000, VAR_8 / 1000 % 1000);
  return VAR_9;
 }

 return 0;
}
