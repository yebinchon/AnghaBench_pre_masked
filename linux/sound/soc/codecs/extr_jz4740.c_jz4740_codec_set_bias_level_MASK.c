
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct regmap {int dummy; } ;
struct jz4740_codec {struct regmap* regmap; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;




 int FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct regmap*,int ,unsigned int,unsigned int) ;
 int FUNC_3 (struct snd_soc_component*) ;
 struct jz4740_codec* FUNC_4 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_5,
 enum snd_soc_bias_level VAR_6)
{
 struct jz4740_codec *VAR_7 = FUNC_4(VAR_5);
 struct regmap *VAR_8 = VAR_7->regmap;
 unsigned int VAR_9;
 unsigned int VAR_10;

 switch (VAR_6) {
 case 130:
  break;
 case 129:
  VAR_9 = VAR_3 |
    VAR_2 |
    VAR_0;
  VAR_10 = 0;

  FUNC_2(VAR_8, VAR_4, VAR_9, VAR_10);
  break;
 case 128:

  if (FUNC_3(VAR_5) == 131)
   FUNC_0(VAR_8);

  VAR_9 = VAR_3 |
   VAR_2 |
   VAR_0;
  VAR_10 = VAR_3 |
   VAR_2 |
   VAR_0;

  FUNC_2(VAR_8, VAR_4, VAR_9, VAR_10);
  break;
 case 131:
  VAR_9 = VAR_1;
  VAR_10 = VAR_1;

  FUNC_2(VAR_8, VAR_4, VAR_9, VAR_10);
  FUNC_1(VAR_8);
  break;
 default:
  break;
 }

 return 0;
}
