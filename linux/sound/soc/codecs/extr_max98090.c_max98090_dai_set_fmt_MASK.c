
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct max98090_priv {unsigned int dai_fmt; int master; int tdm_slots; struct max98090_cdata* dai; } ;
struct max98090_cdata {unsigned int fmt; } ;


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





 unsigned int VAR_15 ;



 unsigned int VAR_16 ;

 unsigned int VAR_17 ;



 int FUNC_0 (int ,char*) ;
 struct max98090_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int ,int ) ;
 int FUNC_3 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_18,
     unsigned int VAR_19)
{
 struct snd_soc_component *VAR_20 = VAR_18->component;
 struct max98090_priv *VAR_21 = FUNC_1(VAR_20);
 struct max98090_cdata *VAR_22;
 u8 VAR_23;

 VAR_21->dai_fmt = VAR_19;
 VAR_22 = &VAR_21->dai[0];

 if (VAR_19 != VAR_22->fmt) {
  VAR_22->fmt = VAR_19;

  VAR_23 = 0;
  switch (VAR_19 & VAR_17) {
  case 136:

   FUNC_3(VAR_20,
    VAR_9, 0x00);
   FUNC_3(VAR_20,
    VAR_8, 0x00);
   FUNC_2(VAR_20, VAR_7,
    VAR_13, 0);
   VAR_21->master = 0;
   break;
  case 139:

   if (VAR_21->tdm_slots == 4) {

    VAR_23 |= VAR_6 |
     VAR_4;
   } else if (VAR_21->tdm_slots == 3) {

    VAR_23 |= VAR_6 |
     VAR_3;
   } else {

    VAR_23 |= VAR_6 |
     VAR_2;
   }
   VAR_21->master = 1;
   break;
  case 137:
  case 138:
  default:
   FUNC_0(VAR_20->dev, "DAI clock mode unsupported");
   return -VAR_0;
  }
  FUNC_3(VAR_20, VAR_11, VAR_23);

  VAR_23 = 0;
  switch (VAR_19 & VAR_15) {
  case 134:
   VAR_23 |= VAR_5;
   break;
  case 131:
   break;
  case 128:
   VAR_23 |= VAR_12;
   break;
  case 135:

  default:
   FUNC_0(VAR_20->dev, "DAI format unsupported");
   return -VAR_0;
  }

  switch (VAR_19 & VAR_16) {
  case 129:
   break;
  case 130:
   VAR_23 |= VAR_14;
   break;
  case 132:
   VAR_23 |= VAR_1;
   break;
  case 133:
   VAR_23 |= VAR_1|VAR_14;
   break;
  default:
   FUNC_0(VAR_20->dev, "DAI invert mode unsupported");
   return -VAR_0;
  }







  if (VAR_21->tdm_slots > 1)
   VAR_23 ^= VAR_1;

  FUNC_3(VAR_20,
   VAR_10, VAR_23);
 }

 return 0;
}
