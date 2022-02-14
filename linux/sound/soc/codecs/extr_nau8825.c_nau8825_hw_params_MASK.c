
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int stream; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct nau8825 {int regmap; } ;
struct TYPE_4__ {unsigned int clk_src; } ;
struct TYPE_3__ {unsigned int clk_src; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_0 (struct nau8825*,int ,unsigned int,unsigned int) ;
 int FUNC_1 (struct nau8825*,int) ;
 int FUNC_2 (struct nau8825*) ;
 TYPE_2__* VAR_23 ;
 TYPE_1__* VAR_24 ;
 unsigned int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (int ,int ,unsigned int*) ;
 int FUNC_6 (int ,int ,int,unsigned int) ;
 struct nau8825* FUNC_7 (struct snd_soc_component*) ;
 unsigned int FUNC_8 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_25,
    struct snd_pcm_hw_params *VAR_26,
    struct snd_soc_dai *VAR_27)
{
 struct snd_soc_component *VAR_28 = VAR_27->component;
 struct nau8825 *VAR_29 = FUNC_7(VAR_28);
 unsigned int VAR_30 = 0, VAR_31, VAR_32, VAR_33, VAR_34;

 FUNC_1(VAR_29, 3 * VAR_1);







 if (VAR_25->stream == VAR_22) {
  FUNC_5(VAR_29->regmap, VAR_19, &VAR_31);
  VAR_31 &= VAR_7;
  if (FUNC_0(VAR_29, VAR_25->stream,
   FUNC_3(VAR_26), VAR_31)) {
   FUNC_2(VAR_29);
   return -VAR_0;
  }
  FUNC_6(VAR_29->regmap, VAR_18,
   VAR_5,
   VAR_24[VAR_31].clk_src << VAR_6);
 } else {
  FUNC_5(VAR_29->regmap, VAR_17, &VAR_31);
  VAR_31 &= VAR_2;
  if (FUNC_0(VAR_29, VAR_25->stream,
   FUNC_3(VAR_26), VAR_31)) {
   FUNC_2(VAR_29);
   return -VAR_0;
  }
  FUNC_6(VAR_29->regmap, VAR_18,
   VAR_3,
   VAR_23[VAR_31].clk_src << VAR_4);
 }


 FUNC_5(VAR_29->regmap, VAR_21, &VAR_32);
 if (VAR_32 & VAR_16) {

  VAR_33 = FUNC_8(VAR_26) / FUNC_3(VAR_26);
  if (VAR_33 <= 32)
   VAR_34 = 2;
  else if (VAR_33 <= 64)
   VAR_34 = 1;
  else if (VAR_33 <= 128)
   VAR_34 = 0;
  else {
   FUNC_2(VAR_29);
   return -VAR_0;
  }
  FUNC_6(VAR_29->regmap, VAR_21,
   VAR_14 | VAR_8,
   ((VAR_34 + 1) << VAR_15) | VAR_34);
 }

 switch (FUNC_4(VAR_26)) {
 case 16:
  VAR_30 |= VAR_9;
  break;
 case 20:
  VAR_30 |= VAR_10;
  break;
 case 24:
  VAR_30 |= VAR_11;
  break;
 case 32:
  VAR_30 |= VAR_12;
  break;
 default:
  FUNC_2(VAR_29);
  return -VAR_0;
 }

 FUNC_6(VAR_29->regmap, VAR_20,
  VAR_13, VAR_30);


 FUNC_2(VAR_29);

 return 0;
}
