
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dev; } ;
struct da7219_priv {int micbias_on_event; int regmap; } ;
struct da7219_aad_priv {int jack_inserted; int jack; int hptest_work; int btn_det_work; struct snd_soc_component* component; } ;
typedef int irqreturn_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
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
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int,int,int) ;
 int FUNC_2 (int ,int ,int*,int) ;
 int FUNC_3 (int ,int ,int*,int) ;
 int FUNC_4 (int *) ;
 struct snd_soc_dapm_context* FUNC_5 (struct snd_soc_component*) ;
 struct da7219_priv* FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (struct snd_soc_component*,int ) ;
 int FUNC_8 (struct snd_soc_component*,int ,int ,int ) ;
 int FUNC_9 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_10 (struct snd_soc_dapm_context*) ;
 int FUNC_11 (int ,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_12(int VAR_26, void *VAR_27)
{
 struct da7219_aad_priv *VAR_28 = VAR_27;
 struct snd_soc_component *VAR_29 = VAR_28->component;
 struct snd_soc_dapm_context *VAR_30 = FUNC_5(VAR_29);
 struct da7219_priv *VAR_31 = FUNC_6(VAR_29);
 u8 VAR_32[VAR_2];
 u8 VAR_33;
 int VAR_34, VAR_35 = 0, VAR_36 = 0;


 FUNC_2(VAR_31->regmap, VAR_6,
    VAR_32, VAR_2);

 if (!VAR_32[VAR_0] && !VAR_32[VAR_1])
  return VAR_21;


 VAR_33 = FUNC_7(VAR_29, VAR_7);


 FUNC_3(VAR_31->regmap, VAR_6,
     VAR_32, VAR_2);

 FUNC_1(VAR_29->dev, "IRQ events = 0x%x|0x%x, status = 0x%x\n",
  VAR_32[VAR_0], VAR_32[VAR_1],
  VAR_33);

 if (VAR_33 & VAR_18) {

  if (VAR_32[VAR_0] &
      VAR_12) {
   VAR_35 |= VAR_25;
   VAR_36 |= VAR_25;
   VAR_28->jack_inserted = 1;
  }


  if (VAR_32[VAR_0] &
      VAR_11) {
   if (VAR_33 & VAR_19) {
    VAR_35 |= VAR_23;
    VAR_36 |= VAR_23 | VAR_24;
    FUNC_4(&VAR_28->btn_det_work);
   } else {
    FUNC_4(&VAR_28->hptest_work);
   }
  }


  if (VAR_33 & VAR_19) {
   for (VAR_34 = 0; VAR_34 < VAR_3; ++VAR_34) {

    if (VAR_32[VAR_1] &
        (VAR_9 << VAR_34)) {
     VAR_35 |= VAR_22 >> VAR_34;
     VAR_36 |= VAR_22 >> VAR_34;
    }
   }
   FUNC_11(VAR_28->jack, VAR_35, VAR_36);

   for (VAR_34 = 0; VAR_34 < VAR_3; ++VAR_34) {

    if (VAR_32[VAR_1] &
        (VAR_10 >> VAR_34)) {
     VAR_35 &= ~(VAR_22 >> VAR_34);
     VAR_36 |= VAR_22 >> VAR_34;
    }
   }
  }
 } else {

  if (VAR_32[VAR_0] & VAR_13) {
   VAR_35 = 0;
   VAR_36 |= VAR_4;
   VAR_28->jack_inserted = 0;


   FUNC_8(VAR_29, VAR_17,
         VAR_16, 0);
   FUNC_8(VAR_29, VAR_15,
         VAR_14, 0);


   FUNC_8(VAR_29, VAR_5,
         VAR_8, 0);

   VAR_31->micbias_on_event = 0;


   FUNC_9(VAR_30, "Mic Bias");
   FUNC_10(VAR_30);


   FUNC_0(&VAR_28->btn_det_work);
   FUNC_0(&VAR_28->hptest_work);
  }
 }

 FUNC_11(VAR_28->jack, VAR_35, VAR_36);

 return VAR_20;
}
