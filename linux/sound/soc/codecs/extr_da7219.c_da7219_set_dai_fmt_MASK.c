
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct da7219_priv {int master; } ;


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



 unsigned int VAR_12 ;



 unsigned int VAR_13 ;

 unsigned int VAR_14 ;



 struct da7219_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_15, unsigned int VAR_16)
{
 struct snd_soc_component *VAR_17 = VAR_15->component;
 struct da7219_priv *VAR_18 = FUNC_0(VAR_17);
 u8 VAR_19 = 0, VAR_20 = 0;

 switch (VAR_16 & VAR_14) {
 case 137:
  VAR_18->master = 1;
  break;
 case 136:
  VAR_18->master = 0;
  break;
 default:
  return -VAR_11;
 }

 switch (VAR_16 & VAR_12) {
 case 134:
 case 131:
 case 128:
  switch (VAR_16 & VAR_13) {
  case 129:
   break;
  case 130:
   VAR_19 |= VAR_9;
   break;
  case 132:
   VAR_19 |= VAR_1;
   break;
  case 133:
   VAR_19 |= VAR_9 |
     VAR_1;
   break;
  default:
   return -VAR_11;
  }
  break;
 case 135:
  switch (VAR_16 & VAR_13) {
  case 129:
   VAR_19 |= VAR_1;
   break;
  case 130:
   VAR_19 |= VAR_9 |
     VAR_1;
   break;
  case 132:
   break;
  case 133:
   VAR_19 |= VAR_9;
   break;
  default:
   return -VAR_11;
  }
  break;
 default:
  return -VAR_11;
 }

 switch (VAR_16 & VAR_12) {
 case 134:
  VAR_20 |= VAR_5;
  break;
 case 131:
  VAR_20 |= VAR_6;
  break;
 case 128:
  VAR_20 |= VAR_8;
  break;
 case 135:
  VAR_20 |= VAR_4;
  break;
 default:
  return -VAR_11;
 }

 FUNC_1(VAR_17, VAR_0,
       VAR_2 | VAR_10,
       VAR_19);
 FUNC_1(VAR_17, VAR_3, VAR_7,
       VAR_20);

 return 0;
}
