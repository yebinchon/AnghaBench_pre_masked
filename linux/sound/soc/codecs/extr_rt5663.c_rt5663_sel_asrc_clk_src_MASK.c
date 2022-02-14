
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct rt5663_priv {int codec_ver; } ;




 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_0 (int ,char*) ;
 struct rt5663_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,unsigned int,unsigned int) ;

int FUNC_3(struct snd_soc_component *VAR_11,
  unsigned int VAR_12, unsigned int VAR_13)
{
 struct rt5663_priv *VAR_14 = FUNC_1(VAR_11);
 unsigned int VAR_15 = 0;
 unsigned int VAR_16 = 0;
 unsigned int VAR_17 = 0;
 unsigned int VAR_18 = 0;

 switch (VAR_13) {
 case 128:
 case 129:
  break;

 default:
  return -VAR_0;
 }

 if (VAR_12 & VAR_6) {
  VAR_15 |= VAR_7;
  VAR_16 |= VAR_13 << VAR_8;
 }

 if (VAR_12 & VAR_1) {
  switch (VAR_14->codec_ver) {
  case 130:
   VAR_17 |= VAR_9;
   VAR_18 |= VAR_13 << VAR_10;
   break;
  case 131:
   VAR_15 |= VAR_2;
   VAR_16 |= VAR_13 << VAR_3;
   break;
  default:
   FUNC_0(VAR_11->dev, "Unknown CODEC Version\n");
  }
 }

 if (VAR_15)
  FUNC_2(VAR_11, VAR_4, VAR_15,
   VAR_16);

 if (VAR_17)
  FUNC_2(VAR_11, VAR_5, VAR_17,
   VAR_18);

 return 0;
}
