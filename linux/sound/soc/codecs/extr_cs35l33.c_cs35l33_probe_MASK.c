
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_component {int dev; } ;
struct TYPE_2__ {int boost_ctl; int amp_drv_sel; int ramp_rate; int imon_adc_scale; scalar_t__ boost_ipk; } ;
struct cs35l33_private {int regmap; TYPE_1__ pdata; scalar_t__ enable_soft_ramp; struct snd_soc_component* component; } ;


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
 int FUNC_0 (struct snd_soc_component*,scalar_t__) ;
 int FUNC_1 (struct snd_soc_component*,TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int,int) ;
 struct cs35l33_private* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_component *VAR_19)
{
 struct cs35l33_private *VAR_20 = FUNC_5(VAR_19);

 VAR_20->component = VAR_19;
 FUNC_2(VAR_19->dev);

 FUNC_4(VAR_20->regmap, VAR_18,
  VAR_1, 0x8);
 FUNC_4(VAR_20->regmap, VAR_6,
    VAR_2,
    VAR_2);


 FUNC_4(VAR_20->regmap, VAR_5,
  VAR_7, VAR_20->pdata.boost_ctl);
 FUNC_4(VAR_20->regmap, VAR_8,
  VAR_3,
  VAR_20->pdata.amp_drv_sel << VAR_4);

 if (VAR_20->pdata.boost_ipk)
  FUNC_0(VAR_19, VAR_20->pdata.boost_ipk);

 if (VAR_20->enable_soft_ramp) {
  FUNC_6(VAR_19, VAR_9,
   VAR_10, VAR_10);
  FUNC_6(VAR_19, VAR_9,
   VAR_11, VAR_20->pdata.ramp_rate);
 } else {
  FUNC_6(VAR_19, VAR_9,
   VAR_10, 0);
 }


 if (VAR_20->pdata.imon_adc_scale != 0x8)
  FUNC_6(VAR_19, VAR_0,
   VAR_12, VAR_20->pdata.imon_adc_scale);

 FUNC_1(VAR_19, &(VAR_20->pdata));





 FUNC_4(VAR_20->regmap, VAR_13,
  VAR_16 | VAR_17 | VAR_14 |
  VAR_15, 0);

 FUNC_3(VAR_19->dev);

 return 0;
}
