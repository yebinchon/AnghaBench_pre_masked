
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
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 unsigned int VAR_27 ;
 int FUNC_0 (struct snd_soc_component*,int ,unsigned int,unsigned int) ;

int FUNC_1(struct snd_soc_component *VAR_28,
       unsigned int VAR_29, unsigned int VAR_30)
{
 unsigned int VAR_31 = 0, VAR_32 = 0;
 unsigned int VAR_33 = 0, VAR_34 = 0;

 if (VAR_30 > VAR_12)
  return -VAR_0;

 if (VAR_29 & VAR_19) {
  VAR_31 |= VAR_20;
  VAR_32 = (VAR_32 & ~VAR_20)
    | (VAR_30 << VAR_21);
 }

 if (VAR_29 & VAR_17) {
  VAR_31 |= VAR_13;
  VAR_32 = (VAR_32 & ~VAR_13)
    | (VAR_30 << VAR_14);
 }

 if (VAR_29 & VAR_18) {
  VAR_31 |= VAR_15;
  VAR_32 = (VAR_32 & ~VAR_15)
    | (VAR_30 << VAR_16);
 }

 if (VAR_29 & VAR_7) {
  VAR_31 |= VAR_8;
  VAR_32 = (VAR_32 & ~VAR_8)
    | (VAR_30 << VAR_9);
 }

 if (VAR_29 & VAR_5) {
  VAR_33 |= VAR_1;
  VAR_34 = (VAR_34 & ~VAR_1)
    | (VAR_30 << VAR_2);
 }

 if (VAR_29 & VAR_6) {
  VAR_33 |= VAR_3;
  VAR_34 = (VAR_34 & ~VAR_3)
    | (VAR_30 << VAR_4);
 }

 if (VAR_29 & VAR_27) {
  VAR_33 |= VAR_25;
  VAR_34 = (VAR_34 & ~VAR_25)
    | (VAR_30 << VAR_26);
 }

 if (VAR_29 & VAR_24) {
  VAR_33 |= VAR_22;
  VAR_34 = (VAR_34 & ~VAR_22)
    | (VAR_30 << VAR_23);
 }

 if (VAR_31)
  FUNC_0(VAR_28, VAR_10,
        VAR_31, VAR_32);

 if (VAR_33)
  FUNC_0(VAR_28, VAR_11,
        VAR_33, VAR_34);
 return 0;
}
