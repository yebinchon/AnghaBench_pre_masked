
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs35l36_vpbr_cfg {int vpbr_en; int vpbr_thld; int vpbr_max_attn; int vpbr_atk_vol; int vpbr_atk_rate; int vpbr_wait; int vpbr_rel_rate; int vpbr_mute_en; } ;
struct cs35l36_platform_data {struct cs35l36_vpbr_cfg vpbr_config; } ;
struct cs35l36_private {int regmap; struct cs35l36_platform_data pdata; } ;


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
 int FUNC_0 (int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct cs35l36_private *VAR_18)
{
 struct cs35l36_platform_data *VAR_19 = &VAR_18->pdata;
 struct cs35l36_vpbr_cfg *VAR_20 = &VAR_19->vpbr_config;

 FUNC_0(VAR_18->regmap, VAR_0,
      VAR_6,
      VAR_20->vpbr_en <<
      VAR_7);
 FUNC_0(VAR_18->regmap, VAR_5,
      VAR_14,
      VAR_20->vpbr_thld <<
      VAR_15);
 FUNC_0(VAR_18->regmap, VAR_5,
      VAR_8,
      VAR_20->vpbr_max_attn <<
      VAR_9);
 FUNC_0(VAR_18->regmap, VAR_5,
      VAR_3,
      VAR_20->vpbr_atk_vol <<
      VAR_4);
 FUNC_0(VAR_18->regmap, VAR_5,
      VAR_1,
      VAR_20->vpbr_atk_rate <<
      VAR_2);
 FUNC_0(VAR_18->regmap, VAR_5,
      VAR_16,
      VAR_20->vpbr_wait <<
      VAR_17);
 FUNC_0(VAR_18->regmap, VAR_5,
      VAR_12,
      VAR_20->vpbr_rel_rate <<
      VAR_13);
 FUNC_0(VAR_18->regmap, VAR_5,
      VAR_10,
      VAR_20->vpbr_mute_en <<
      VAR_11);
}
