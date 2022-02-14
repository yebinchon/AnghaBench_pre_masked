
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
 int FUNC_1 (int ,char*,...) ;
 struct snd_soc_dai* FUNC_2 (struct snd_soc_card*,int ) ;
 int FUNC_3 (struct snd_soc_dai*,int ,int,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dapm_widget *VAR_5,
  struct snd_kcontrol *VAR_6, int VAR_7)
{
 struct snd_soc_dapm_context *VAR_8 = VAR_5->dapm;
 struct snd_soc_card *VAR_9 = VAR_8->card;
 struct snd_soc_dai *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_2(VAR_9, VAR_3);
 if (!VAR_10) {
  FUNC_1(VAR_9->dev, "Codec dai not found\n");
  return -VAR_0;
 }

 if (FUNC_0(VAR_7)) {
  VAR_11 = FUNC_3(VAR_10,
    VAR_2, 24000000, VAR_4);
  if (VAR_11 < 0) {
   FUNC_1(VAR_9->dev, "set sysclk err = %d\n", VAR_11);
   return -VAR_0;
  }
 } else {
  VAR_11 = FUNC_3(VAR_10,
    VAR_1, 0, VAR_4);
  if (VAR_11 < 0) {
   FUNC_1(VAR_9->dev, "set sysclk err = %d\n", VAR_11);
   return -VAR_0;
  }
 }
 return VAR_11;
}
