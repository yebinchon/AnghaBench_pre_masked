
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct cs35l33_private {int regmap; } ;
struct cs35l33_hg {int mem_depth; int hd_rm; int ldo_thld; int ldo_path_disable; int ldo_entry_delay; int vp_hg; int vp_hg_rate; int vp_hg_va; scalar_t__ vp_hg_auto; int release_rate; scalar_t__ enable_hg_algo; } ;
struct cs35l33_pdata {struct cs35l33_hg hg_config; } ;


 int FUNC_0 (int ) ;
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
 int FUNC_1 (int ,int ,int,int) ;
 int FUNC_2 (int ,int ,int ) ;
 struct snd_soc_dapm_context* FUNC_3 (struct snd_soc_component*) ;
 struct cs35l33_private* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_dapm_context*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_24,
          struct cs35l33_pdata *VAR_25)
{
 struct cs35l33_hg *VAR_26 = &VAR_25->hg_config;
 struct snd_soc_dapm_context *VAR_27 = FUNC_3(VAR_24);
 struct cs35l33_private *VAR_28 = FUNC_4(VAR_24);

 if (VAR_26->enable_hg_algo) {
  FUNC_1(VAR_28->regmap, VAR_5,
   VAR_14,
   VAR_26->mem_depth << VAR_15);
  FUNC_2(VAR_28->regmap, VAR_6,
   VAR_26->release_rate);
  FUNC_1(VAR_28->regmap, VAR_4,
   VAR_1,
   VAR_26->hd_rm << VAR_2);
  FUNC_1(VAR_28->regmap, VAR_5,
   VAR_12,
   VAR_26->ldo_thld << VAR_13);
  FUNC_1(VAR_28->regmap, VAR_5,
   VAR_8,
   VAR_26->ldo_path_disable <<
    VAR_9);
  FUNC_1(VAR_28->regmap, VAR_7,
   VAR_10,
   VAR_26->ldo_entry_delay <<
    VAR_11);
  if (VAR_26->vp_hg_auto) {
   FUNC_1(VAR_28->regmap, VAR_3,
    VAR_16,
    VAR_16);
   FUNC_5(VAR_27, VAR_23,
    FUNC_0(VAR_23));
  }
  FUNC_1(VAR_28->regmap, VAR_3,
   VAR_17,
   VAR_26->vp_hg << VAR_20);
  FUNC_1(VAR_28->regmap, VAR_7,
   VAR_18,
   VAR_26->vp_hg_rate << VAR_19);
  FUNC_1(VAR_28->regmap, VAR_7,
   VAR_21,
   VAR_26->vp_hg_va << VAR_22);
  FUNC_1(VAR_28->regmap, VAR_3,
   VAR_0, VAR_0);
 }
 return 0;
}
