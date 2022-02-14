
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_dapm_context {TYPE_1__* card; } ;
struct snd_soc_component {int dev; } ;
struct TYPE_4__ {scalar_t__ jd_mode; scalar_t__ level_trigger_irq; } ;
struct rt5645_priv {int jack_type; int regmap; TYPE_2__ pdata; scalar_t__ en_button_func; } ;
struct TYPE_3__ {int instantiated; } ;


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
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 int FUNC_3 (int ,int ,int,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct snd_soc_component*,int) ;
 struct snd_soc_dapm_context* FUNC_6 (struct snd_soc_component*) ;
 struct rt5645_priv* FUNC_7 (struct snd_soc_component*) ;
 int FUNC_8 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_9 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_10 (struct snd_soc_dapm_context*) ;

__attribute__((used)) static int FUNC_11(struct snd_soc_component *VAR_23, int VAR_24)
{
 struct snd_soc_dapm_context *VAR_25 = FUNC_6(VAR_23);
 struct rt5645_priv *VAR_26 = FUNC_7(VAR_23);
 unsigned int VAR_27;

 if (VAR_24) {
  FUNC_4(VAR_26->regmap, VAR_2, 0x0e06);


  FUNC_9(VAR_25, "LDO2");
  FUNC_9(VAR_25, "Mic Det Power");
  FUNC_10(VAR_25);
  if (!VAR_25->card->instantiated) {


   FUNC_3(VAR_26->regmap, VAR_13,
    VAR_15 | VAR_19,
    VAR_15 | VAR_19);
   FUNC_3(VAR_26->regmap, VAR_17,
    VAR_14, VAR_14);
   FUNC_3(VAR_26->regmap, VAR_18,
    VAR_16, VAR_16);
  }

  FUNC_4(VAR_26->regmap, VAR_11, 0x00f0);
  FUNC_3(VAR_26->regmap, VAR_5,
   VAR_1, VAR_1);
  FUNC_3(VAR_26->regmap, VAR_4,
   VAR_0, VAR_0);
  FUNC_1(100);
  FUNC_3(VAR_26->regmap, VAR_5,
   VAR_1, 0);

  FUNC_1(600);
  FUNC_2(VAR_26->regmap, VAR_6, &VAR_27);
  VAR_27 &= 0x7;
  FUNC_0(VAR_23->dev, "val = %d\n", VAR_27);

  if (VAR_27 == 1 || VAR_27 == 2) {
   VAR_26->jack_type = VAR_22;
   if (VAR_26->en_button_func) {
    FUNC_5(VAR_23, 1);
   }
  } else {
   FUNC_8(VAR_25, "Mic Det Power");
   FUNC_10(VAR_25);
   VAR_26->jack_type = VAR_21;
  }
  if (VAR_26->pdata.level_trigger_irq)
   FUNC_3(VAR_26->regmap, VAR_7,
    VAR_9, VAR_10);
 } else {
  VAR_26->jack_type = 0;

  FUNC_3(VAR_26->regmap, VAR_3,
   VAR_12 | VAR_20,
   VAR_12 | VAR_20);
  FUNC_3(VAR_26->regmap, VAR_5,
   VAR_1, VAR_1);
  FUNC_3(VAR_26->regmap, VAR_4,
   VAR_0, 0);

  if (VAR_26->en_button_func)
   FUNC_5(VAR_23, 0);

  if (VAR_26->pdata.jd_mode == 0)
   FUNC_8(VAR_25, "LDO2");
  FUNC_8(VAR_25, "Mic Det Power");
  FUNC_10(VAR_25);
  if (VAR_26->pdata.level_trigger_irq)
   FUNC_3(VAR_26->regmap, VAR_7,
    VAR_9, VAR_8);
 }

 return VAR_26->jack_type;
}
