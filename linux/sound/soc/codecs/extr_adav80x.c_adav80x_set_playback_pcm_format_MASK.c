
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {size_t id; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct adav80x {scalar_t__* dai_fmt; int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int ** VAR_7 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (int ,int ,int ,unsigned int) ;
 struct adav80x* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_8,
  struct snd_soc_dai *VAR_9, struct snd_pcm_hw_params *VAR_10)
{
 struct adav80x *VAR_11 = FUNC_2(VAR_8);
 unsigned int VAR_12;

 if (VAR_11->dai_fmt[VAR_9->id] != VAR_6)
  return 0;

 switch (FUNC_0(VAR_10)) {
 case 16:
  VAR_12 = VAR_1;
  break;
 case 18:
  VAR_12 = VAR_2;
  break;
 case 20:
  VAR_12 = VAR_3;
  break;
 case 24:
  VAR_12 = VAR_4;
  break;
 default:
  return -VAR_5;
 }

 FUNC_1(VAR_11->regmap, VAR_7[VAR_9->id][1],
  VAR_0, VAR_12);

 return 0;
}
