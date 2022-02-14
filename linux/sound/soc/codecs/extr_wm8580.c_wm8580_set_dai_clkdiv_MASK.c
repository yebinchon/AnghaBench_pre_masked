
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;







 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int FUNC_0 (struct snd_soc_component*,int ) ;
 int FUNC_1 (struct snd_soc_component*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_10,
     int VAR_11, int VAR_12)
{
 struct snd_soc_component *VAR_13 = VAR_10->component;
 unsigned int VAR_14;

 switch (VAR_11) {
 case 128:
  VAR_14 = FUNC_0(VAR_13, VAR_1);
  VAR_14 &= ~VAR_6;

  switch (VAR_12) {
  case 133:

   break;

  case 130:
   VAR_14 |= VAR_8;
   break;
  case 129:
   VAR_14 |= VAR_9;
   break;

  case 131:
   VAR_14 |= VAR_7;
   break;

  default:
   return -VAR_0;
  }
  FUNC_1(VAR_13, VAR_1, VAR_14);
  break;

 case 134:
  VAR_14 = FUNC_0(VAR_13, VAR_1);
  VAR_14 &= ~VAR_2;

  switch (VAR_12) {
  case 132:
   break;

  case 130:
   VAR_14 |= VAR_4;
   break;

  case 129:
   VAR_14 |= VAR_5;
   break;

  case 131:
   VAR_14 |= VAR_3;
   break;

  default:
   return -VAR_0;
  }
  FUNC_1(VAR_13, VAR_1, VAR_14);
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
