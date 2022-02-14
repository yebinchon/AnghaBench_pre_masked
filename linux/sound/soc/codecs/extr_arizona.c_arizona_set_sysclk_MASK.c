
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct arizona_priv {int sysclk; int asyncclk; struct arizona* arizona; } ;
struct arizona {int regmap; int dev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;




 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct snd_soc_component*,int,unsigned int) ;
 int FUNC_1 (int ,char*,char*,...) ;
 int FUNC_2 (int ,unsigned int,unsigned int,unsigned int) ;
 struct arizona_priv* FUNC_3 (struct snd_soc_component*) ;

int FUNC_4(struct snd_soc_component *VAR_14, int VAR_15,
         int VAR_16, unsigned int VAR_17, int VAR_18)
{
 struct arizona_priv *VAR_19 = FUNC_3(VAR_14);
 struct arizona *VAR_20 = VAR_19->arizona;
 char *VAR_21;
 unsigned int VAR_22;
 unsigned int VAR_23 = VAR_8 | VAR_10;
 unsigned int VAR_24 = VAR_16 << VAR_11;
 int *VAR_25;

 switch (VAR_15) {
 case 128:
  VAR_21 = "SYSCLK";
  VAR_22 = VAR_12;
  VAR_25 = &VAR_19->sysclk;
  VAR_23 |= VAR_7;
  break;
 case 131:
  VAR_21 = "ASYNCCLK";
  VAR_22 = VAR_0;
  VAR_25 = &VAR_19->asyncclk;
  break;
 case 129:
 case 130:
  return FUNC_0(VAR_14, VAR_15, VAR_17);
 default:
  return -VAR_13;
 }

 switch (VAR_17) {
 case 5644800:
 case 6144000:
  break;
 case 11289600:
 case 12288000:
  VAR_24 |= VAR_1 << VAR_9;
  break;
 case 22579200:
 case 24576000:
  VAR_24 |= VAR_3 << VAR_9;
  break;
 case 45158400:
 case 49152000:
  VAR_24 |= VAR_4 << VAR_9;
  break;
 case 67737600:
 case 73728000:
  VAR_24 |= VAR_5 << VAR_9;
  break;
 case 90316800:
 case 98304000:
  VAR_24 |= VAR_6 << VAR_9;
  break;
 case 135475200:
 case 147456000:
  VAR_24 |= VAR_2 << VAR_9;
  break;
 case 0:
  FUNC_1(VAR_20->dev, "%s cleared\n", VAR_21);
  *VAR_25 = VAR_17;
  return 0;
 default:
  return -VAR_13;
 }

 *VAR_25 = VAR_17;

 if (VAR_17 % 6144000)
  VAR_24 |= VAR_7;

 FUNC_1(VAR_20->dev, "%s set to %uHz", VAR_21, VAR_17);

 return FUNC_2(VAR_20->regmap, VAR_22, VAR_23, VAR_24);
}
