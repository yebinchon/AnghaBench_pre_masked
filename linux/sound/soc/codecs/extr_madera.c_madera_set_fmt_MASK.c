
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {TYPE_1__* driver; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct madera_priv {struct madera* madera; } ;
struct madera {int regmap; } ;
struct TYPE_2__ {int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;






 unsigned int VAR_16 ;



 unsigned int VAR_17 ;

 unsigned int VAR_18 ;


 int FUNC_0 (struct snd_soc_dai*,char*,...) ;
 int FUNC_1 (int ,scalar_t__,int,int) ;
 struct madera_priv* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_19, unsigned int VAR_20)
{
 struct snd_soc_component *VAR_21 = VAR_19->component;
 struct madera_priv *VAR_22 = FUNC_2(VAR_21);
 struct madera *VAR_23 = VAR_22->madera;
 int VAR_24, VAR_25, VAR_26, VAR_27;

 VAR_27 = VAR_19->driver->base;

 VAR_24 = 0;
 VAR_25 = 0;

 switch (VAR_20 & VAR_16) {
 case 135:
  VAR_26 = VAR_12;
  break;
 case 134:
  if ((VAR_20 & VAR_18) !=
      139) {
   FUNC_0(VAR_19, "DSP_B not valid in slave mode\n");
   return -VAR_0;
  }
  VAR_26 = VAR_13;
  break;
 case 133:
  VAR_26 = VAR_14;
  break;
 case 130:
  if ((VAR_20 & VAR_18) !=
      139) {
   FUNC_0(VAR_19, "LEFT_J not valid in slave mode\n");
   return -VAR_0;
  }
  VAR_26 = VAR_15;
  break;
 default:
  FUNC_0(VAR_19, "Unsupported DAI format %d\n",
          VAR_20 & VAR_16);
  return -VAR_0;
 }

 switch (VAR_20 & VAR_18) {
 case 136:
  break;
 case 137:
  VAR_24 |= VAR_4;
  break;
 case 138:
  VAR_25 |= VAR_6;
  break;
 case 139:
  VAR_25 |= VAR_6;
  VAR_24 |= VAR_4;
  break;
 default:
  FUNC_0(VAR_19, "Unsupported master mode %d\n",
          VAR_20 & VAR_18);
  return -VAR_0;
 }

 switch (VAR_20 & VAR_17) {
 case 128:
  break;
 case 132:
  VAR_25 |= VAR_5;
  VAR_24 |= VAR_3;
  break;
 case 131:
  VAR_25 |= VAR_5;
  break;
 case 129:
  VAR_24 |= VAR_3;
  break;
 default:
  FUNC_0(VAR_19, "Unsupported invert mode %d\n",
          VAR_20 & VAR_17);
  return -VAR_0;
 }

 FUNC_1(VAR_23->regmap, VAR_27 + VAR_8,
      VAR_5 | VAR_6,
      VAR_25);
 FUNC_1(VAR_23->regmap, VAR_27 + VAR_11,
      VAR_3 | VAR_4,
      VAR_24);
 FUNC_1(VAR_23->regmap, VAR_27 + VAR_10,
      VAR_1 | VAR_2,
      VAR_24);
 FUNC_1(VAR_23->regmap, VAR_27 + VAR_9,
      VAR_7, VAR_26);

 return 0;
}
