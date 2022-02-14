
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {struct snd_soc_dapm_context* dapm; } ;
struct snd_soc_dapm_context {int card; } ;
struct snd_kcontrol {int dummy; } ;
struct asoc_simple_priv {int pa_gpio; } ;


 int VAR_0 ;


 int FUNC_0 (int ,int) ;
 struct asoc_simple_priv* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dapm_widget *VAR_1,
         struct snd_kcontrol *VAR_2,
         int VAR_3)
{
 struct snd_soc_dapm_context *VAR_4 = VAR_1->dapm;
 struct asoc_simple_priv *VAR_5 = FUNC_1(VAR_4->card);

 switch (VAR_3) {
 case 129:
  FUNC_0(VAR_5->pa_gpio, 1);
  break;
 case 128:
  FUNC_0(VAR_5->pa_gpio, 0);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
