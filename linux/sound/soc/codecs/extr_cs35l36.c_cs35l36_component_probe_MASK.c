
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct TYPE_2__ {int bst_vctl; int bst_vctl_sel; int bst_ipk; int temp_warn_thld; int irq_drv_sel; int irq_gpio_sel; scalar_t__ boost_ind; scalar_t__ vmon_pol_inv; scalar_t__ imon_pol_inv; scalar_t__ multi_amp_mode; scalar_t__ amp_pcm_inv; scalar_t__ dcm_mode; } ;
struct cs35l36_private {scalar_t__ rev_id; scalar_t__ chip_version; int regmap; TYPE_1__ pdata; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
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
 scalar_t__ VAR_35 ;
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
 int FUNC_0 (struct cs35l36_private*,scalar_t__) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (int ,int ,int ) ;
 struct cs35l36_private* FUNC_4 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_46)
{
 struct cs35l36_private *VAR_47 =
   FUNC_4(VAR_46);
 int VAR_48 = 0;

 if ((VAR_47->rev_id == VAR_35) && VAR_47->pdata.dcm_mode) {
  FUNC_2(VAR_47->regmap, VAR_7,
       VAR_27,
       VAR_27);

  FUNC_3(VAR_47->regmap, VAR_39,
        VAR_42);
  FUNC_3(VAR_47->regmap, VAR_39,
        VAR_43);

  FUNC_2(VAR_47->regmap, VAR_25,
       VAR_18,
       0 << VAR_19);
  FUNC_2(VAR_47->regmap, VAR_25,
       VAR_17,
       VAR_17);

  FUNC_3(VAR_47->regmap, VAR_39,
    VAR_40);
  FUNC_3(VAR_47->regmap, VAR_39,
    VAR_41);
 }

 if (VAR_47->pdata.amp_pcm_inv)
  FUNC_2(VAR_47->regmap, VAR_3,
       VAR_4,
       VAR_4);

 if (VAR_47->pdata.multi_amp_mode)
  FUNC_2(VAR_47->regmap, VAR_6,
       VAR_5,
       VAR_5);

 if (VAR_47->pdata.imon_pol_inv)
  FUNC_2(VAR_47->regmap, VAR_44,
       VAR_29, 0);

 if (VAR_47->pdata.vmon_pol_inv)
  FUNC_2(VAR_47->regmap, VAR_44,
       VAR_45, 0);

 if (VAR_47->pdata.bst_vctl)
  FUNC_2(VAR_47->regmap, VAR_10,
       VAR_0,
       VAR_47->pdata.bst_vctl);

 if (VAR_47->pdata.bst_vctl_sel)
  FUNC_2(VAR_47->regmap, VAR_11,
       VAR_1,
       VAR_47->pdata.bst_vctl_sel);

 if (VAR_47->pdata.bst_ipk)
  FUNC_2(VAR_47->regmap, VAR_9,
       VAR_16,
       VAR_47->pdata.bst_ipk);

 if (VAR_47->pdata.boost_ind) {
  VAR_48 = FUNC_0(VAR_47, VAR_47->pdata.boost_ind);
  if (VAR_48 < 0) {
   FUNC_1(VAR_47->dev,
    "Boost inductor config failed(%d)\n", VAR_48);
   return VAR_48;
  }
 }

 if (VAR_47->pdata.temp_warn_thld)
  FUNC_2(VAR_47->regmap, VAR_28,
       VAR_38,
       VAR_47->pdata.temp_warn_thld);

 if (VAR_47->pdata.irq_drv_sel)
  FUNC_2(VAR_47->regmap, VAR_34,
       VAR_30,
       VAR_47->pdata.irq_drv_sel <<
       VAR_31);

 if (VAR_47->pdata.irq_gpio_sel)
  FUNC_2(VAR_47->regmap, VAR_34,
       VAR_32,
       VAR_47->pdata.irq_gpio_sel <<
       VAR_33);
 if (VAR_47->chip_version == VAR_2) {
  FUNC_2(VAR_47->regmap,
       VAR_8,
       VAR_21,
       VAR_20);

  FUNC_3(VAR_47->regmap, VAR_39,
        VAR_42);
  FUNC_3(VAR_47->regmap, VAR_39,
        VAR_43);

  FUNC_2(VAR_47->regmap, VAR_12,
       VAR_23,
       VAR_22 <<
       VAR_24);
  FUNC_2(VAR_47->regmap, VAR_11,
       VAR_14,
       1 << VAR_15);
  FUNC_2(VAR_47->regmap, VAR_10,
       VAR_0,
       VAR_13);
  FUNC_3(VAR_47->regmap, VAR_39,
        VAR_40);
  FUNC_3(VAR_47->regmap, VAR_39,
        VAR_41);
 }






 FUNC_2(VAR_47->regmap, VAR_26,
      VAR_36,
      0 << VAR_37);

 return 0;
}
