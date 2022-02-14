
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra30_i2s {int regmap; } ;
struct snd_soc_dai {int dev; } ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,unsigned int,unsigned int) ;
 struct tegra30_i2s* FUNC_3 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_12,
    unsigned int VAR_13)
{
 struct tegra30_i2s *VAR_14 = FUNC_3(VAR_12);
 unsigned int VAR_15 = 0, VAR_16 = 0;

 switch (VAR_13 & VAR_2) {
 case 129:
  break;
 default:
  return -VAR_0;
 }

 VAR_15 |= VAR_11;
 switch (VAR_13 & VAR_3) {
 case 134:
  VAR_16 |= VAR_11;
  break;
 case 135:
  break;
 default:
  return -VAR_0;
 }

 VAR_15 |= VAR_7 |
  VAR_9;
 switch (VAR_13 & VAR_1) {
 case 133:
  VAR_16 |= VAR_5;
  VAR_16 |= VAR_8;
  break;
 case 132:
  VAR_16 |= VAR_5;
  VAR_16 |= VAR_10;
  break;
 case 131:
  VAR_16 |= VAR_6;
  VAR_16 |= VAR_8;
  break;
 case 128:
  VAR_16 |= VAR_6;
  VAR_16 |= VAR_8;
  break;
 case 130:
  VAR_16 |= VAR_6;
  VAR_16 |= VAR_8;
  break;
 default:
  return -VAR_0;
 }

 FUNC_0(VAR_12->dev);
 FUNC_2(VAR_14->regmap, VAR_4, VAR_15, VAR_16);
 FUNC_1(VAR_12->dev);

 return 0;
}
