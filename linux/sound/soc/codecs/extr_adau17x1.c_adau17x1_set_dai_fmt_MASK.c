
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int component; } ;
struct adau {int master; unsigned int dai_fmt; int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;




 unsigned int VAR_9 ;



 unsigned int VAR_10 ;

 unsigned int VAR_11 ;



 int FUNC_0 (int ,int ,unsigned int) ;
 struct adau* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_12,
  unsigned int VAR_13)
{
 struct adau *VAR_14 = FUNC_1(VAR_12->component);
 unsigned int VAR_15, VAR_16;
 int VAR_17;

 switch (VAR_13 & VAR_11) {
 case 138:
  VAR_15 = VAR_3;
  VAR_14->master = 1;
  break;
 case 137:
  VAR_15 = 0;
  VAR_14->master = 0;
  break;
 default:
  return -VAR_8;
 }

 switch (VAR_13 & VAR_9) {
 case 134:
  VAR_17 = 0;
  VAR_16 = VAR_7;
  break;
 case 131:
 case 128:
  VAR_17 = 1;
  VAR_16 = VAR_6;
  break;
 case 136:
  VAR_17 = 1;
  VAR_15 |= VAR_4;
  VAR_16 = VAR_7;
  break;
 case 135:
  VAR_17 = 1;
  VAR_15 |= VAR_4;
  VAR_16 = VAR_6;
  break;
 default:
  return -VAR_8;
 }

 switch (VAR_13 & VAR_10) {
 case 129:
  break;
 case 132:
  VAR_15 |= VAR_1;
  break;
 case 130:
  VAR_17 = !VAR_17;
  break;
 case 133:
  VAR_15 |= VAR_1;
  VAR_17 = !VAR_17;
  break;
 default:
  return -VAR_8;
 }

 if (VAR_17)
  VAR_15 |= VAR_2;

 FUNC_0(VAR_14->regmap, VAR_0, VAR_15);
 FUNC_0(VAR_14->regmap, VAR_5, VAR_16);

 VAR_14->dai_fmt = VAR_13 & VAR_9;

 return 0;
}
