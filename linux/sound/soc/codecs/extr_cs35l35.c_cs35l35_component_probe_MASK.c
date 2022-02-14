
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct monitor_cfg {int vmon_dpth; int vmon_loc; int vmon_frm; int imon_dpth; int imon_loc; int imon_frm; int imon_scale; int vpmon_dpth; int vpmon_loc; int vpmon_frm; int vbstmon_loc; int vbstmon_frm; int vpbrstat_dpth; int vpbrstat_loc; int vpbrstat_frm; int zerofill_dpth; int zerofill_loc; int zerofill_frm; scalar_t__ zerofill_specs; scalar_t__ vpbrstat_specs; scalar_t__ vbstmon_specs; scalar_t__ vpmon_specs; scalar_t__ imon_specs; scalar_t__ vmon_specs; scalar_t__ is_present; } ;
struct classh_cfg {int classh_bst_override; int classh_bst_max_limit; int classh_mem_depth; int classh_headroom; int classh_release_rate; int classh_wk_fet_disable; int classh_wk_fet_delay; int classh_wk_fet_thld; int classh_vpch_auto; int classh_vpch_rate; int classh_vpch_man; scalar_t__ classh_algo_enable; } ;
struct TYPE_2__ {int bst_vctl; int bst_ipk; int gain_zc; int aud_channel; int adv_channel; int sp_drv_str; int sp_drv_unused; scalar_t__ shared_bst; scalar_t__ stereo; int boost_ind; struct monitor_cfg mon_cfg; struct classh_cfg classh_algo; } ;
struct cs35l35_private {int regmap; TYPE_1__ pdata; } ;


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
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;
 int FUNC_1 (struct cs35l35_private*,int ) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (struct snd_soc_component*,int ,int ) ;
 struct cs35l35_private* FUNC_4 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_77)
{
 struct cs35l35_private *VAR_78 = FUNC_4(VAR_77);
 struct classh_cfg *VAR_79 = &VAR_78->pdata.classh_algo;
 struct monitor_cfg *VAR_80 = &VAR_78->pdata.mon_cfg;
 int VAR_81;


 if (VAR_78->pdata.bst_vctl)
  FUNC_2(VAR_78->regmap, VAR_9,
    VAR_8,
    VAR_78->pdata.bst_vctl);

 if (VAR_78->pdata.bst_ipk)
  FUNC_2(VAR_78->regmap, VAR_12,
    VAR_10,
    VAR_78->pdata.bst_ipk <<
    VAR_11);

 VAR_81 = FUNC_1(VAR_78, VAR_78->pdata.boost_ind);
 if (VAR_81)
  return VAR_81;

 if (VAR_78->pdata.gain_zc)
  FUNC_2(VAR_78->regmap, VAR_53,
    VAR_3,
    VAR_78->pdata.gain_zc <<
    VAR_4);

 if (VAR_78->pdata.aud_channel)
  FUNC_2(VAR_78->regmap,
    VAR_5,
    VAR_6,
    VAR_78->pdata.aud_channel <<
    VAR_7);

 if (VAR_78->pdata.stereo) {
  FUNC_2(VAR_78->regmap,
    VAR_0,
    VAR_1,
    VAR_78->pdata.adv_channel <<
    VAR_2);
  if (VAR_78->pdata.shared_bst)
   FUNC_2(VAR_78->regmap, VAR_37,
     VAR_23,
     1 << VAR_24);
  VAR_81 = FUNC_3(VAR_77, VAR_76,
     FUNC_0(VAR_76));
  if (VAR_81)
   return VAR_81;
 }

 if (VAR_78->pdata.sp_drv_str)
  FUNC_2(VAR_78->regmap, VAR_42,
    VAR_55,
    VAR_78->pdata.sp_drv_str <<
    VAR_56);
 if (VAR_78->pdata.sp_drv_unused)
  FUNC_2(VAR_78->regmap, VAR_57,
       VAR_58,
       VAR_78->pdata.sp_drv_unused <<
       VAR_59);

 if (VAR_79->classh_algo_enable) {
  if (VAR_79->classh_bst_override)
   FUNC_2(VAR_78->regmap,
     VAR_37,
     VAR_15,
     VAR_79->classh_bst_override <<
     VAR_16);
  if (VAR_79->classh_bst_max_limit)
   FUNC_2(VAR_78->regmap,
     VAR_37,
     VAR_13,
     VAR_79->classh_bst_max_limit <<
     VAR_14);
  if (VAR_79->classh_mem_depth)
   FUNC_2(VAR_78->regmap,
     VAR_37,
     VAR_19,
     VAR_79->classh_mem_depth <<
     VAR_20);
  if (VAR_79->classh_headroom)
   FUNC_2(VAR_78->regmap,
     VAR_39,
     VAR_17,
     VAR_79->classh_headroom <<
     VAR_18);
  if (VAR_79->classh_release_rate)
   FUNC_2(VAR_78->regmap,
     VAR_40,
     VAR_21,
     VAR_79->classh_release_rate <<
     VAR_22);
  if (VAR_79->classh_wk_fet_disable)
   FUNC_2(VAR_78->regmap,
     VAR_38,
     VAR_33,
     VAR_79->classh_wk_fet_disable <<
     VAR_34);
  if (VAR_79->classh_wk_fet_delay)
   FUNC_2(VAR_78->regmap,
     VAR_38,
     VAR_31,
     VAR_79->classh_wk_fet_delay <<
     VAR_32);
  if (VAR_79->classh_wk_fet_thld)
   FUNC_2(VAR_78->regmap,
     VAR_38,
     VAR_35,
     VAR_79->classh_wk_fet_thld <<
     VAR_36);
  if (VAR_79->classh_vpch_auto)
   FUNC_2(VAR_78->regmap,
     VAR_41,
     VAR_25,
     VAR_79->classh_vpch_auto <<
     VAR_26);
  if (VAR_79->classh_vpch_rate)
   FUNC_2(VAR_78->regmap,
     VAR_41,
     VAR_29,
     VAR_79->classh_vpch_rate <<
     VAR_30);
  if (VAR_79->classh_vpch_man)
   FUNC_2(VAR_78->regmap,
     VAR_41,
     VAR_27,
     VAR_79->classh_vpch_man <<
     VAR_28);
 }

 if (VAR_80->is_present) {
  if (VAR_80->vmon_specs) {
   FUNC_2(VAR_78->regmap,
     VAR_54,
     VAR_64,
     VAR_80->vmon_dpth <<
     VAR_65);
   FUNC_2(VAR_78->regmap,
     VAR_66,
     VAR_51,
     VAR_80->vmon_loc <<
     VAR_52);
   FUNC_2(VAR_78->regmap,
     VAR_66,
     VAR_49,
     VAR_80->vmon_frm <<
     VAR_50);
  }
  if (VAR_80->imon_specs) {
   FUNC_2(VAR_78->regmap,
     VAR_54,
     VAR_43,
     VAR_80->imon_dpth <<
     VAR_44);
   FUNC_2(VAR_78->regmap,
     VAR_48,
     VAR_51,
     VAR_80->imon_loc <<
     VAR_52);
   FUNC_2(VAR_78->regmap,
     VAR_48,
     VAR_49,
     VAR_80->imon_frm <<
     VAR_50);
   FUNC_2(VAR_78->regmap,
     VAR_45,
     VAR_46,
     VAR_80->imon_scale <<
     VAR_47);
  }
  if (VAR_80->vpmon_specs) {
   FUNC_2(VAR_78->regmap,
     VAR_60,
     VAR_70,
     VAR_80->vpmon_dpth <<
     VAR_71);
   FUNC_2(VAR_78->regmap,
     VAR_72,
     VAR_51,
     VAR_80->vpmon_loc <<
     VAR_52);
   FUNC_2(VAR_78->regmap,
     VAR_72,
     VAR_49,
     VAR_80->vpmon_frm <<
     VAR_50);
  }
  if (VAR_80->vbstmon_specs) {
   FUNC_2(VAR_78->regmap,
     VAR_60,
     VAR_61,
     VAR_80->vpmon_dpth <<
     VAR_62);
   FUNC_2(VAR_78->regmap,
     VAR_63,
     VAR_51,
     VAR_80->vbstmon_loc <<
     VAR_52);
   FUNC_2(VAR_78->regmap,
     VAR_63,
     VAR_49,
     VAR_80->vbstmon_frm <<
     VAR_50);
  }
  if (VAR_80->vpbrstat_specs) {
   FUNC_2(VAR_78->regmap,
     VAR_60,
     VAR_67,
     VAR_80->vpbrstat_dpth <<
     VAR_68);
   FUNC_2(VAR_78->regmap,
     VAR_69,
     VAR_51,
     VAR_80->vpbrstat_loc <<
     VAR_52);
   FUNC_2(VAR_78->regmap,
     VAR_69,
     VAR_49,
     VAR_80->vpbrstat_frm <<
     VAR_50);
  }
  if (VAR_80->zerofill_specs) {
   FUNC_2(VAR_78->regmap,
     VAR_60,
     VAR_73,
     VAR_80->zerofill_dpth <<
     VAR_74);
   FUNC_2(VAR_78->regmap,
     VAR_75,
     VAR_51,
     VAR_80->zerofill_loc <<
     VAR_52);
   FUNC_2(VAR_78->regmap,
     VAR_75,
     VAR_49,
     VAR_80->zerofill_frm <<
     VAR_50);
  }
 }

 return 0;
}
