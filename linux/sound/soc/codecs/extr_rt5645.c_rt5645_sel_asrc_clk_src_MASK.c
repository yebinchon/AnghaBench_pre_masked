
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
 int VAR_10 ;
 int VAR_11 ;




 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 int FUNC_0 (struct snd_soc_component*,int ,unsigned int,unsigned int) ;

int FUNC_1(struct snd_soc_component *VAR_21,
  unsigned int VAR_22, unsigned int VAR_23)
{
 unsigned int VAR_24 = 0;
 unsigned int VAR_25 = 0;
 unsigned int VAR_26 = 0;
 unsigned int VAR_27 = 0;

 switch (VAR_23) {
 case 129:
 case 131:
 case 130:
 case 128:
  break;

 default:
  return -VAR_0;
 }

 if (VAR_22 & VAR_18) {
  VAR_24 |= VAR_19;
  VAR_25 = (VAR_25 & ~VAR_19)
   | (VAR_23 << VAR_20);
 }

 if (VAR_22 & VAR_16) {
  VAR_24 |= VAR_12;
  VAR_25 = (VAR_25 & ~VAR_12)
   | (VAR_23 << VAR_13);
 }

 if (VAR_22 & VAR_17) {
  VAR_24 |= VAR_14;
  VAR_25 = (VAR_25 & ~VAR_14)
   | (VAR_23 << VAR_15);
 }

 if (VAR_22 & VAR_7) {
  VAR_24 |= VAR_8;
  VAR_25 = (VAR_25 & ~VAR_8)
   | (VAR_23 << VAR_9);
 }

 if (VAR_22 & VAR_5) {
  VAR_26 |= VAR_1;
  VAR_27 = (VAR_27 & ~VAR_1)
   | (VAR_23 << VAR_2);
 }

 if (VAR_22 & VAR_6) {
  VAR_26 |= VAR_3;
  VAR_27 = (VAR_27 & ~VAR_3)
   | (VAR_23 << VAR_4);
 }

 if (VAR_24)
  FUNC_0(VAR_21, VAR_10,
   VAR_24, VAR_25);

 if (VAR_26)
  FUNC_0(VAR_21, VAR_11,
   VAR_26, VAR_27);

 return 0;
}
