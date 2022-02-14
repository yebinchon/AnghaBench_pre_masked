
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int shift; int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct rt5663_priv {scalar_t__ codec_ver; } ;


 scalar_t__ VAR_0 ;

 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;

 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 struct rt5663_priv* FUNC_0 (struct snd_soc_component*) ;
 unsigned int FUNC_1 (struct snd_soc_component*,unsigned int) ;
 struct snd_soc_component* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_6,
 struct snd_soc_dapm_widget *VAR_7)
{
 unsigned int VAR_8, VAR_9, VAR_10;
 struct snd_soc_component *VAR_11 = FUNC_2(VAR_6->dapm);
 struct rt5663_priv *VAR_12 = FUNC_0(VAR_11);

 if (VAR_12->codec_ver == VAR_0) {
  switch (VAR_6->shift) {
  case 129:
   VAR_8 = VAR_3;
   VAR_9 = VAR_5;
   break;
  case 128:
   VAR_8 = VAR_2;
   VAR_9 = VAR_4;
   break;
  default:
   return 0;
  }
 } else {
  switch (VAR_6->shift) {
  case 129:
   VAR_8 = VAR_2;
   VAR_9 = VAR_1;
   break;
  case 128:
   VAR_8 = VAR_2;
   VAR_9 = VAR_4;
   break;
  default:
   return 0;
  }
 }

 VAR_10 = (FUNC_1(VAR_11, VAR_8) >> VAR_9) & 0x7;

 if (VAR_10)
  return 1;

 return 0;
}
