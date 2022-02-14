
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {int dummy; } ;
struct regmap {int dummy; } ;
struct nau8825 {int high_imped; int dev; struct snd_soc_dapm_context* dapm; struct regmap* regmap; } ;


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
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct regmap*,int ,int*) ;
 int FUNC_3 (struct regmap*,int ,int,int) ;
 int FUNC_4 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_5 (struct snd_soc_dapm_context*) ;

__attribute__((used)) static int FUNC_6(struct nau8825 *VAR_11)
{
 struct regmap *VAR_12 = VAR_11->regmap;
 struct snd_soc_dapm_context *VAR_13 = VAR_11->dapm;
 int VAR_14, VAR_15;
 int VAR_16 = 0;

 FUNC_2(VAR_12, VAR_2, &VAR_14);
 VAR_15 = (VAR_14 >> 10) & 3;

 if (VAR_15 == 0x3)
  VAR_11->high_imped = 1;
 else
  VAR_11->high_imped = 0;

 switch (VAR_15) {
 case 0:

  VAR_16 = VAR_9;
  break;
 case 1:
  FUNC_0(VAR_11->dev, "OMTP (micgnd1) mic connected\n");
  VAR_16 = VAR_10;


  FUNC_3(VAR_12, VAR_3, 3 << 2,
   1 << 2);

  FUNC_3(VAR_12, VAR_4,
   VAR_1 | VAR_0,
   VAR_0);

  FUNC_3(VAR_12, VAR_5,
   VAR_8,
   VAR_6);

  FUNC_4(VAR_13, "MICBIAS");
  FUNC_4(VAR_13, "SAR");
  FUNC_5(VAR_13);
  break;
 case 2:
  FUNC_0(VAR_11->dev, "CTIA (micgnd2) mic connected\n");
  VAR_16 = VAR_10;


  FUNC_3(VAR_12, VAR_3, 3 << 2,
   2 << 2);

  FUNC_3(VAR_12, VAR_4,
   VAR_1 | VAR_0,
   VAR_1);

  FUNC_3(VAR_12, VAR_5,
   VAR_8,
   VAR_7);

  FUNC_4(VAR_13, "MICBIAS");
  FUNC_4(VAR_13, "SAR");
  FUNC_5(VAR_13);
  break;
 case 3:

  FUNC_1(VAR_11->dev, "detection error; disable mic function\n");
  VAR_16 = VAR_9;
  break;
 }





 return VAR_16;
}
