
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct rt5663_priv {int codec_ver; } ;


 int VAR_0 ;
 int VAR_1 ;


 struct rt5663_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int,int) ;
 struct snd_soc_component* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_2,
 struct snd_kcontrol *VAR_3, int VAR_4)
{
 struct snd_soc_component *VAR_5 = FUNC_2(VAR_2->dapm);
 struct rt5663_priv *VAR_6 = FUNC_0(VAR_5);

 switch (VAR_4) {
 case 128:
  if (VAR_6->codec_ver == VAR_0) {
   FUNC_1(VAR_5, VAR_1, 0x0030,
    0x0030);
   FUNC_1(VAR_5, VAR_1, 0x0003,
    0x0003);
  }
  break;

 case 129:
  if (VAR_6->codec_ver == VAR_0) {
   FUNC_1(VAR_5, VAR_1, 0x0003, 0);
   FUNC_1(VAR_5, VAR_1, 0x0030, 0);
  }
  break;

 default:
  return 0;
 }

 return 0;
}
