
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
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




 unsigned int VAR_10 ;



 unsigned int VAR_11 ;

 unsigned int VAR_12 ;



 int FUNC_0 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_13,
  unsigned int VAR_14)
{
 struct snd_soc_component *VAR_15 = VAR_13->component;
 u16 VAR_16 = 0;


 switch (VAR_14 & VAR_12) {
 case 138:
  VAR_16 = VAR_7;
  break;
 case 137:
  VAR_16 = VAR_8;
  break;
 default:
  return -VAR_9;
 }


 switch (VAR_14 & VAR_10) {
 case 134:
  VAR_16 |= VAR_1;
  break;
 case 128:
  VAR_16 |= VAR_4;
  break;
 case 131:
  VAR_16 |= VAR_2;
  break;
 case 136:
  VAR_16 |= VAR_3;
  break;
 case 135:
  VAR_16 |= VAR_3 | VAR_5;
  break;
 default:
  return -VAR_9;
 }


 switch (VAR_14 & VAR_11) {
 case 129:
  break;
 case 133:
  VAR_16 |= VAR_6;
  break;
 case 132:
  VAR_16 |= VAR_6;
  break;
 case 130:
  break;
 default:
  return -VAR_9;
 }

 return FUNC_0(VAR_15, VAR_0, VAR_16);
}
