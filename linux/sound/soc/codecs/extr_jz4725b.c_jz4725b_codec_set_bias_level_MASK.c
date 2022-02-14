
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct regmap {int dummy; } ;
struct jz_icdc {struct regmap* regmap; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_1 (int) ;
 int FUNC_2 (struct regmap*,int ,int ,int ) ;
 struct jz_icdc* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_3,
     enum snd_soc_bias_level VAR_4)
{
 struct jz_icdc *VAR_5 = FUNC_3(VAR_3);
 struct regmap *VAR_6 = VAR_5->regmap;

 switch (VAR_4) {
 case 130:
  FUNC_2(VAR_6, VAR_0,
       FUNC_0(VAR_2), 0);
  break;
 case 129:

  FUNC_2(VAR_6, VAR_0,
       FUNC_0(VAR_1), 0);
  FUNC_1(224);
  break;
 case 128:
  FUNC_2(VAR_6, VAR_0,
       FUNC_0(VAR_2),
       FUNC_0(VAR_2));
  break;
 case 131:
  FUNC_2(VAR_6, VAR_0,
       FUNC_0(VAR_1),
       FUNC_0(VAR_1));
  break;
 }

 return 0;
}
