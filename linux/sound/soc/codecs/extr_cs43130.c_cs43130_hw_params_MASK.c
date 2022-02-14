
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct snd_soc_dai {size_t id; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct cs43130_rate_map {int val; } ;
struct cs43130_private {int clk_req; int regmap; TYPE_1__* dais; int clk_mutex; scalar_t__ pll_bypass; int mclk; } ;
struct TYPE_2__ {unsigned int sclk; scalar_t__ dai_mode; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (struct snd_soc_component*,int ) ;
 struct cs43130_rate_map* FUNC_1 (unsigned int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (size_t,unsigned int,int ) ;
 int FUNC_4 (struct snd_soc_component*,int ,int ,int ,unsigned int) ;
 int FUNC_5 (size_t,unsigned int,struct snd_pcm_hw_params*,struct cs43130_private*) ;
 int FUNC_6 (int ,char*,unsigned int,unsigned int,...) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 unsigned int FUNC_10 (struct snd_pcm_hw_params*) ;
 unsigned int FUNC_11 (struct snd_pcm_hw_params*) ;
 scalar_t__ FUNC_12 (struct snd_pcm_hw_params*) ;
 int FUNC_13 (int ,int ,int ,int) ;
 int FUNC_14 (int ,int ,int ) ;
 struct cs43130_private* FUNC_15 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_16(struct snd_pcm_substream *VAR_14,
     struct snd_pcm_hw_params *VAR_15,
     struct snd_soc_dai *VAR_16)
{
 struct snd_soc_component *VAR_17 = VAR_16->component;
 struct cs43130_private *VAR_18 = FUNC_15(VAR_17);
 const struct cs43130_rate_map *VAR_19;
 unsigned int VAR_20 = VAR_18->dais[VAR_16->id].sclk;
 unsigned int VAR_21;
 unsigned int VAR_22 = (unsigned int)(FUNC_12(VAR_15));
 unsigned int VAR_23;
 u8 VAR_24;

 FUNC_8(&VAR_18->clk_mutex);
 if (!VAR_18->clk_req) {

  if (!(VAR_7 % FUNC_11(VAR_15)))
   VAR_23 = VAR_7;
  else
   VAR_23 = VAR_8;

  FUNC_4(VAR_17, 0, 0, VAR_18->mclk, VAR_23);
  if (VAR_18->pll_bypass)
   FUNC_0(VAR_17, VAR_9);
  else
   FUNC_0(VAR_17, VAR_10);
 }

 VAR_18->clk_req++;
 if (VAR_18->clk_req == 2)
  FUNC_2(1, VAR_18->regmap);
 FUNC_9(&VAR_18->clk_mutex);

 switch (VAR_16->id) {
 case 130:
 case 128:

  VAR_22 = 24;
  VAR_20 = FUNC_11(VAR_15) * VAR_22 *
         FUNC_10(VAR_15);

  switch (FUNC_11(VAR_15)) {
  case 176400:
   VAR_24 = 0;
   break;
  case 352800:
   VAR_24 = 1;
   break;
  default:
   FUNC_7(VAR_17->dev, "Rate(%u) not supported\n",
    FUNC_11(VAR_15));
   return -VAR_12;
  }

  FUNC_13(VAR_18->regmap, VAR_0,
       VAR_1,
       VAR_24 << VAR_2);
  break;
 case 129:
  VAR_19 = FUNC_1(FUNC_11(VAR_15));
  if (!VAR_19)
   return -VAR_12;

  FUNC_14(VAR_18->regmap, VAR_11, VAR_19->val);
  break;
 default:
  FUNC_7(VAR_17->dev, "Invalid DAI (%d)\n", VAR_16->id);
  return -VAR_12;
 }

 switch (VAR_16->id) {
 case 130:
  FUNC_13(VAR_18->regmap, VAR_0,
       VAR_4, VAR_3 <<
       VAR_5);
  break;
 case 128:
  FUNC_13(VAR_18->regmap, VAR_0,
       VAR_4, VAR_6 <<
       VAR_5);
  break;
 }

 if (!VAR_20 && VAR_18->dais[VAR_16->id].dai_mode == VAR_13)

  VAR_20 = FUNC_11(VAR_15) * VAR_22 *
         FUNC_10(VAR_15);

 if (!VAR_20) {

  FUNC_7(VAR_17->dev, "SCLK freq is not set\n");
  return -VAR_12;
 }

 VAR_21 = (VAR_20 / FUNC_11(VAR_15)) / FUNC_10(VAR_15);
 if (VAR_21 < VAR_22) {
  FUNC_7(VAR_17->dev, "Format not supported: SCLK freq is too low\n");
  return -VAR_12;
 }

 FUNC_6(VAR_17->dev,
  "sclk = %u, fs = %d, bitwidth_dai = %u\n",
  VAR_20, FUNC_11(VAR_15), VAR_22);

 FUNC_6(VAR_17->dev,
  "bitwidth_sclk = %u, num_ch = %u\n",
  VAR_21, FUNC_10(VAR_15));

 FUNC_3(VAR_16->id, VAR_22, VAR_18->regmap);
 FUNC_5(VAR_16->id, VAR_21, VAR_15, VAR_18);

 return 0;
}
