
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8994_priv {struct wm8994* wm8994; } ;
struct wm8994 {int type; } ;
struct snd_soc_dai {int id; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;




 unsigned int VAR_1 ;



 unsigned int VAR_2 ;

 unsigned int VAR_3 ;





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
 int VAR_15 ;
 int VAR_16 ;
 struct wm8994_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_17, unsigned int VAR_18)
{
 struct snd_soc_component *VAR_19 = VAR_17->component;
 struct wm8994_priv *VAR_20 = FUNC_0(VAR_19);
 struct wm8994 *VAR_21 = VAR_20->wm8994;
 int VAR_22;
 int VAR_23;
 int VAR_24;
 int VAR_25;
 int VAR_26 = 0;
 int VAR_27 = 0;
 int VAR_28 = 0;

 switch (VAR_17->id) {
 case 1:
  VAR_22 = VAR_13;
  VAR_23 = VAR_10;
  VAR_24 = VAR_8;
  VAR_25 = VAR_7;
  break;
 case 2:
  VAR_22 = VAR_16;
  VAR_23 = VAR_15;
  VAR_24 = VAR_8;
  VAR_25 = VAR_7;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_18 & VAR_3) {
 case 139:
  break;
 case 140:
  VAR_26 = VAR_14;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_18 & VAR_1) {
 case 137:
  VAR_27 |= VAR_12;
  VAR_28 |= VAR_4;

 case 138:
  VAR_27 |= 0x18;
  break;
 case 136:
  VAR_27 |= 0x10;
  break;
 case 130:
  break;
 case 133:
  VAR_27 |= 0x8;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_18 & VAR_1) {
 case 138:
 case 137:

  switch (VAR_18 & VAR_2) {
  case 131:
   break;
  case 134:
   VAR_27 |= VAR_9;
   break;
  default:
   return -VAR_0;
  }
  break;

 case 136:
 case 130:
 case 133:
  switch (VAR_18 & VAR_2) {
  case 131:
   break;
  case 135:
   VAR_27 |= VAR_9 | VAR_12;
   VAR_28 |= VAR_4;
   break;
  case 134:
   VAR_27 |= VAR_9;
   break;
  case 132:
   VAR_27 |= VAR_12;
   VAR_28 |= VAR_4;
   break;
  default:
   return -VAR_0;
  }
  break;
 default:
  return -VAR_0;
 }



 switch (VAR_21->type) {
 case 129:
 case 128:
  if (VAR_17->id == 2)
   FUNC_1(VAR_19, VAR_5,
         VAR_12 |
         VAR_6, VAR_27);
  break;

 default:
  break;
 }

 FUNC_1(VAR_19, VAR_23,
       VAR_9 | VAR_12 |
       VAR_11,
       VAR_27);
 FUNC_1(VAR_19, VAR_22, VAR_14,
       VAR_26);
 FUNC_1(VAR_19, VAR_24,
       VAR_4, VAR_28);
 FUNC_1(VAR_19, VAR_25,
       VAR_4, VAR_28);

 return 0;
}
