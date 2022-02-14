
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssm4567 {int regmap; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (int ,int ,int ,unsigned int) ;
 struct ssm4567* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_8,
 struct snd_pcm_hw_params *VAR_9, struct snd_soc_dai *VAR_10)
{
 struct snd_soc_component *VAR_11 = VAR_10->component;
 struct ssm4567 *VAR_12 = FUNC_2(VAR_11);
 unsigned int VAR_13 = FUNC_0(VAR_9);
 unsigned int VAR_14;

 if (VAR_13 >= 8000 && VAR_13 <= 12000)
  VAR_14 = VAR_5;
 else if (VAR_13 >= 16000 && VAR_13 <= 24000)
  VAR_14 = VAR_2;
 else if (VAR_13 >= 32000 && VAR_13 <= 48000)
  VAR_14 = VAR_3;
 else if (VAR_13 >= 64000 && VAR_13 <= 96000)
  VAR_14 = VAR_4;
 else if (VAR_13 >= 128000 && VAR_13 <= 192000)
  VAR_14 = VAR_1;
 else
  return -VAR_0;

 return FUNC_1(VAR_12->regmap, VAR_7,
    VAR_6, VAR_14);
}
