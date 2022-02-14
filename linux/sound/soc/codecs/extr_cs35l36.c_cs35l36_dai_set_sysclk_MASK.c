
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct cs35l36_private {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (int ,int ,int ) ;
 struct cs35l36_private* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_12, int VAR_13,
      unsigned int VAR_14, int VAR_15)
{
 struct snd_soc_component *VAR_16 = VAR_12->component;
 struct cs35l36_private *VAR_17 =
   FUNC_2(VAR_16);
 int VAR_18, VAR_19;

 if (VAR_14 > VAR_5) {
  VAR_18 = VAR_0;
  VAR_19 = VAR_2;
 } else {
  VAR_18 = 3 * ((VAR_5 * 4 + VAR_14 - 1) / VAR_14) + 4;
  VAR_19 = 5 * ((VAR_5 * 4 + VAR_14 - 1) / VAR_14) + 4;
 }

 FUNC_1(VAR_17->regmap, VAR_6,
   VAR_9);
 FUNC_1(VAR_17->regmap, VAR_6,
   VAR_10);

 FUNC_0(VAR_17->regmap, VAR_11,
      VAR_1 | VAR_3,
      VAR_18 | (VAR_19 << VAR_4));

 FUNC_1(VAR_17->regmap, VAR_6,
   VAR_7);
 FUNC_1(VAR_17->regmap, VAR_6,
   VAR_8);
 return 0;
}
