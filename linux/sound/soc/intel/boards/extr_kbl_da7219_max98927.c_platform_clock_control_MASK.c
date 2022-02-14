
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
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 struct snd_soc_dai* FUNC_3 (struct snd_soc_card*,int ) ;
 int FUNC_4 (struct snd_soc_dai*,int ,int ,int ,int ) ;
 int FUNC_5 (struct snd_soc_dai*,int ,int,int ) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dapm_widget *VAR_7,
     struct snd_kcontrol *VAR_8, int VAR_9)
{
 struct snd_soc_dapm_context *VAR_10 = VAR_7->dapm;
 struct snd_soc_card *VAR_11 = VAR_10->card;
 struct snd_soc_dai *VAR_12;
 int VAR_13 = 0;

 VAR_12 = FUNC_3(VAR_11, VAR_5);
 if (!VAR_12) {
  FUNC_2(VAR_11->dev, "Codec dai not found; Unable to set/unset codec pll\n");
  return -VAR_4;
 }


 VAR_13 = FUNC_5(VAR_12, VAR_0, 24576000,
         VAR_6);
 if (VAR_13) {
  FUNC_2(VAR_11->dev, "can't set codec sysclk configuration\n");
  return VAR_13;
 }

 if (FUNC_0(VAR_9)) {
  VAR_13 = FUNC_4(VAR_12, 0,
         VAR_2, 0, 0);
  if (VAR_13)
   FUNC_2(VAR_11->dev, "failed to stop PLL: %d\n", VAR_13);
 } else if (FUNC_1(VAR_9)) {
  VAR_13 = FUNC_4(VAR_12, 0, VAR_3,
         0, VAR_1);
  if (VAR_13)
   FUNC_2(VAR_11->dev, "failed to start PLL: %d\n", VAR_13);
 }

 return VAR_13;
}
