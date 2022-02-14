
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct adau1701 {scalar_t__ dai_fmt; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (int ,int ,int ,unsigned int) ;
 struct adau1701* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_7,
         struct snd_pcm_hw_params *VAR_8)
{
 struct adau1701 *VAR_9 = FUNC_2(VAR_7);
 unsigned int VAR_10;

 if (VAR_9->dai_fmt != VAR_6)
  return 0;

 switch (FUNC_0(VAR_8)) {
 case 16:
  VAR_10 = VAR_2;
  break;
 case 20:
  VAR_10 = VAR_3;
  break;
 case 24:
  VAR_10 = VAR_4;
  break;
 default:
  return -VAR_5;
 }

 FUNC_1(VAR_9->regmap, VAR_0,
  VAR_1, VAR_10);

 return 0;
}
