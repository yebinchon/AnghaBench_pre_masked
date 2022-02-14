
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
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 int VAR_26 ;
 unsigned int VAR_27 ;
 unsigned int VAR_28 ;
 unsigned int VAR_29 ;
 unsigned int VAR_30 ;
 int FUNC_0 (struct snd_soc_component*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_31, unsigned int VAR_32,
   unsigned int VAR_33, int VAR_34, int VAR_35)
{
 struct snd_soc_component *VAR_36 = VAR_31->component;
 unsigned int VAR_37, VAR_38 = 0;

 if (VAR_32 || VAR_33)
  FUNC_0(VAR_36, VAR_14,
   VAR_21, VAR_21);
 else
  FUNC_0(VAR_36, VAR_14,
   VAR_21, 0);

 switch (VAR_34) {
 case 4:
  VAR_38 |= VAR_27;
  VAR_38 |= VAR_22;
  break;
 case 6:
  VAR_38 |= VAR_28;
  VAR_38 |= VAR_23;
  break;
 case 8:
  VAR_38 |= VAR_29;
  VAR_38 |= VAR_24;
  break;
 case 2:
  break;
 default:
  return -VAR_0;
 }

 FUNC_0(VAR_36, VAR_20,
  VAR_30 | VAR_25, VAR_38);

 switch (VAR_35) {
 case 8:
  if (VAR_32 || VAR_33)
   return -VAR_0;
  VAR_37 = VAR_12 | VAR_5;
  break;
 case 16:
  VAR_38 = VAR_15;
  VAR_37 = VAR_8 | VAR_1;
  break;
 case 20:
  VAR_38 = VAR_16;
  VAR_37 = VAR_9 | VAR_2;
  break;
 case 24:
  VAR_38 = VAR_17;
  VAR_37 = VAR_10 | VAR_3;
  break;
 case 32:
  VAR_38 = VAR_18;
  VAR_37 = VAR_11 | VAR_4;
  break;
 default:
  return -VAR_0;
 }

 FUNC_0(VAR_36, VAR_26,
  VAR_19, VAR_38);
 FUNC_0(VAR_36, VAR_7,
  VAR_13 | VAR_6, VAR_37);

 return 0;
}
