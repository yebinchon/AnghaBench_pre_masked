
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_component {int dev; } ;
struct TYPE_2__ {int boost_peak; int i2s_sdinloc; scalar_t__ tdm_rising_edge; scalar_t__ boost_ind; scalar_t__ amp_inv; scalar_t__ digsft_disable; scalar_t__ aif_half_drv; scalar_t__ gain_zc_disable; } ;
struct cs35l34_private {int regmap; TYPE_1__ pdata; } ;


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
 int FUNC_0 (struct cs35l34_private*,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int,int) ;
 int FUNC_4 (int ,int ,int) ;
 struct cs35l34_private* FUNC_5 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_17)
{
 int VAR_18 = 0;
 struct cs35l34_private *VAR_19 = FUNC_5(VAR_17);

 FUNC_1(VAR_17->dev);


 FUNC_3(VAR_19->regmap, VAR_14,
   VAR_13, 0x8);




 FUNC_4(VAR_19->regmap, VAR_15, 0xFD);
 FUNC_4(VAR_19->regmap, VAR_16, 0x1F);


 FUNC_3(VAR_19->regmap, VAR_14,
    VAR_12, VAR_12);


 if (VAR_19->pdata.boost_peak)
  FUNC_3(VAR_19->regmap, VAR_6,
    VAR_7,
    VAR_19->pdata.boost_peak);

 if (VAR_19->pdata.gain_zc_disable)
  FUNC_3(VAR_19->regmap, VAR_14,
   VAR_8, 0);
 else
  FUNC_3(VAR_19->regmap, VAR_14,
   VAR_8, VAR_8);

 if (VAR_19->pdata.aif_half_drv)
  FUNC_3(VAR_19->regmap, VAR_0,
   VAR_1, 0);

 if (VAR_19->pdata.digsft_disable)
  FUNC_3(VAR_19->regmap, VAR_5,
   VAR_4, 0);

 if (VAR_19->pdata.amp_inv)
  FUNC_3(VAR_19->regmap, VAR_5,
   VAR_11, VAR_11);

 if (VAR_19->pdata.boost_ind)
  VAR_18 = FUNC_0(VAR_19, VAR_19->pdata.boost_ind);

 if (VAR_19->pdata.i2s_sdinloc)
  FUNC_3(VAR_19->regmap, VAR_2,
   VAR_9,
   VAR_19->pdata.i2s_sdinloc << VAR_10);

 if (VAR_19->pdata.tdm_rising_edge)
  FUNC_3(VAR_19->regmap, VAR_3,
   1, 1);

 FUNC_2(VAR_17->dev);

 return VAR_18;
}
