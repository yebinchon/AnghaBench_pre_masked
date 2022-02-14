
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int id; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;






 unsigned int VAR_1 ;



 unsigned int VAR_2 ;

 unsigned int VAR_3 ;


 int FUNC_0 (int,char*,int) ;
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
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (struct snd_soc_component*,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_19, unsigned int VAR_20)
{
 struct snd_soc_component *VAR_21 = VAR_19->component;
 int VAR_22 = 0;
 int VAR_23 = 0;
 int VAR_24 = 0;
 int VAR_25 = 0;
 int VAR_26, VAR_27, VAR_28, VAR_29;

 switch (VAR_19->id) {
 case 0:
  VAR_26 = VAR_11;
  VAR_27 = VAR_8;
  VAR_28 = VAR_14;
  VAR_29 = VAR_13;
  break;
 case 1:
  VAR_26 = VAR_16;
  VAR_27 = VAR_15;
  VAR_28 = VAR_18;
  VAR_29 = VAR_17;
  break;
 default:
  FUNC_0(1, "Invalid dai id %d\n", VAR_19->id);
  return -VAR_0;
 }

 switch (VAR_20 & VAR_2) {
 case 128:
  break;
 case 131:
  VAR_23 |= VAR_9;
  break;
 case 129:
  VAR_24 |= VAR_6;
  VAR_25 |= VAR_4;
  break;
 case 132:
  VAR_23 |= VAR_9;
  VAR_24 |= VAR_6;
  VAR_25 |= VAR_4;
  break;
 }

 switch (VAR_20 & VAR_3) {
 case 136:
  break;
 case 137:
  VAR_24 |= VAR_7;
  VAR_25 |= VAR_5;
  break;
 case 138:
  VAR_23 |= VAR_10;
  break;
 case 139:
  VAR_23 |= VAR_10;
  VAR_24 |= VAR_7;
  VAR_25 |= VAR_5;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_20 & VAR_1) {
 case 135:
  break;
 case 134:
  VAR_22 |= 1;
  break;
 case 133:
  VAR_22 |= 2;
  break;
 case 130:
  VAR_22 |= 3;
  break;
 default:
  return -VAR_0;
 }

 FUNC_1(VAR_21, VAR_26, VAR_12, VAR_22);
 FUNC_1(VAR_21, VAR_27,
       VAR_9 | VAR_10,
       VAR_23);
 FUNC_1(VAR_21, VAR_28,
       VAR_6 |
       VAR_7,
       VAR_24);
 FUNC_1(VAR_21, VAR_29,
       VAR_4 |
       VAR_5,
       VAR_25);

 return 0;
}
