
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
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
 int FUNC_0 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_9, unsigned int VAR_10)
{
 struct snd_soc_component *VAR_11 = VAR_9->component;
 u16 VAR_12 = 0;

 switch (VAR_10 & VAR_3) {
 case 137:
  break;
 case 138:
  VAR_12 |= VAR_8;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_10 & VAR_1) {
 case 135:
  VAR_12 |= VAR_7;

 case 136:
  VAR_12 |= 0x3;
  break;
 case 134:
  VAR_12 |= 0x2;
  break;
 case 128:
  break;
 case 131:
  VAR_12 |= 0x1;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_10 & VAR_1) {
 case 136:
 case 135:

  switch (VAR_10 & VAR_2) {
  case 129:
   break;
  case 132:
   VAR_12 |= VAR_5;
   break;
  default:
   return -VAR_0;
  }
  break;

 case 134:
 case 128:
 case 131:
  switch (VAR_10 & VAR_2) {
  case 129:
   break;
  case 133:
   VAR_12 |= VAR_5 | VAR_7;
   break;
  case 132:
   VAR_12 |= VAR_5;
   break;
  case 130:
   VAR_12 |= VAR_7;
   break;
  default:
   return -VAR_0;
  }
  break;
 default:
  return -VAR_0;
 }

 FUNC_0(VAR_11, VAR_4,
       VAR_8 | VAR_6 | VAR_5 |
       VAR_7, VAR_12);

 return 0;
}
