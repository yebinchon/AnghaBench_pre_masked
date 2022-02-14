
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct rt5631_priv {int rx_rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct rt5631_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ,int ) ;
 struct snd_soc_component* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_6,
 struct snd_kcontrol *VAR_7, int VAR_8)
{
 struct snd_soc_component *VAR_9 = FUNC_2(VAR_6->dapm);
 struct rt5631_priv *VAR_10 = FUNC_0(VAR_9);

 switch (VAR_10->rx_rate) {
 case 44100:
 case 48000:
  FUNC_1(VAR_9, VAR_1,
   VAR_2,
   VAR_4);
  break;

 case 32000:
 case 22050:
  FUNC_1(VAR_9, VAR_1,
   VAR_2,
   VAR_5);
  break;

 case 16000:
 case 11025:
 case 8000:
  FUNC_1(VAR_9, VAR_1,
   VAR_2,
   VAR_3);
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
