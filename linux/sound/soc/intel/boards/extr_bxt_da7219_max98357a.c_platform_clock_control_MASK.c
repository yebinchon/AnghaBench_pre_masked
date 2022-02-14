
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {struct snd_soc_dapm_context* dapm; } ;
struct snd_soc_dapm_context {struct snd_soc_card* card; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_soc_card {int dev; } ;
struct snd_kcontrol {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 struct snd_soc_dai* FUNC_3 (struct snd_soc_card*,int ) ;
 int FUNC_4 (struct snd_soc_dai*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dapm_widget *VAR_5,
 struct snd_kcontrol *VAR_6, int VAR_7)
{
 int VAR_8 = 0;
 struct snd_soc_dapm_context *VAR_9 = VAR_5->dapm;
 struct snd_soc_card *VAR_10 = VAR_9->card;
 struct snd_soc_dai *VAR_11;

 VAR_11 = FUNC_3(VAR_10, VAR_0);
 if (!VAR_11) {
  FUNC_2(VAR_10->dev, "Codec dai not found; Unable to set/unset codec pll\n");
  return -VAR_4;
 }

 if (FUNC_0(VAR_7)) {
  VAR_8 = FUNC_4(VAR_11, 0,
   VAR_2, 0, 0);
  if (VAR_8)
   FUNC_2(VAR_10->dev, "failed to stop PLL: %d\n", VAR_8);
 } else if(FUNC_1(VAR_7)) {
  VAR_8 = FUNC_4(VAR_11, 0,
   VAR_3, 0, VAR_1);
  if (VAR_8)
   FUNC_2(VAR_10->dev, "failed to start PLL: %d\n", VAR_8);
 }

 return VAR_8;
}
