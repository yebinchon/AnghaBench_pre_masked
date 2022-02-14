
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dev; } ;
struct TYPE_2__ {int sar_hs_type; } ;
struct rt5665_priv {int sar_adc_value; scalar_t__ jack_type; int regmap; TYPE_1__ pdata; int component; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct snd_soc_component*,int) ;
 struct snd_soc_dapm_context* FUNC_5 (struct snd_soc_component*) ;
 struct rt5665_priv* FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_9 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_10 (struct snd_soc_dapm_context*) ;
 int FUNC_11 (int,int) ;

__attribute__((used)) static int FUNC_12(struct snd_soc_component *VAR_9, int VAR_10)
{
 struct rt5665_priv *VAR_11 = FUNC_6(VAR_9);
 struct snd_soc_dapm_context *VAR_12 = FUNC_5(VAR_9);
 unsigned int VAR_13, VAR_14;

 if (VAR_10) {
  FUNC_9(VAR_12, "MICBIAS1");
  FUNC_10(VAR_12);

  FUNC_2(VAR_11->regmap, VAR_4, 0x100,
   0x100);

  FUNC_1(VAR_11->regmap, VAR_2, &VAR_14);
  if (VAR_14 & 0x4) {
   FUNC_2(VAR_11->regmap, VAR_0,
    0x100, 0);

   FUNC_1(VAR_11->regmap, VAR_2, &VAR_14);
   while (VAR_14 & 0x4) {
    FUNC_11(10000, 15000);
    FUNC_1(VAR_11->regmap, VAR_2,
     &VAR_14);
   }
  }

  FUNC_2(VAR_11->regmap, VAR_0,
   0x1a0, 0x120);
  FUNC_3(VAR_11->regmap, VAR_1, 0x3424);
  FUNC_3(VAR_11->regmap, VAR_3, 0x0048);
  FUNC_3(VAR_11->regmap, VAR_5, 0xa291);

  FUNC_11(10000, 15000);

  VAR_11->sar_adc_value = FUNC_7(VAR_11->component,
   VAR_6) & 0x7ff;

  VAR_13 = VAR_11->pdata.sar_hs_type ?
   VAR_11->pdata.sar_hs_type : 729;

  if (VAR_11->sar_adc_value > VAR_13) {
   VAR_11->jack_type = VAR_8;
   FUNC_4(VAR_9, 1);
   } else {
   VAR_11->jack_type = VAR_7;
   FUNC_3(VAR_11->regmap, VAR_5,
    0x2291);
   FUNC_2(VAR_11->regmap, VAR_4,
    0x100, 0);
   FUNC_8(VAR_12, "MICBIAS1");
   FUNC_10(VAR_12);
  }
 } else {
  FUNC_3(VAR_11->regmap, VAR_5, 0x2291);
  FUNC_2(VAR_11->regmap, VAR_4, 0x100, 0);
  FUNC_8(VAR_12, "MICBIAS1");
  FUNC_10(VAR_12);
  if (VAR_11->jack_type == VAR_8)
   FUNC_4(VAR_9, 0);
  VAR_11->jack_type = 0;
 }

 FUNC_0(VAR_9->dev, "jack_type = %d\n", VAR_11->jack_type);
 return VAR_11->jack_type;
}
