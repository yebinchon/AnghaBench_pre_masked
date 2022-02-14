
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct regmap {int dummy; } ;
struct nau8810 {struct regmap* regmap; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;




 int FUNC_0 (int) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct regmap*,int ,int,int) ;
 int FUNC_3 (struct regmap*,int ,int ) ;
 int FUNC_4 (struct snd_soc_component*) ;
 struct nau8810* FUNC_5 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_9,
 enum snd_soc_bias_level VAR_10)
{
 struct nau8810 *VAR_11 = FUNC_5(VAR_9);
 struct regmap *VAR_12 = VAR_11->regmap;

 switch (VAR_10) {
 case 130:
 case 129:
  FUNC_2(VAR_12, VAR_6,
   VAR_5, VAR_4);
  break;

 case 128:
  FUNC_2(VAR_12, VAR_6,
   VAR_1 | VAR_0,
   VAR_1 | VAR_0);

  if (FUNC_4(VAR_9) == 131) {
   FUNC_1(VAR_12);
   FUNC_2(VAR_12, VAR_6,
    VAR_5, VAR_3);
   FUNC_0(100);
  }
  FUNC_2(VAR_12, VAR_6,
   VAR_5, VAR_2);
  break;

 case 131:
  FUNC_3(VAR_12, VAR_6, 0);
  FUNC_3(VAR_12, VAR_7, 0);
  FUNC_3(VAR_12, VAR_8, 0);
  break;
 }

 return 0;
}
