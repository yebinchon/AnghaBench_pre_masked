
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct snd_soc_component*,int ,int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_20, unsigned int VAR_21,
   unsigned int VAR_22, int VAR_23, int VAR_24)
{
 struct snd_soc_component *VAR_25 = VAR_20->component;
 unsigned int VAR_26 = 0;

 if (VAR_22 || VAR_21)
  VAR_26 |= VAR_2;

 switch (VAR_23) {
 case 4:
  VAR_26 |= VAR_4;
  VAR_26 |= VAR_12;
  break;
 case 6:
  VAR_26 |= VAR_5;
  VAR_26 |= VAR_13;
  break;
 case 8:
  VAR_26 |= VAR_6;
  VAR_26 |= VAR_14;
  break;
 case 2:
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_24) {
 case 20:
  VAR_26 |= VAR_8;
  VAR_26 |= VAR_16;
  break;
 case 24:
  VAR_26 |= VAR_9;
  VAR_26 |= VAR_17;
  break;
 case 32:
  VAR_26 |= VAR_10;
  VAR_26 |= VAR_18;
  break;
 case 16:
  break;
 default:
  return -VAR_0;
 }

 FUNC_0(VAR_25, VAR_3,
  VAR_1 | VAR_7 |
  VAR_15 | VAR_11 |
  VAR_19, VAR_26);

 return 0;
}
