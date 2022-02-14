
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct snd_soc_component {int dev; } ;
struct sgtl5000_priv {int sysclk; int master; } ;


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
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
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
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int,unsigned int) ;
 struct sgtl5000_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_4 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_25, int VAR_26)
{
 struct sgtl5000_priv *VAR_27 = FUNC_2(VAR_25);
 int VAR_28 = 0;
 int VAR_29;






 switch (VAR_26) {
 case 8000:
 case 16000:
  VAR_29 = 32000;
  break;
 case 11025:
 case 22050:
  VAR_29 = 44100;
  break;
 default:
  VAR_29 = VAR_26;
  break;
 }


 switch (VAR_29 / VAR_26) {
 case 4:
  VAR_28 |= VAR_17 << VAR_18;
  break;
 case 2:
  VAR_28 |= VAR_16 << VAR_18;
  break;
 case 1:
  VAR_28 |= VAR_15 << VAR_18;
  break;
 default:
  return -VAR_0;
 }


 switch (VAR_29) {
 case 32000:
  VAR_28 |= VAR_19 << VAR_23;
  break;
 case 44100:
  VAR_28 |= VAR_20 << VAR_23;
  break;
 case 48000:
  VAR_28 |= VAR_21 << VAR_23;
  break;
 case 96000:
  VAR_28 |= VAR_22 << VAR_23;
  break;
 default:
  FUNC_0(VAR_25->dev, "frame rate %d not supported\n",
   VAR_26);
  return -VAR_0;
 }






 switch (VAR_27->sysclk / VAR_26) {
 case 256:
  VAR_28 |= VAR_6 <<
   VAR_11;
  break;
 case 384:
  VAR_28 |= VAR_7 <<
   VAR_11;
  break;
 case 512:
  VAR_28 |= VAR_8 <<
   VAR_11;
  break;
 default:

  if (VAR_27->master) {
   VAR_28 |= VAR_10 <<
    VAR_11;
  } else {
   FUNC_0(VAR_25->dev,
    "PLL not supported in slave mode\n");
   FUNC_0(VAR_25->dev, "%d ratio is not supported. "
    "SYS_MCLK needs to be 256, 384 or 512 * fs\n",
    VAR_27->sysclk / VAR_26);
   return -VAR_0;
  }
 }


 if ((VAR_28 & VAR_9) == VAR_10) {
  u64 VAR_30, VAR_31;
  int VAR_32;
  int VAR_33;
  unsigned int VAR_34, VAR_35, VAR_36;

  if (VAR_27->sysclk > 17000000) {
   VAR_32 = 1;
   VAR_34 = VAR_27->sysclk / 2;
  } else {
   VAR_32 = 0;
   VAR_34 = VAR_27->sysclk;
  }
  if (VAR_29 == 44100)
   VAR_30 = 180633600;
  else
   VAR_30 = 196608000;
  VAR_31 = FUNC_1(VAR_30, VAR_34);
  VAR_35 = VAR_30;
  VAR_31 *= 2048;
  FUNC_1(VAR_31, VAR_34);
  VAR_36 = VAR_31;
  VAR_33 = VAR_35 << VAR_13 |
      VAR_36 << VAR_12;

  FUNC_4(VAR_25, VAR_4, VAR_33);
  if (VAR_32)
   FUNC_3(VAR_25,
    VAR_3,
    VAR_5,
    VAR_5);
  else
   FUNC_3(VAR_25,
    VAR_3,
    VAR_5,
    0);


  FUNC_3(VAR_25, VAR_1,
   VAR_14 | VAR_24,
   VAR_14 | VAR_24);


  FUNC_4(VAR_25, VAR_2, VAR_28);
 } else {

  FUNC_4(VAR_25, VAR_2, VAR_28);


  FUNC_3(VAR_25, VAR_1,
   VAR_14 | VAR_24,
   0);
 }

 return 0;
}
