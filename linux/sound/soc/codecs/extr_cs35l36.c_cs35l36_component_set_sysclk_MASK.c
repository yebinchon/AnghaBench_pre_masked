
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct cs35l36_private {int clksrc; scalar_t__ rev_id; int regmap; scalar_t__ ldm_mode_sel; } ;
struct cs35l36_pll_config {int clk_cfg; int fll_igain; } ;


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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 struct cs35l36_pll_config* FUNC_0 (struct cs35l36_private*,unsigned int) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 struct cs35l36_private* FUNC_4 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_33,
    int VAR_34, int VAR_35, unsigned int VAR_36,
    int VAR_37)
{
 struct cs35l36_private *VAR_38 =
   FUNC_4(VAR_33);
 const struct cs35l36_pll_config *VAR_39;
 int VAR_40;
 bool VAR_41;

 VAR_40 = VAR_38->clksrc;

 switch (VAR_34) {
 case 0:
  VAR_38->clksrc = VAR_11;
  break;
 case 1:
  VAR_38->clksrc = VAR_8;
  break;
 case 2:
  VAR_38->clksrc = VAR_10;
  break;
 case 3:
  VAR_38->clksrc = VAR_12;
  break;
 case 4:
  VAR_38->clksrc = VAR_9;
  break;
 default:
  return -VAR_32;
 }

 VAR_39 = FUNC_0(VAR_38, VAR_36);
 if (VAR_39 == ((void*)0)) {
  FUNC_1(VAR_33->dev, "Invalid CLK Config Freq: %d\n", VAR_36);
  return -VAR_32;
 }

 FUNC_2(VAR_38->regmap, VAR_13,
      VAR_20,
      1 << VAR_21);
 FUNC_2(VAR_38->regmap, VAR_13,
      VAR_24,
      VAR_39->clk_cfg << VAR_25);
 FUNC_2(VAR_38->regmap, VAR_13,
      VAR_22,
      0 << VAR_23);
 FUNC_2(VAR_38->regmap, VAR_13,
      VAR_14,
      VAR_38->clksrc);
 FUNC_2(VAR_38->regmap, VAR_13,
      VAR_20,
      0 << VAR_21);
 FUNC_2(VAR_38->regmap, VAR_13,
      VAR_22,
      1 << VAR_23);

 if (VAR_38->rev_id == VAR_26) {
  FUNC_3(VAR_38->regmap, VAR_27,
        VAR_30);
  FUNC_3(VAR_38->regmap, VAR_27,
        VAR_31);

  FUNC_3(VAR_38->regmap, VAR_1, 0x00036DA8);
  FUNC_3(VAR_38->regmap, VAR_2, 0x0100EE0E);

  FUNC_2(VAR_38->regmap, VAR_19,
       VAR_17,
       VAR_16 <<
       VAR_18);
  FUNC_2(VAR_38->regmap, VAR_19,
       VAR_15,
       VAR_39->fll_igain);

  FUNC_3(VAR_38->regmap, VAR_27,
        VAR_28);
  FUNC_3(VAR_38->regmap, VAR_27,
        VAR_29);
 }

 if (VAR_38->clksrc == VAR_10) {
  VAR_41 = VAR_38->ldm_mode_sel &&
        (VAR_40 != VAR_10);

  if (VAR_41)
   FUNC_2(VAR_38->regmap, VAR_3,
        VAR_4,
        0 << VAR_5);

  FUNC_2(VAR_38->regmap, VAR_0,
       VAR_6,
       1 << VAR_7);

  if (VAR_41)
   FUNC_2(VAR_38->regmap, VAR_3,
        VAR_4,
        3 << VAR_5);
 } else {
  VAR_41 = VAR_38->ldm_mode_sel &&
        (VAR_40 == VAR_10);

  if (VAR_41)
   FUNC_2(VAR_38->regmap, VAR_3,
        VAR_4,
        0 << VAR_5);

  FUNC_2(VAR_38->regmap, VAR_0,
       VAR_6,
       0 << VAR_7);

  if (VAR_41)
   FUNC_2(VAR_38->regmap, VAR_3,
        VAR_4,
        3 << VAR_5);
 }

 return 0;
}
