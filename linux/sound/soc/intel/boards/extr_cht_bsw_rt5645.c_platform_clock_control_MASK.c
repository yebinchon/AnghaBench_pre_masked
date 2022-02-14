
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {struct snd_soc_dapm_context* dapm; } ;
struct snd_soc_dapm_context {struct snd_soc_card* card; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_soc_card {int dev; } ;
struct snd_kcontrol {int dummy; } ;
struct cht_mc_private {int mclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 struct snd_soc_dai* FUNC_4 (struct snd_soc_card*,int ) ;
 struct cht_mc_private* FUNC_5 (struct snd_soc_card*) ;
 int FUNC_6 (struct snd_soc_dai*,int ,int,int ) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_dapm_widget *VAR_5,
  struct snd_kcontrol *VAR_6, int VAR_7)
{
 struct snd_soc_dapm_context *VAR_8 = VAR_5->dapm;
 struct snd_soc_card *VAR_9 = VAR_8->card;
 struct snd_soc_dai *VAR_10;
 struct cht_mc_private *VAR_11 = FUNC_5(VAR_9);
 int VAR_12;

 VAR_10 = FUNC_4(VAR_9, VAR_0);
 if (!VAR_10)
  VAR_10 = FUNC_4(VAR_9, VAR_1);

 if (!VAR_10) {
  FUNC_3(VAR_9->dev, "Codec dai not found; Unable to set platform clock\n");
  return -VAR_2;
 }

 if (FUNC_0(VAR_7)) {
  VAR_12 = FUNC_2(VAR_11->mclk);
  if (VAR_12 < 0) {
   FUNC_3(VAR_9->dev,
    "could not configure MCLK state");
   return VAR_12;
  }
 } else {





  VAR_12 = FUNC_6(VAR_10, VAR_3,
     48000 * 512, VAR_4);
  if (VAR_12 < 0) {
   FUNC_3(VAR_9->dev, "can't set codec sysclk: %d\n", VAR_12);
   return VAR_12;
  }

  FUNC_1(VAR_11->mclk);
 }

 return 0;
}
