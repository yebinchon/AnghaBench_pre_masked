
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct rt5640_priv {int asrc_en; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;


 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 struct rt5640_priv* FUNC_0 (struct snd_soc_component*) ;
 scalar_t__ FUNC_1 (struct snd_soc_component*,int ) ;
 int FUNC_2 (struct snd_soc_component*,int ,int,int) ;

int FUNC_3(struct snd_soc_component *VAR_21,
  unsigned int VAR_22, unsigned int VAR_23)
{
 struct rt5640_priv *VAR_24 = FUNC_0(VAR_21);
 unsigned int VAR_25 = 0;
 unsigned int VAR_26 = 0;

 switch (VAR_23) {
 case 128:
 case 129:
  break;

 default:
  return -VAR_0;
 }

 if (!VAR_22)
  return -VAR_0;

 if (VAR_22 & VAR_9) {
  VAR_25 |= VAR_19;
  VAR_26 = (VAR_26 & ~VAR_19)
   | (VAR_23 << VAR_20);
 }

 if (VAR_22 & VAR_7) {
  VAR_25 |= VAR_15;
  VAR_26 = (VAR_26 & ~VAR_15)
   | (VAR_23 << VAR_16);
 }

 if (VAR_22 & VAR_8) {
  VAR_25 |= VAR_17;
  VAR_26 = (VAR_26 & ~VAR_17)
   | (VAR_23 << VAR_18);
 }

 if (VAR_22 & VAR_5) {
  VAR_25 |= VAR_1;
  VAR_26 = (VAR_26 & ~VAR_1)
   | (VAR_23 << VAR_2);
 }

 if (VAR_22 & VAR_3) {
  VAR_25 |= VAR_11;
  VAR_26 = (VAR_26 & ~VAR_11)
   | (VAR_23 << VAR_12);
 }

 if (VAR_22 & VAR_4) {
  VAR_25 |= VAR_13;
  VAR_26 = (VAR_26 & ~VAR_13)
   | (VAR_23 << VAR_14);
 }

 FUNC_2(VAR_21, VAR_6,
  VAR_25, VAR_26);

 if (FUNC_1(VAR_21, VAR_6)) {
  VAR_24->asrc_en = 1;
  FUNC_2(VAR_21, VAR_10, 0x3, 0x3);
 } else {
  VAR_24->asrc_en = 0;
  FUNC_2(VAR_21, VAR_10, 0x3, 0x0);
 }

 return 0;
}
