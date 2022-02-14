
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {struct snd_soc_dapm_context* dapm; } ;
struct snd_soc_dapm_context {struct snd_soc_card* card; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_soc_card {int dev; } ;
struct snd_kcontrol {int dummy; } ;
struct cht_mc_private {int quirks; int mclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 struct snd_soc_dai* FUNC_4 (struct snd_soc_card*,int ) ;
 struct cht_mc_private* FUNC_5 (struct snd_soc_card*) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dapm_widget *VAR_3,
       struct snd_kcontrol *VAR_4, int VAR_5)
{
 struct snd_soc_dapm_context *VAR_6 = VAR_3->dapm;
 struct snd_soc_card *VAR_7 = VAR_6->card;
 struct snd_soc_dai *VAR_8;
 struct cht_mc_private *VAR_9 = FUNC_5(VAR_7);
 int VAR_10;


 if (VAR_9->quirks & VAR_2)
  return 0;

 VAR_8 = FUNC_4(VAR_7, VAR_0);
 if (!VAR_8) {
  FUNC_3(VAR_7->dev, "Codec dai not found; Unable to set platform clock\n");
  return -VAR_1;
 }

 if (FUNC_0(VAR_5)) {
  VAR_10 = FUNC_2(VAR_9->mclk);
  if (VAR_10 < 0) {
   FUNC_3(VAR_7->dev,
    "could not configure MCLK state");
   return VAR_10;
  }
 } else {
  FUNC_1(VAR_9->mclk);
 }

 return 0;
}
