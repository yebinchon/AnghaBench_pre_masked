
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




 unsigned int VAR_9 ;



 unsigned int VAR_10 ;

 unsigned int VAR_11 ;


 int FUNC_0 (struct snd_soc_component*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_12,
  unsigned int VAR_13)
{
 struct snd_soc_component *VAR_14 = VAR_12->component;
 u16 VAR_15 = 0;


 switch (VAR_13 & VAR_11) {
 case 137:
  VAR_15 = VAR_6;
  break;
 case 136:
  VAR_15 = VAR_7;
  break;
 default:
  return -VAR_8;
 }


 switch (VAR_13 & VAR_9) {
 case 133:
  VAR_15 |= VAR_1;
  break;
 case 130:
  VAR_15 |= VAR_2;
  break;
 case 135:
  VAR_15 |= VAR_3;
  break;
 case 134:
  VAR_15 |= VAR_4;
  break;
 default:
  return -VAR_8;
 }


 switch (VAR_13 & VAR_10) {
 case 128:
  break;
 case 132:
  VAR_15 |= VAR_5;
  break;
 case 131:
  VAR_15 |= VAR_5;
  break;
 case 129:
  break;
 default:
  return -VAR_8;
 }

 return FUNC_0(VAR_14, VAR_0, VAR_15);
}
