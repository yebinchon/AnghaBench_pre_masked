
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct madera_priv {int sysclk; int asyncclk; int dspclk; struct madera* madera; } ;
struct madera {int regmap; int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;






 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (int ,char*,char*,...) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct madera*,unsigned int,unsigned int*) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (struct snd_soc_component*,int,unsigned int) ;
 int FUNC_5 (struct snd_soc_component*,int,unsigned int) ;
 int FUNC_6 (int ,unsigned int,unsigned int,unsigned int) ;
 int FUNC_7 (int ,int ,unsigned int) ;
 struct madera_priv* FUNC_8 (struct snd_soc_component*) ;

int FUNC_9(struct snd_soc_component *VAR_9, int VAR_10,
        int VAR_11, unsigned int VAR_12, int VAR_13)
{
 struct madera_priv *VAR_14 = FUNC_8(VAR_9);
 struct madera *VAR_15 = VAR_14->madera;
 char *VAR_16;
 unsigned int VAR_17, VAR_18 = 0;
 unsigned int VAR_19 = VAR_5 | VAR_6;
 unsigned int VAR_20 = VAR_11 << VAR_7;
 int VAR_21, *VAR_22;
 int VAR_23 = 0;

 switch (VAR_10) {
 case 128:
  VAR_16 = "SYSCLK";
  VAR_17 = VAR_8;
  VAR_22 = &VAR_14->sysclk;
  VAR_21 = FUNC_3(VAR_12);
  VAR_19 |= VAR_4;
  break;
 case 133:
  VAR_16 = "ASYNCCLK";
  VAR_17 = VAR_1;
  VAR_22 = &VAR_14->asyncclk;
  VAR_21 = FUNC_3(VAR_12);
  break;
 case 131:
  VAR_16 = "DSPCLK";
  VAR_17 = VAR_2;
  VAR_22 = &VAR_14->dspclk;
  VAR_21 = FUNC_2(VAR_15, VAR_12,
        &VAR_18);
  break;
 case 130:
 case 132:
  return FUNC_4(VAR_9, VAR_10, VAR_12);
 case 129:
  return FUNC_5(VAR_9, VAR_11, VAR_12);
 default:
  return -VAR_0;
 }

 if (VAR_21 < 0) {
  FUNC_1(VAR_15->dev,
   "Failed to get clk setting for %dHZ\n", VAR_12);
  return VAR_21;
 }

 *VAR_22 = VAR_12;

 if (VAR_12 == 0) {
  FUNC_0(VAR_15->dev, "%s cleared\n", VAR_16);
  return 0;
 }

 VAR_20 |= VAR_21;

 if (VAR_18) {
  VAR_23 = FUNC_7(VAR_15->regmap, VAR_3,
       VAR_18);
  if (VAR_23) {
   FUNC_1(VAR_15->dev,
    "Failed to write DSP_CONFIG2: %d\n", VAR_23);
   return VAR_23;
  }





  VAR_19 = VAR_6;
 }

 if (VAR_12 % 6144000)
  VAR_20 |= VAR_4;

 FUNC_0(VAR_15->dev, "%s set to %uHz\n", VAR_16, VAR_12);

 return FUNC_6(VAR_15->regmap, VAR_17, VAR_19, VAR_20);
}
