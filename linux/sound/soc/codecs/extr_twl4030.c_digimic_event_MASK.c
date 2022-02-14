
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl4030_priv {struct twl4030_codec_data* pdata; } ;
struct twl4030_codec_data {scalar_t__ digimic_delay; } ;
struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;


 struct twl4030_priv* FUNC_0 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_0,
    struct snd_kcontrol *VAR_1, int VAR_2)
{
 struct snd_soc_component *VAR_3 = FUNC_1(VAR_0->dapm);
 struct twl4030_priv *VAR_4 = FUNC_0(VAR_3);
 struct twl4030_codec_data *VAR_5 = VAR_4->pdata;

 if (VAR_5 && VAR_5->digimic_delay)
  FUNC_2(VAR_5->digimic_delay);
 return 0;
}
