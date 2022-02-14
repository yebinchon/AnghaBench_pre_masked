
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct cs43130_private {int pll_bypass; int regmap; int mclk_int; int mclk; } ;
struct cs43130_pll_params {scalar_t__ pll_cal_ratio; int pll_div_frac; scalar_t__ pll_div_int; scalar_t__ pll_divout; int pll_mode; scalar_t__ sclk_prediv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 struct cs43130_pll_params* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 struct cs43130_private* FUNC_4 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_17)
{
 struct cs43130_private *VAR_18 = FUNC_4(VAR_17);
 const struct cs43130_pll_params *VAR_19;

 FUNC_1(VAR_17->dev, "cs43130->mclk = %u, cs43130->mclk_int = %u\n",
  VAR_18->mclk, VAR_18->mclk_int);

 VAR_19 = FUNC_0(VAR_18->mclk, VAR_18->mclk_int);
 if (!VAR_19)
  return -VAR_16;

 if (VAR_19->pll_cal_ratio == 0) {
  FUNC_2(VAR_18->regmap, VAR_6,
       VAR_15, 0);

  VAR_18->pll_bypass = 1;
  return 0;
 }

 VAR_18->pll_bypass = 0;

 FUNC_2(VAR_18->regmap, VAR_7,
      VAR_0,
      VAR_19->pll_div_frac >>
      VAR_1);
 FUNC_2(VAR_18->regmap, VAR_8,
      VAR_0,
      VAR_19->pll_div_frac >>
      VAR_2);
 FUNC_2(VAR_18->regmap, VAR_9,
      VAR_0,
      VAR_19->pll_div_frac >>
      VAR_3);
 FUNC_3(VAR_18->regmap, VAR_10,
       VAR_19->pll_div_int);
 FUNC_3(VAR_18->regmap, VAR_11, VAR_19->pll_divout);
 FUNC_3(VAR_18->regmap, VAR_12,
       VAR_19->pll_cal_ratio);
 FUNC_2(VAR_18->regmap, VAR_13,
      VAR_4,
      VAR_19->pll_mode << VAR_5);
 FUNC_3(VAR_18->regmap, VAR_14,
       VAR_19->sclk_prediv);
 FUNC_2(VAR_18->regmap, VAR_6,
      VAR_15, 1);

 return 0;
}
