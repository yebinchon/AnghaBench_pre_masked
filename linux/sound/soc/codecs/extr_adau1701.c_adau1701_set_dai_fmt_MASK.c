
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct adau1701 {unsigned int dai_fmt; int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
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



 int FUNC_0 (int ,int ,int ,unsigned int) ;
 int FUNC_1 (int ,int ,unsigned int) ;
 struct adau1701* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_18,
  unsigned int VAR_19)
{
 struct snd_soc_component *VAR_20 = VAR_18->component;
 struct adau1701 *VAR_21 = FUNC_2(VAR_20);
 unsigned int VAR_22 = 0x00, VAR_23 = 0x00;
 bool VAR_24;

 switch (VAR_19 & VAR_17) {
 case 136:

  VAR_23 |= VAR_8 | VAR_11
    | VAR_12;
  break;
 case 135:
  break;
 default:
  return -VAR_14;
 }


 switch (VAR_19 & VAR_16) {
 case 129:
  VAR_24 = 0;
  break;
 case 130:
  VAR_24 = 1;
  break;
 case 132:
  VAR_24 = 0;
  VAR_22 |= VAR_1;
  VAR_23 |= VAR_6;
  break;
 case 133:
  VAR_24 = 1;
  VAR_22 |= VAR_1;
  VAR_23 |= VAR_6;
  break;
 default:
  return -VAR_14;
 }

 switch (VAR_19 & VAR_15) {
 case 134:
  break;
 case 131:
  VAR_22 |= VAR_3;
  VAR_23 |= VAR_9;
  VAR_24 = !VAR_24;
  break;
 case 128:
  VAR_22 |= VAR_4;
  VAR_23 |= VAR_10;
  VAR_24 = !VAR_24;
  break;
 default:
  return -VAR_14;
 }

 if (VAR_24) {
  VAR_23 |= VAR_7;
  VAR_22 |= VAR_2;
 }

 VAR_21->dai_fmt = VAR_19 & VAR_15;

 FUNC_1(VAR_21->regmap, VAR_0, VAR_22);
 FUNC_0(VAR_21->regmap, VAR_5,
  ~VAR_13, VAR_23);

 return 0;
}
