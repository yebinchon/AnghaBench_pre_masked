
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct adau {int regmap; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (struct snd_soc_component*) ;
 struct adau* FUNC_4 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_2,
     enum snd_soc_bias_level VAR_3)
{
 struct adau *VAR_4 = FUNC_4(VAR_2);

 switch (VAR_3) {
 case 130:
  break;
 case 129:
  break;
 case 128:
  FUNC_0(VAR_4->regmap, 0);
  FUNC_2(VAR_4->regmap, VAR_0,
   VAR_1,
   VAR_1);
  if (FUNC_3(VAR_2) == 131)
   FUNC_1(VAR_4->regmap);
  break;
 case 131:
  FUNC_2(VAR_4->regmap, VAR_0,
   VAR_1, 0);
  FUNC_0(VAR_4->regmap, 1);
  break;

 }
 return 0;
}
