
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct nau8540 {int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_0 (int ,int ,unsigned int,unsigned int) ;
 struct nau8540* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_10,
 unsigned int VAR_11, unsigned int VAR_12, int VAR_13, int VAR_14)
{
 struct snd_soc_component *VAR_15 = VAR_10->component;
 struct nau8540 *VAR_16 = FUNC_1(VAR_15);
 unsigned int VAR_17 = 0, VAR_18 = 0;

 if (VAR_13 > 4 || ((VAR_11 & 0xf0) && (VAR_11 & 0xf)))
  return -VAR_0;

 VAR_18 |= (VAR_7 | VAR_8);
 if (VAR_11 & 0xf0) {
  VAR_17 = 4 * VAR_14;
  VAR_18 |= (VAR_11 >> 4);
 } else {
  VAR_18 |= VAR_11;
 }
 FUNC_0(VAR_16->regmap, VAR_6,
  VAR_7 | VAR_8 |
  VAR_9, VAR_18);
 FUNC_0(VAR_16->regmap, VAR_4,
  VAR_1, VAR_1);
 FUNC_0(VAR_16->regmap, VAR_5,
  VAR_2 | VAR_3,
  VAR_2 | VAR_17);

 return 0;
}
