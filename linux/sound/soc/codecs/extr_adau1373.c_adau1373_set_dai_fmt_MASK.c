
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {size_t id; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct adau1373_dai {int master; } ;
struct adau1373 {int regmap; struct adau1373_dai* dais; } ;


 int FUNC_0 (size_t) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 unsigned int VAR_9 ;



 unsigned int VAR_10 ;

 unsigned int VAR_11 ;



 int FUNC_1 (int ,int ,int ,unsigned int) ;
 struct adau1373* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_12, unsigned int VAR_13)
{
 struct snd_soc_component *VAR_14 = VAR_12->component;
 struct adau1373 *VAR_15 = FUNC_2(VAR_14);
 struct adau1373_dai *VAR_16 = &VAR_15->dais[VAR_12->id];
 unsigned int VAR_17;

 switch (VAR_13 & VAR_11) {
 case 137:
  VAR_17 = VAR_6;
  VAR_16->master = 1;
  break;
 case 136:
  VAR_17 = 0;
  VAR_16->master = 0;
  break;
 default:
  return -VAR_8;
 }

 switch (VAR_13 & VAR_9) {
 case 134:
  VAR_17 |= VAR_1;
  break;
 case 131:
  VAR_17 |= VAR_2;
  break;
 case 128:
  VAR_17 |= VAR_3;
  break;
 case 135:
  VAR_17 |= VAR_0;
  break;
 default:
  return -VAR_8;
 }

 switch (VAR_13 & VAR_10) {
 case 129:
  break;
 case 132:
  VAR_17 |= VAR_4;
  break;
 case 130:
  VAR_17 |= VAR_5;
  break;
 case 133:
  VAR_17 |= VAR_5 | VAR_4;
  break;
 default:
  return -VAR_8;
 }

 FUNC_1(VAR_15->regmap, FUNC_0(VAR_12->id),
  ~VAR_7, VAR_17);

 return 0;
}
