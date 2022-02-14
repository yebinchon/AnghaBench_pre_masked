
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {size_t id; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct rt5682_priv {int* master; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 unsigned int VAR_16 ;
 int VAR_17 ;
 unsigned int VAR_18 ;
 int VAR_19 ;
 unsigned int VAR_20 ;
 int VAR_21 ;
 unsigned int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;




 unsigned int VAR_25 ;



 unsigned int VAR_26 ;

 unsigned int VAR_27 ;


 int FUNC_0 (int ,char*,size_t) ;
 struct rt5682_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_28, unsigned int VAR_29)
{
 struct snd_soc_component *VAR_30 = VAR_28->component;
 struct rt5682_priv *VAR_31 = FUNC_1(VAR_30);
 unsigned int VAR_32 = 0, VAR_33 = 0;

 switch (VAR_29 & VAR_27) {
 case 137:
  VAR_31->master[VAR_28->id] = 1;
  break;
 case 136:
  VAR_31->master[VAR_28->id] = 0;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_29 & VAR_26) {
 case 128:
  break;
 case 131:
  VAR_32 |= VAR_5;
  VAR_33 |= VAR_20;
  break;
 case 129:
  if (VAR_28->id == 139)
   VAR_33 |= VAR_22 | VAR_16;
  else
   return -VAR_0;
  break;
 case 132:
  if (VAR_28->id == 139)
   VAR_33 |= VAR_20 | VAR_22 |
        VAR_16 | VAR_18;
  else
   return -VAR_0;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_29 & VAR_25) {
 case 133:
  break;
 case 130:
  VAR_32 |= VAR_7;
  VAR_33 |= VAR_11;
  break;
 case 135:
  VAR_32 |= VAR_9;
  VAR_33 |= VAR_13;
  break;
 case 134:
  VAR_32 |= VAR_10;
  VAR_33 |= VAR_14;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_28->id) {
 case 139:
  FUNC_2(VAR_30, VAR_1,
   VAR_8, VAR_32);
  FUNC_2(VAR_30, VAR_24,
   VAR_15 | VAR_21 |
   VAR_12 | VAR_17 |
   VAR_19 | VAR_23,
   VAR_33 | VAR_31->master[VAR_28->id]);
  break;
 case 138:
  if (VAR_31->master[VAR_28->id] == 0)
   VAR_32 |= VAR_3;
  FUNC_2(VAR_30, VAR_4,
   VAR_2 | VAR_6 |
   VAR_8, VAR_32);
  break;
 default:
  FUNC_0(VAR_30->dev, "Invalid dai->id: %d\n", VAR_28->id);
  return -VAR_0;
 }
 return 0;
}
