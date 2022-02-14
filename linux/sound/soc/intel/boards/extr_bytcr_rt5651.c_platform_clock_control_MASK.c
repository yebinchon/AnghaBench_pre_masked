
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {struct snd_soc_dapm_context* dapm; } ;
struct snd_soc_dapm_context {struct snd_soc_card* card; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_soc_card {int dev; } ;
struct snd_kcontrol {int dummy; } ;
struct byt_rt5651_private {int mclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct snd_soc_dai*,int,int) ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 struct snd_soc_dai* FUNC_5 (struct snd_soc_card*,int ) ;
 struct byt_rt5651_private* FUNC_6 (struct snd_soc_card*) ;
 int FUNC_7 (struct snd_soc_dai*,int ,int,int ) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_dapm_widget *VAR_7,
      struct snd_kcontrol *VAR_8, int VAR_9)
{
 struct snd_soc_dapm_context *VAR_10 = VAR_7->dapm;
 struct snd_soc_card *VAR_11 = VAR_10->card;
 struct snd_soc_dai *VAR_12;
 struct byt_rt5651_private *VAR_13 = FUNC_6(VAR_11);
 int VAR_14;

 VAR_12 = FUNC_5(VAR_11, VAR_0);
 if (!VAR_12)
  VAR_12 = FUNC_5(VAR_11, VAR_1);
 if (!VAR_12) {
  FUNC_4(VAR_11->dev,
   "Codec dai not found; Unable to set platform clock\n");
  return -VAR_3;
 }

 if (FUNC_0(VAR_9)) {
  if (VAR_6 & VAR_2) {
   VAR_14 = FUNC_3(VAR_13->mclk);
   if (VAR_14 < 0) {
    FUNC_4(VAR_11->dev,
     "could not configure MCLK state");
    return VAR_14;
   }
  }
  VAR_14 = FUNC_1(VAR_12, 48000, 50);
 } else {





  VAR_14 = FUNC_7(VAR_12, VAR_4,
          48000 * 512,
          VAR_5);
  if (!VAR_14)
   if (VAR_6 & VAR_2)
    FUNC_2(VAR_13->mclk);
 }

 if (VAR_14 < 0) {
  FUNC_4(VAR_11->dev, "can't set codec sysclk: %d\n", VAR_14);
  return VAR_14;
 }

 return 0;
}
