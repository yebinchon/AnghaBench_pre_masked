
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {size_t id; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct adav80x {unsigned int* dai_fmt; int regmap; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;


 unsigned int VAR_10 ;

 unsigned int VAR_11 ;

 unsigned int VAR_12 ;


 int ** VAR_13 ;
 int FUNC_0 (int ,int ,unsigned int,unsigned int) ;
 int FUNC_1 (int ,int ,unsigned int) ;
 struct adav80x* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_14, unsigned int VAR_15)
{
 struct snd_soc_component *VAR_16 = VAR_14->component;
 struct adav80x *VAR_17 = FUNC_2(VAR_16);
 unsigned int VAR_18 = 0x00;
 unsigned int VAR_19 = 0x00;

 switch (VAR_15 & VAR_12) {
 case 133:
  VAR_18 |= VAR_3;
  VAR_19 |= VAR_7;
 case 132:
  break;
 default:
  return -VAR_9;
 }

 switch (VAR_15 & VAR_10) {
 case 131:
  VAR_18 |= VAR_0;
  VAR_19 |= VAR_5;
  break;
 case 130:
  VAR_18 |= VAR_1;
  VAR_19 |= VAR_6;
  break;
 case 128:
  VAR_18 |= VAR_4;
  VAR_19 |= VAR_8;
  break;
 default:
  return -VAR_9;
 }

 switch (VAR_15 & VAR_11) {
 case 129:
  break;
 default:
  return -VAR_9;
 }

 FUNC_0(VAR_17->regmap, VAR_13[VAR_14->id][0],
  VAR_2 | VAR_3,
  VAR_18);
 FUNC_1(VAR_17->regmap, VAR_13[VAR_14->id][1],
  VAR_19);

 VAR_17->dai_fmt[VAR_14->id] = VAR_15 & VAR_10;

 return 0;
}
