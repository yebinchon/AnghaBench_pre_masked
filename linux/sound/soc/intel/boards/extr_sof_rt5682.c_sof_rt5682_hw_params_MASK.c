
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sof_card_private {int mclk; } ;
struct snd_soc_pcm_runtime {int dev; struct snd_soc_dai* codec_dai; int card; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 struct sof_card_private* FUNC_4 (int ) ;
 int FUNC_5 (struct snd_soc_dai*,int ,int,int,int) ;
 int FUNC_6 (struct snd_soc_dai*,int ,int,int ) ;
 int FUNC_7 (struct snd_soc_dai*,int,int,int,int ) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_8,
    struct snd_pcm_hw_params *VAR_9)
{
 struct snd_soc_pcm_runtime *VAR_10 = VAR_8->private_data;
 struct sof_card_private *VAR_11 = FUNC_4(VAR_10->card);
 struct snd_soc_dai *VAR_12 = VAR_10->codec_dai;
 int VAR_13, VAR_14, VAR_15, VAR_16;

 if (VAR_7 & VAR_6) {
  if (VAR_7 & VAR_5) {
   VAR_16 = FUNC_0(VAR_11->mclk);
   if (VAR_16 < 0) {
    FUNC_1(VAR_10->dev,
     "could not configure MCLK state");
    return VAR_16;
   }
  }

  VAR_13 = VAR_1;
  if (VAR_7 & VAR_4)
   VAR_14 = 24000000;
  else
   VAR_14 = 19200000;
 } else {
  VAR_13 = VAR_0;
  VAR_14 = FUNC_2(VAR_9) * 50;
 }

 VAR_15 = FUNC_2(VAR_9) * 512;

 VAR_16 = FUNC_5(VAR_12, 0, VAR_13, VAR_14, VAR_15);
 if (VAR_16 < 0)
  FUNC_1(VAR_10->dev, "snd_soc_dai_set_pll err = %d\n", VAR_16);


 VAR_16 = FUNC_6(VAR_12, VAR_2,
         VAR_15, VAR_3);
 if (VAR_16 < 0)
  FUNC_1(VAR_10->dev, "snd_soc_dai_set_sysclk err = %d\n", VAR_16);





 VAR_16 = FUNC_7(VAR_12, 0x0, 0x0, 2,
           FUNC_3(VAR_9));
 if (VAR_16 < 0) {
  FUNC_1(VAR_10->dev, "set TDM slot err:%d\n", VAR_16);
  return VAR_16;
 }

 return VAR_16;
}
