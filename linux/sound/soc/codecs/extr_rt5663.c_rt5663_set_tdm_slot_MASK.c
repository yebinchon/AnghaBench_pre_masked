
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct rt5663_priv {int codec_ver; } ;




 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int ,char*) ;
 struct rt5663_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,unsigned int,int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_21, unsigned int VAR_22,
 unsigned int VAR_23, int VAR_24, int VAR_25)
{
 struct snd_soc_component *VAR_26 = VAR_21->component;
 struct rt5663_priv *VAR_27 = FUNC_1(VAR_26);
 unsigned int VAR_28 = 0, VAR_29;

 if (VAR_23 || VAR_22)
  VAR_28 |= VAR_12;

 switch (VAR_24) {
 case 4:
  VAR_28 |= VAR_3;
  VAR_28 |= VAR_13;
  break;
 case 6:
  VAR_28 |= VAR_4;
  VAR_28 |= VAR_14;
  break;
 case 8:
  VAR_28 |= VAR_5;
  VAR_28 |= VAR_15;
  break;
 case 2:
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_25) {
 case 20:
  VAR_28 |= VAR_7;
  VAR_28 |= VAR_17;
  break;
 case 24:
  VAR_28 |= VAR_8;
  VAR_28 |= VAR_18;
  break;
 case 32:
  VAR_28 |= VAR_9;
  VAR_28 |= VAR_19;
  break;
 case 16:
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_27->codec_ver) {
 case 128:
  VAR_29 = VAR_2;
  break;
 case 129:
  VAR_29 = VAR_1;
  break;
 default:
  FUNC_0(VAR_26->dev, "Unknown CODEC Version\n");
  return -VAR_0;
 }

 FUNC_2(VAR_26, VAR_29, VAR_11 |
  VAR_6 | VAR_16 |
  VAR_10 | VAR_20, VAR_28);

 return 0;
}
