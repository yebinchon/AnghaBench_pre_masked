
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra20_i2s {int regmap; } ;
struct snd_soc_dai {int dummy; } ;


 int VAR_0 ;




 unsigned int VAR_1 ;

 unsigned int VAR_2 ;

 unsigned int VAR_3 ;


 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int FUNC_0 (int ,int ,unsigned int,unsigned int) ;
 struct tegra20_i2s* FUNC_1 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_14,
    unsigned int VAR_15)
{
 struct tegra20_i2s *VAR_16 = FUNC_1(VAR_14);
 unsigned int VAR_17 = 0, VAR_18 = 0;

 switch (VAR_15 & VAR_2) {
 case 129:
  break;
 default:
  return -VAR_0;
 }

 VAR_17 |= VAR_13;
 switch (VAR_15 & VAR_3) {
 case 134:
  VAR_18 |= VAR_13;
  break;
 case 135:
  break;
 default:
  return -VAR_0;
 }

 VAR_17 |= VAR_8 |
  VAR_11;
 switch (VAR_15 & VAR_1) {
 case 133:
  VAR_18 |= VAR_5;
  VAR_18 |= VAR_10;
  break;
 case 132:
  VAR_18 |= VAR_5;
  VAR_18 |= VAR_12;
  break;
 case 131:
  VAR_18 |= VAR_6;
  VAR_18 |= VAR_10;
  break;
 case 128:
  VAR_18 |= VAR_9;
  VAR_18 |= VAR_10;
  break;
 case 130:
  VAR_18 |= VAR_7;
  VAR_18 |= VAR_10;
  break;
 default:
  return -VAR_0;
 }

 FUNC_0(VAR_16->regmap, VAR_4, VAR_17, VAR_18);

 return 0;
}
