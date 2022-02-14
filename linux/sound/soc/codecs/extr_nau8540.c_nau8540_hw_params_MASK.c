
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct nau8540 {int regmap; } ;
struct TYPE_2__ {unsigned int clk_src; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (struct nau8540*,int ,unsigned int) ;
 TYPE_1__* VAR_12 ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (int ,int ,unsigned int*) ;
 int FUNC_4 (int ,int ,int ,unsigned int) ;
 struct nau8540* FUNC_5 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_13,
 struct snd_pcm_hw_params *VAR_14, struct snd_soc_dai *VAR_15)
{
 struct snd_soc_component *VAR_16 = VAR_15->component;
 struct nau8540 *VAR_17 = FUNC_5(VAR_16);
 unsigned int VAR_18 = 0, VAR_19;







 FUNC_3(VAR_17->regmap, VAR_9, &VAR_19);
 VAR_19 &= VAR_1;
 if (FUNC_0(VAR_17, FUNC_1(VAR_14), VAR_19))
  return -VAR_0;
 FUNC_4(VAR_17->regmap, VAR_10,
  VAR_2,
  VAR_12[VAR_19].clk_src << VAR_3);

 switch (FUNC_2(VAR_14)) {
 case 16:
  VAR_18 |= VAR_4;
  break;
 case 20:
  VAR_18 |= VAR_5;
  break;
 case 24:
  VAR_18 |= VAR_6;
  break;
 case 32:
  VAR_18 |= VAR_7;
  break;
 default:
  return -VAR_0;
 }

 FUNC_4(VAR_17->regmap, VAR_11,
  VAR_8, VAR_18);

 return 0;
}
