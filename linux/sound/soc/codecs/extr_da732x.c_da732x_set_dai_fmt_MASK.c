
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_dai {int id; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


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



 int VAR_25 ;

 int VAR_26 ;



 int FUNC_0 (struct snd_soc_component*,int,int,int) ;
 int FUNC_1 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_27, u32 VAR_28)
{
 struct snd_soc_component *VAR_29 = VAR_27->component;
 u32 VAR_30, VAR_31;
 u32 VAR_32, VAR_33;
 u32 VAR_34, VAR_35;

 switch (VAR_27->id) {
 case 139:
  VAR_32 = VAR_17;
  VAR_34 = VAR_18;
  VAR_31 = VAR_13 | VAR_15 |
      VAR_16;
  break;
 case 138:
  VAR_32 = VAR_19;
  VAR_34 = VAR_20;
  VAR_31 = VAR_14 | VAR_15 |
      VAR_16;
  break;
 default:
  return -VAR_23;
 }

 switch (VAR_28 & VAR_26) {
 case 136:
  VAR_33 = VAR_10;
  VAR_30 = VAR_1 | VAR_2;
  break;
 case 137:
  VAR_33 = VAR_4;
  VAR_30 = VAR_12;
  break;
 default:
  return -VAR_23;
 }

 switch (VAR_28 & VAR_24) {
 case 134:
  VAR_35 = VAR_6;
  break;
 case 128:
  VAR_35 = VAR_9;
  break;
 case 131:
  VAR_35 = VAR_7;
  break;
 case 135:
  VAR_35 = VAR_5;
  break;
 default:
  return -VAR_23;
 }


 switch (VAR_28 & VAR_24) {
 case 135:
  switch (VAR_28 & VAR_25) {
  case 129:
   break;
  case 132:
   VAR_35 |= VAR_3;
   break;
  default:
   return -VAR_23;
  }
  break;
 case 134:
 case 128:
 case 131:
  switch (VAR_28 & VAR_25) {
  case 129:
   break;
  case 133:
   VAR_35 |= VAR_3 | VAR_11;
   break;
  case 132:
   VAR_35 |= VAR_3;
   break;
  case 130:
   VAR_35 |= VAR_11;
   break;
  default:
   return -VAR_23;
  }
  break;
 default:
  return -VAR_23;
 }

 FUNC_1(VAR_29, VAR_21, VAR_30);
 FUNC_0(VAR_29, VAR_32, VAR_0, VAR_33);
 FUNC_0(VAR_29, VAR_34, VAR_3 |
       VAR_11 | VAR_8, VAR_35);
 FUNC_1(VAR_29, VAR_22, VAR_31);

 return 0;
}
