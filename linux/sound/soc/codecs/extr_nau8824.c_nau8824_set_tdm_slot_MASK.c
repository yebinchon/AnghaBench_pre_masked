
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct nau8824 {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_0 (int ,int ,unsigned int,unsigned int) ;
 struct nau8824* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_10,
 unsigned int VAR_11, unsigned int VAR_12, int VAR_13, int VAR_14)
{
 struct snd_soc_component *VAR_15 = VAR_10->component;
 struct nau8824 *VAR_16 = FUNC_1(VAR_15);
 unsigned int VAR_17 = 0, VAR_18 = 0;

 if (VAR_13 > 4 || ((VAR_11 & 0xf0) && (VAR_11 & 0xf)) ||
  ((VAR_12 & 0xf0) && (VAR_12 & 0xf)) ||
  ((VAR_12 & 0xf0) && (VAR_11 & 0xf)) ||
  ((VAR_12 & 0xf) && (VAR_11 & 0xf0)))
  return -VAR_0;

 VAR_18 |= (VAR_6 | VAR_7);
 if (VAR_11 & 0xf0) {
  VAR_17 = 4 * VAR_14;
  VAR_18 |= (VAR_11 >> 4);
 } else {
  VAR_18 |= VAR_11;
 }
 if (VAR_12 & 0xf0)
  VAR_18 |= ((VAR_12 >> 4) << VAR_5);
 else
  VAR_18 |= (VAR_12 << VAR_5);

 FUNC_0(VAR_16->regmap, VAR_2,
  VAR_6 | VAR_7 |
  VAR_3 | VAR_4 |
  VAR_8, VAR_18);
 FUNC_0(VAR_16->regmap, VAR_1,
  VAR_9, VAR_17);

 return 0;
}
