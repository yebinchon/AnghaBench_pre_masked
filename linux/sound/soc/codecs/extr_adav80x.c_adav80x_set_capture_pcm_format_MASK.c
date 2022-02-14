
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {size_t id; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct adav80x {int regmap; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int ** VAR_6 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (int ,int ,int ,unsigned int) ;
 struct adav80x* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_7,
  struct snd_soc_dai *VAR_8, struct snd_pcm_hw_params *VAR_9)
{
 struct adav80x *VAR_10 = FUNC_2(VAR_7);
 unsigned int VAR_11;

 switch (FUNC_0(VAR_9)) {
 case 16:
  VAR_11 = VAR_1;
  break;
 case 18:
  VAR_11 = VAR_0;
  break;
 case 20:
  VAR_11 = VAR_2;
  break;
 case 24:
  VAR_11 = VAR_3;
  break;
 default:
  return -VAR_5;
 }

 FUNC_1(VAR_10->regmap, VAR_6[VAR_8->id][0],
  VAR_4, VAR_11);

 return 0;
}
