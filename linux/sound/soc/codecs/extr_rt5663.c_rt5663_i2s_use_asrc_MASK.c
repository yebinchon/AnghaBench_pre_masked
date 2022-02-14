
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dev; } ;
struct rt5663_priv {int codec_ver; int sysclk; int lrck; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 struct rt5663_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ) ;
 struct snd_soc_component* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dapm_widget *VAR_5,
 struct snd_soc_dapm_widget *VAR_6)
{
 struct snd_soc_component *VAR_7 = FUNC_3(VAR_5->dapm);
 struct rt5663_priv *VAR_8 = FUNC_1(VAR_7);
 int VAR_9, VAR_10;

 VAR_9 = (FUNC_2(VAR_7, VAR_1) &
  VAR_3) ? 1 : 0;
 switch (VAR_8->codec_ver) {
 case 128:
  VAR_10 = (FUNC_2(VAR_7, VAR_2) &
   VAR_4) ? 1 : 0;
  break;
 case 129:
  VAR_10 = (FUNC_2(VAR_7, VAR_1) &
   VAR_0) ? 1 : 0;
  break;
 default:
  FUNC_0(VAR_7->dev, "Unknown CODEC Version\n");
  return 1;
 }

 if (VAR_9 || VAR_10)
  if (VAR_8->sysclk > VAR_8->lrck * 384)
   return 1;

 FUNC_0(VAR_7->dev, "sysclk < 384 x fs, disable i2s asrc\n");

 return 0;
}
