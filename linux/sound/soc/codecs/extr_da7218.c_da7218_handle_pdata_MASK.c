
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_component {int dummy; } ;
struct da7218_priv {scalar_t__ dev_id; scalar_t__ hp_single_supply; struct da7218_pdata* pdata; } ;
struct da7218_pdata {int micbias1_lvl; int micbias2_lvl; int mic1_amp_in_sel; int mic2_amp_in_sel; int dmic1_data_sel; int dmic1_samplephase; int dmic1_clk_rate; int dmic2_data_sel; int dmic2_samplephase; int dmic2_clk_rate; struct da7218_hpldet_pdata* hpldet_pdata; scalar_t__ hp_diff_single_supply; } ;
struct da7218_hpldet_pdata {int jack_rate; int jack_debounce; int jack_thr; scalar_t__ discharge; scalar_t__ hyst; scalar_t__ comp_inv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
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



 struct da7218_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_2 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct snd_soc_component *VAR_38)
{
 struct da7218_priv *VAR_39 = FUNC_0(VAR_38);
 struct da7218_pdata *VAR_40 = VAR_39->pdata;

 if (VAR_40) {
  u8 VAR_41 = 0, VAR_42 = 0;


  switch (VAR_40->micbias1_lvl) {
  case 139:
   VAR_41 |= VAR_32;
   break;
  case 138:
  case 137:
  case 136:
  case 135:
  case 134:
  case 133:
  case 132:
  case 131:
   VAR_41 |= (VAR_40->micbias1_lvl <<
     VAR_31);
   break;
  }

  switch (VAR_40->micbias2_lvl) {
  case 139:
   VAR_41 |= VAR_34;
   break;
  case 138:
  case 137:
  case 136:
  case 135:
  case 134:
  case 133:
  case 132:
  case 131:
   VAR_41 |= (VAR_40->micbias2_lvl <<
      VAR_33);
   break;
  }

  FUNC_2(VAR_38, VAR_35, VAR_41);


  switch (VAR_40->mic1_amp_in_sel) {
  case 130:
  case 128:
  case 129:
   FUNC_2(VAR_38, VAR_36,
          VAR_40->mic1_amp_in_sel);
   break;
  }

  switch (VAR_40->mic2_amp_in_sel) {
  case 130:
  case 128:
  case 129:
   FUNC_2(VAR_38, VAR_37,
          VAR_40->mic2_amp_in_sel);
   break;
  }


  switch (VAR_40->dmic1_data_sel) {
  case 159:
  case 158:
   VAR_42 |= (VAR_40->dmic1_data_sel <<
         VAR_6);
   break;
  }

  switch (VAR_40->dmic1_samplephase) {
  case 156:
  case 157:
   VAR_42 |= (VAR_40->dmic1_samplephase <<
         VAR_8);
   break;
  }

  switch (VAR_40->dmic1_clk_rate) {
  case 160:
  case 161:
   VAR_42 |= (VAR_40->dmic1_clk_rate <<
         VAR_3);
   break;
  }

  FUNC_1(VAR_38, VAR_4,
        VAR_5 |
        VAR_7 |
        VAR_2, VAR_42);

  VAR_42 = 0;
  switch (VAR_40->dmic2_data_sel) {
  case 159:
  case 158:
   VAR_42 |= (VAR_40->dmic2_data_sel <<
         VAR_13);
   break;
  }

  switch (VAR_40->dmic2_samplephase) {
  case 156:
  case 157:
   VAR_42 |= (VAR_40->dmic2_samplephase <<
         VAR_15);
   break;
  }

  switch (VAR_40->dmic2_clk_rate) {
  case 160:
  case 161:
   VAR_42 |= (VAR_40->dmic2_clk_rate <<
         VAR_10);
   break;
  }

  FUNC_1(VAR_38, VAR_11,
        VAR_12 |
        VAR_14 |
        VAR_9, VAR_42);


  if (VAR_39->dev_id == VAR_0) {
   VAR_39->hp_single_supply =
    VAR_40->hp_diff_single_supply;

   if (VAR_39->hp_single_supply) {
    FUNC_2(VAR_38, VAR_29,
           VAR_30);
    FUNC_1(VAR_38, VAR_28,
          VAR_27,
          VAR_27);
   }
  }


  if ((VAR_39->dev_id == VAR_1) &&
      (VAR_40->hpldet_pdata)) {
   struct da7218_hpldet_pdata *VAR_43 =
    VAR_40->hpldet_pdata;
   u8 VAR_44 = 0;

   switch (VAR_43->jack_rate) {
   case 146:
   case 151:
   case 149:
   case 147:
   case 144:
   case 150:
   case 148:
   case 145:
    VAR_44 |=
     (VAR_43->jack_rate <<
      VAR_24);
    break;
   }

   switch (VAR_43->jack_debounce) {
   case 152:
   case 155:
   case 154:
   case 153:
    VAR_44 |=
     (VAR_43->jack_debounce <<
      VAR_22);
    break;
   }

   switch (VAR_43->jack_thr) {
   case 143:
   case 142:
   case 141:
   case 140:
    VAR_44 |=
     (VAR_43->jack_thr <<
      VAR_26);
    break;
   }
   FUNC_1(VAR_38, VAR_20,
         VAR_23 |
         VAR_21 |
         VAR_25,
         VAR_44);

   VAR_44 = 0;
   if (VAR_43->comp_inv)
    VAR_44 |= VAR_16;

   if (VAR_43->hyst)
    VAR_44 |= VAR_19;

   if (VAR_43->discharge)
    VAR_44 |= VAR_18;

   FUNC_2(VAR_38, VAR_17, VAR_44);
  }
 }
}
