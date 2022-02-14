
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {struct snd_soc_dapm_context* dapm; } ;
struct snd_soc_dapm_context {struct snd_soc_card* card; } ;
struct snd_soc_card {int dev; } ;
struct snd_kcontrol {int dummy; } ;
struct kbl_rt5663_private {int sclk; int mclk; } ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char*,int) ;
 struct kbl_rt5663_private* FUNC_4 (struct snd_soc_card*) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dapm_widget *VAR_0,
   struct snd_kcontrol *VAR_1, int VAR_2)
{
 struct snd_soc_dapm_context *VAR_3 = VAR_0->dapm;
 struct snd_soc_card *VAR_4 = VAR_3->card;
 struct kbl_rt5663_private *VAR_5 = FUNC_4(VAR_4);
 int VAR_6 = 0;






 switch (VAR_2) {
 case 128:

  VAR_6 = FUNC_2(VAR_5->mclk, 24000000);
  if (VAR_6 < 0) {
   FUNC_3(VAR_4->dev, "Can't set rate for mclk, err: %d\n",
    VAR_6);
   return VAR_6;
  }

  VAR_6 = FUNC_1(VAR_5->mclk);
  if (VAR_6 < 0) {
   FUNC_3(VAR_4->dev, "Can't enable mclk, err: %d\n", VAR_6);
   return VAR_6;
  }


  VAR_6 = FUNC_2(VAR_5->sclk, 3072000);
  if (VAR_6 < 0) {
   FUNC_3(VAR_4->dev, "Can't set rate for sclk, err: %d\n",
    VAR_6);
   FUNC_0(VAR_5->mclk);
   return VAR_6;
  }

  VAR_6 = FUNC_1(VAR_5->sclk);
  if (VAR_6 < 0) {
   FUNC_3(VAR_4->dev, "Can't enable sclk, err: %d\n", VAR_6);
   FUNC_0(VAR_5->mclk);
  }
  break;
 case 129:
  FUNC_0(VAR_5->mclk);
  FUNC_0(VAR_5->sclk);
  break;
 default:
  return 0;
 }

 return 0;
}
