
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct rt5631_priv {int codec_version; } ;




 int FUNC_0 (struct snd_soc_component*,int) ;
 int FUNC_1 (struct snd_soc_component*,int) ;
 int FUNC_2 (struct snd_soc_component*,int) ;
 int FUNC_3 (struct snd_soc_component*,int) ;
 struct rt5631_priv* FUNC_4 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dapm_widget *VAR_0,
 struct snd_kcontrol *VAR_1, int VAR_2)
{
 struct snd_soc_component *VAR_3 = FUNC_5(VAR_0->dapm);
 struct rt5631_priv *VAR_4 = FUNC_4(VAR_3);

 switch (VAR_2) {
 case 128:
  if (VAR_4->codec_version) {
   FUNC_2(VAR_3, 0);
   FUNC_3(VAR_3, 0);
  } else {
   FUNC_0(VAR_3, 0);
   FUNC_1(VAR_3, 0);
  }
  break;

 case 129:
  if (VAR_4->codec_version) {
   FUNC_3(VAR_3, 1);
   FUNC_2(VAR_3, 1);
  } else {
   FUNC_1(VAR_3, 1);
   FUNC_0(VAR_3, 1);
  }
  break;

 default:
  break;
 }

 return 0;
}
