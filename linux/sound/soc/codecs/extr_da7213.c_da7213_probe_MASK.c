
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_component {int dev; } ;
struct da7213_priv {int alc_calib_auto; int * mclk; struct da7213_platform_data* pdata; } ;
struct da7213_platform_data {int micbias1_lvl; int micbias2_lvl; int dmic_data_sel; int dmic_samplephase; int dmic_clk_rate; } ;


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
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct da7213_platform_data* FUNC_2 (struct snd_soc_component*) ;
 struct da7213_platform_data* FUNC_3 (int ) ;
 int * FUNC_4 (int ,char*) ;
 struct da7213_priv* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_component *VAR_35)
{
 struct da7213_priv *VAR_36 = FUNC_5(VAR_35);


 FUNC_6(VAR_35, VAR_3,
       VAR_2, 0);
 VAR_36->alc_calib_auto = 1;


 FUNC_6(VAR_35, VAR_32, VAR_33,
       VAR_33);


 FUNC_6(VAR_35, VAR_4,
       VAR_14, VAR_14);
 FUNC_6(VAR_35, VAR_5,
       VAR_14, VAR_14);
 FUNC_6(VAR_35, VAR_26,
       VAR_14, VAR_14);
 FUNC_6(VAR_35, VAR_28,
       VAR_14, VAR_14);
 FUNC_6(VAR_35, VAR_0,
       VAR_14, VAR_14);
 FUNC_6(VAR_35, VAR_1,
       VAR_14, VAR_14);
 FUNC_6(VAR_35, VAR_6,
       VAR_14, VAR_14);
 FUNC_6(VAR_35, VAR_7,
       VAR_14, VAR_14);
 FUNC_6(VAR_35, VAR_16,
       VAR_14, VAR_14);
 FUNC_6(VAR_35, VAR_17,
       VAR_14, VAR_14);
 FUNC_6(VAR_35, VAR_19,
       VAR_14, VAR_14);
 FUNC_6(VAR_35, VAR_26,
       VAR_27, VAR_27);
 FUNC_6(VAR_35, VAR_28,
       VAR_27, VAR_27);

 FUNC_6(VAR_35, VAR_29,
       VAR_30, VAR_30);
 FUNC_6(VAR_35, VAR_31,
       VAR_30, VAR_30);

 FUNC_6(VAR_35, VAR_16,
       VAR_15, VAR_15);
 FUNC_6(VAR_35, VAR_17,
       VAR_15, VAR_15);

 FUNC_6(VAR_35, VAR_19,
       VAR_18, VAR_18);


 VAR_36->pdata = FUNC_3(VAR_35->dev);
 if (!VAR_36->pdata)
  VAR_36->pdata = FUNC_2(VAR_35);


 if (VAR_36->pdata) {
  struct da7213_platform_data *VAR_37 = VAR_36->pdata;
  u8 VAR_38 = 0, VAR_39 = 0;


  switch (VAR_37->micbias1_lvl) {
  case 131:
  case 130:
  case 129:
  case 128:
   VAR_38 |= (VAR_37->micbias1_lvl <<
     VAR_21);
   break;
  }
  switch (VAR_37->micbias2_lvl) {
  case 131:
  case 130:
  case 129:
  case 128:
   VAR_38 |= (VAR_37->micbias2_lvl <<
      VAR_23);
   break;
  }
  FUNC_6(VAR_35, VAR_24,
        VAR_20 |
        VAR_22, VAR_38);


  switch (VAR_37->dmic_data_sel) {
  case 135:
  case 134:
   VAR_39 |= (VAR_37->dmic_data_sel <<
         VAR_11);
   break;
  }
  switch (VAR_37->dmic_samplephase) {
  case 132:
  case 133:
   VAR_39 |= (VAR_37->dmic_samplephase <<
         VAR_13);
   break;
  }
  switch (VAR_37->dmic_clk_rate) {
  case 136:
  case 137:
   VAR_39 |= (VAR_37->dmic_clk_rate <<
         VAR_9);
   break;
  }
  FUNC_6(VAR_35, VAR_25,
        VAR_10 |
        VAR_12 |
        VAR_8, VAR_39);
 }


 VAR_36->mclk = FUNC_4(VAR_35->dev, "mclk");
 if (FUNC_0(VAR_36->mclk)) {
  if (FUNC_1(VAR_36->mclk) != -VAR_34)
   return FUNC_1(VAR_36->mclk);
  else
   VAR_36->mclk = ((void*)0);
 }

 return 0;
}
