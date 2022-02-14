
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct da7213_priv {int master; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;


 unsigned int VAR_15 ;



 unsigned int VAR_16 ;

 unsigned int VAR_17 ;





 struct da7213_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_2 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_18, unsigned int VAR_19)
{
 struct snd_soc_component *VAR_20 = VAR_18->component;
 struct da7213_priv *VAR_21 = FUNC_0(VAR_20);
 u8 VAR_22 = 0, VAR_23 = 0;
 u8 VAR_24 = 0;


 switch (VAR_19 & VAR_17) {
 case 138:
  VAR_21->master = 1;
  break;
 case 137:
  VAR_21->master = 0;
  break;
 default:
  return -VAR_14;
 }


 switch (VAR_19 & VAR_15) {
 case 136:
 case 133:
 case 130:
  switch (VAR_19 & VAR_16) {
  case 131:
   break;
  case 132:
   VAR_22 |= VAR_12;
   break;
  case 134:
   VAR_22 |= VAR_3;
   break;
  case 135:
   VAR_22 |= VAR_12 |
     VAR_3;
   break;
  default:
   return -VAR_14;
  }
  break;
 case 129:
 case 128:

  switch (VAR_19 & VAR_16) {
  case 131:
   VAR_22 |= VAR_3;
   break;
  case 132:
   VAR_22 |= VAR_12 |
     VAR_3;
   break;
  case 134:
   break;
  case 135:
   VAR_22 |= VAR_12;
   break;
  default:
   return -VAR_14;
  }
  break;
 default:
  return -VAR_14;
 }


 switch (VAR_19 & VAR_15) {
 case 136:
  VAR_23 |= VAR_7;
  break;
 case 133:
  VAR_23 |= VAR_8;
  break;
 case 130:
  VAR_23 |= VAR_10;
  break;
 case 129:
  VAR_23 |= VAR_6;
  VAR_24 = 1;
  break;
 case 128:
  VAR_23 |= VAR_6;
  break;
 default:
  return -VAR_14;
 }


 VAR_22 |= VAR_0;

 FUNC_1(VAR_20, VAR_2,
       VAR_1 |
       VAR_4 | VAR_13,
       VAR_22);
 FUNC_1(VAR_20, VAR_5, VAR_9,
       VAR_23);
 FUNC_2(VAR_20, VAR_11, VAR_24);

 return 0;
}
