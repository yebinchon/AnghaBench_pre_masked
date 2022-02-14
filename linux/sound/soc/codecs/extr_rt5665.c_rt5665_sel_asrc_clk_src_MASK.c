
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;







 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 int FUNC_0 (struct snd_soc_component*,int ,unsigned int,unsigned int) ;

int FUNC_1(struct snd_soc_component *VAR_27,
  unsigned int VAR_28, unsigned int VAR_29)
{
 unsigned int VAR_30 = 0;
 unsigned int VAR_31 = 0;
 unsigned int VAR_32 = 0;
 unsigned int VAR_33 = 0;

 switch (VAR_29) {
 case 131:
 case 134:
 case 133:
 case 132:
 case 130:
 case 129:
 case 128:
  break;

 default:
  return -VAR_0;
 }

 if (VAR_28 & VAR_21) {
  VAR_30 |= VAR_23;
  VAR_31 = (VAR_31 & ~VAR_23)
   | (VAR_29 << VAR_24);
 }

 if (VAR_28 & VAR_22) {
  VAR_30 |= VAR_25;
  VAR_31 = (VAR_31 & ~VAR_25)
   | (VAR_29 << VAR_26);
 }

 if (VAR_28 & VAR_19) {
  VAR_30 |= VAR_15;
  VAR_31 = (VAR_31 & ~VAR_15)
   | (VAR_29 << VAR_16);
 }

 if (VAR_28 & VAR_20) {
  VAR_30 |= VAR_17;
  VAR_31 = (VAR_31 & ~VAR_17)
   | (VAR_29 << VAR_18);
 }

 if (VAR_28 & VAR_7) {
  VAR_32 |= VAR_9;
  VAR_33 = (VAR_31 & ~VAR_9)
   | (VAR_29 << VAR_10);
 }

 if (VAR_28 & VAR_8) {
  VAR_32 |= VAR_11;
  VAR_33 = (VAR_31 & ~VAR_11)
   | (VAR_29 << VAR_12);
 }

 if (VAR_28 & VAR_5) {
  VAR_32 |= VAR_1;
  VAR_33 = (VAR_33 & ~VAR_1)
   | (VAR_29 << VAR_2);
 }

 if (VAR_28 & VAR_6) {
  VAR_32 |= VAR_3;
  VAR_33 = (VAR_33 & ~VAR_3)
   | (VAR_29 << VAR_4);
 }

 if (VAR_30)
  FUNC_0(VAR_27, VAR_13,
   VAR_30, VAR_31);

 if (VAR_32)
  FUNC_0(VAR_27, VAR_14,
   VAR_32, VAR_33);

 return 0;
}
