
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct adau1701 {scalar_t__ dai_fmt; int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (int ,int ,unsigned int,unsigned int) ;
 struct adau1701* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_11,
        struct snd_pcm_hw_params *VAR_12)
{
 struct adau1701 *VAR_13 = FUNC_2(VAR_11);
 unsigned int VAR_14 = VAR_8;
 unsigned int VAR_15;

 switch (FUNC_0(VAR_12)) {
 case 16:
  VAR_15 = VAR_5;
  break;
 case 20:
  VAR_15 = VAR_6;
  break;
 case 24:
  VAR_15 = VAR_7;
  break;
 default:
  return -VAR_9;
 }

 if (VAR_13->dai_fmt == VAR_10) {
  switch (FUNC_0(VAR_12)) {
  case 16:
   VAR_15 |= VAR_2;
   break;
  case 20:
   VAR_15 |= VAR_1;
   break;
  case 24:
   VAR_15 |= VAR_3;
   break;
  }
  VAR_14 |= VAR_4;
 }

 FUNC_1(VAR_13->regmap, VAR_0, VAR_14, VAR_15);

 return 0;
}
