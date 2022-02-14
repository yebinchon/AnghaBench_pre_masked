
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
struct cs43130_private {int clk_req; int regmap; TYPE_1__* dais; int clk_mutex; scalar_t__ pll_bypass; int mclk; } ;
struct TYPE_2__ {scalar_t__ dai_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (struct snd_soc_component*,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct snd_soc_component*,int ,int ,int ,unsigned int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct snd_pcm_hw_params*) ;
 int FUNC_7 (int ,int ,int,int) ;
 struct cs43130_private* FUNC_8 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_14,
     struct snd_pcm_hw_params *VAR_15,
     struct snd_soc_dai *VAR_16)
{
 struct snd_soc_component *VAR_17 = VAR_16->component;
 struct cs43130_private *VAR_18 = FUNC_8(VAR_17);
 unsigned int VAR_19;
 u8 VAR_20;

 FUNC_4(&VAR_18->clk_mutex);
 if (!VAR_18->clk_req) {

  if (!(VAR_8 % FUNC_6(VAR_15)))
   VAR_19 = VAR_8;
  else
   VAR_19 = VAR_9;

  FUNC_2(VAR_17, 0, 0, VAR_18->mclk, VAR_19);
  if (VAR_18->pll_bypass)
   FUNC_0(VAR_17, VAR_10);
  else
   FUNC_0(VAR_17, VAR_11);
 }

 VAR_18->clk_req++;
 if (VAR_18->clk_req == 2)
  FUNC_1(1, VAR_18->regmap);
 FUNC_5(&VAR_18->clk_mutex);

 switch (FUNC_6(VAR_15)) {
 case 176400:
  VAR_20 = 0;
  break;
 case 352800:
  VAR_20 = 1;
  break;
 default:
  FUNC_3(VAR_17->dev, "Rate(%u) not supported\n",
   FUNC_6(VAR_15));
  return -VAR_12;
 }

 if (VAR_18->dais[VAR_16->id].dai_mode == VAR_13)
  FUNC_7(VAR_18->regmap, VAR_0,
       VAR_1, VAR_1);
 else
  FUNC_7(VAR_18->regmap, VAR_0,
       VAR_1, 0);

 FUNC_7(VAR_18->regmap, VAR_2,
      VAR_3,
      VAR_20 << VAR_4);
 FUNC_7(VAR_18->regmap, VAR_2,
      VAR_6, VAR_5 <<
      VAR_7);

 return 0;
}
