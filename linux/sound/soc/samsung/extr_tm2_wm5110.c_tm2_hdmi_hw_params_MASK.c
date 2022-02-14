
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* card; struct snd_soc_dai* cpu_dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct snd_soc_dai*,int ,unsigned int) ;
 int FUNC_5 (struct snd_soc_dai*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_4,
         struct snd_pcm_hw_params *VAR_5)
{
 struct snd_soc_pcm_runtime *VAR_6 = VAR_4->private_data;
 struct snd_soc_dai *VAR_7 = VAR_6->cpu_dai;
 unsigned int VAR_8;
 int VAR_9, VAR_10;

 VAR_9 = FUNC_3(FUNC_1(VAR_5));
 if (VAR_9 < 0) {
  FUNC_0(VAR_6->card->dev, "Invalid bit-width: %d\n", VAR_9);
  return VAR_9;
 }

 switch (VAR_9) {
 case 48:
  VAR_8 = 64;
  break;
 case 16:
  VAR_8 = 32;
  break;
 default:
  FUNC_0(VAR_6->card->dev, "Unsupported bit-width: %d\n", VAR_9);
  return -VAR_0;
 }

 switch (FUNC_2(VAR_5)) {
 case 48000:
 case 96000:
 case 192000:
  break;
 default:
  FUNC_0(VAR_6->card->dev, "Unsupported sample rate: %d\n",
   FUNC_2(VAR_5));
  return -VAR_0;
 }

 VAR_10 = FUNC_5(VAR_7, VAR_2,
     0, VAR_3);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_4(VAR_7, VAR_1, VAR_8);
 if (VAR_10 < 0)
  return VAR_10;

 return 0;
}
