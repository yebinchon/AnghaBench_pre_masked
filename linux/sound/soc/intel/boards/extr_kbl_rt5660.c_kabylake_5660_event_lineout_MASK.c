
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {struct snd_soc_dapm_context* dapm; } ;
struct snd_soc_dapm_context {int card; } ;
struct snd_kcontrol {int dummy; } ;
struct kbl_codec_private {int gpio_lo_mute; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 struct kbl_codec_private* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_0,
   struct snd_kcontrol *VAR_1, int VAR_2)
{
 struct snd_soc_dapm_context *VAR_3 = VAR_0->dapm;
 struct kbl_codec_private *VAR_4 = FUNC_2(VAR_3->card);

 FUNC_1(VAR_4->gpio_lo_mute,
   !(FUNC_0(VAR_2)));

 return 0;
}
