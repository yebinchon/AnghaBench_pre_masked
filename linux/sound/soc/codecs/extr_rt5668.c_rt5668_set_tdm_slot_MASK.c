
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct snd_soc_component*,int ,int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_16, unsigned int VAR_17,
   unsigned int VAR_18, int VAR_19, int VAR_20)
{
 struct snd_soc_component *VAR_21 = VAR_16->component;
 unsigned int VAR_22 = 0;

 switch (VAR_19) {
 case 4:
  VAR_22 |= VAR_12;
  VAR_22 |= VAR_7;
  break;
 case 6:
  VAR_22 |= VAR_13;
  VAR_22 |= VAR_8;
  break;
 case 8:
  VAR_22 |= VAR_14;
  VAR_22 |= VAR_9;
  break;
 case 2:
  break;
 default:
  return -VAR_0;
 }

 FUNC_0(VAR_21, VAR_6,
  VAR_15 | VAR_10, VAR_22);

 switch (VAR_20) {
 case 16:
  VAR_22 = VAR_1;
  break;
 case 20:
  VAR_22 = VAR_2;
  break;
 case 24:
  VAR_22 = VAR_3;
  break;
 case 32:
  VAR_22 = VAR_4;
  break;
 default:
  return -VAR_0;
 }

 FUNC_0(VAR_21, VAR_11,
  VAR_5, VAR_22);

 return 0;
}
