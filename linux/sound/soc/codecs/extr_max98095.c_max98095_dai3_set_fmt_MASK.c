
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct max98095_priv {struct max98095_cdata* dai; } ;
struct max98095_cdata {unsigned int fmt; } ;


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




 unsigned int VAR_10 ;



 unsigned int VAR_11 ;

 unsigned int VAR_12 ;


 int FUNC_0 (int ,char*) ;
 struct max98095_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_3 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_13,
     unsigned int VAR_14)
{
 struct snd_soc_component *VAR_15 = VAR_13->component;
 struct max98095_priv *VAR_16 = FUNC_1(VAR_15);
 struct max98095_cdata *VAR_17;
 u8 VAR_18 = 0;

 VAR_17 = &VAR_16->dai[2];

 if (VAR_14 != VAR_17->fmt) {
  VAR_17->fmt = VAR_14;

  switch (VAR_14 & VAR_12) {
  case 134:

   FUNC_3(VAR_15, VAR_1,
    0x80);
   FUNC_3(VAR_15, VAR_2,
    0x00);
   break;
  case 137:

   VAR_18 |= VAR_8;
   break;
  case 135:
  case 136:
  default:
   FUNC_0(VAR_15->dev, "Clock mode unsupported");
   return -VAR_0;
  }

  switch (VAR_14 & VAR_10) {
  case 133:
   VAR_18 |= VAR_7;
   break;
  case 130:
   break;
  default:
   return -VAR_0;
  }

  switch (VAR_14 & VAR_11) {
  case 128:
   break;
  case 129:
   VAR_18 |= VAR_9;
   break;
  case 131:
   VAR_18 |= VAR_5;
   break;
  case 132:
   VAR_18 |= VAR_5|VAR_9;
   break;
  default:
   return -VAR_0;
  }

  FUNC_2(VAR_15, VAR_3,
   VAR_8 | VAR_7 | VAR_5 |
   VAR_9, VAR_18);

  FUNC_3(VAR_15, VAR_4,
   VAR_6);
 }

 return 0;
}
