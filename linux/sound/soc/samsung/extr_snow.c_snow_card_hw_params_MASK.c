
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snow_priv {int clk_i2s_bus; } ;
struct snd_soc_pcm_runtime {TYPE_1__* card; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (unsigned int const*) ;
 int VAR_0 ;
 int FUNC_1 (int ,long) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (int ) ;
 struct snow_priv* FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_1,
          struct snd_pcm_hw_params *VAR_2)
{
 static const unsigned int VAR_3[] = {
  73728000U, 67737602U, 49152000U, 45158401U, 32768001U
 };
 struct snd_soc_pcm_runtime *VAR_4 = VAR_1->private_data;
 struct snow_priv *VAR_5 = FUNC_6(VAR_4->card);
 int VAR_6, VAR_7, VAR_8, VAR_9;
 unsigned long int VAR_10;
 long int VAR_11 = -VAR_0;
 int VAR_12, VAR_13;

 VAR_9 = FUNC_5(FUNC_3(VAR_2));
 if (VAR_9 < 0) {
  FUNC_2(VAR_4->card->dev, "Invalid bit-width: %d\n", VAR_9);
  return VAR_9;
 }

 if (VAR_9 != 16 && VAR_9 != 24) {
  FUNC_2(VAR_4->card->dev, "Unsupported bit-width: %d\n", VAR_9);
  return -VAR_0;
 }

 VAR_6 = 2 * VAR_9;

 switch (FUNC_4(VAR_2)) {
 case 16000:
 case 22050:
 case 24000:
 case 32000:
 case 44100:
 case 48000:
 case 88200:
 case 96000:
  VAR_8 = 8 * VAR_6;
  break;
 case 64000:
  VAR_8 = 384;
  break;
 case 8000:
 case 11025:
 case 12000:
  VAR_8 = 16 * VAR_6;
  break;
 default:
  return -VAR_0;
 }

 VAR_10 = FUNC_4(VAR_2) * VAR_8;

 for (VAR_7 = 8; VAR_7 > 0; VAR_7 /= 2) {
  for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_3); VAR_13++) {
   if ((VAR_3[VAR_13] - VAR_10 * VAR_7) <= 2) {
    VAR_11 = VAR_3[VAR_13];
    break;
   }
  }
 }
 if (VAR_11 < 0) {
  FUNC_2(VAR_4->card->dev, "Unsupported RCLK rate: %lu\n", VAR_10);
  return -VAR_0;
 }

 VAR_12 = FUNC_1(VAR_5->clk_i2s_bus, VAR_11);
 if (VAR_12 < 0) {
  FUNC_2(VAR_4->card->dev, "I2S bus clock rate set failed\n");
  return VAR_12;
 }

 return 0;
}
