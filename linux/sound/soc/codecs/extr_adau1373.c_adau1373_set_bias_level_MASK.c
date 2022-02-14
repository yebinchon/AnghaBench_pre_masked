
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct adau1373 {int regmap; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int ,int ,int ,int ) ;
 struct adau1373* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_2,
 enum snd_soc_bias_level VAR_3)
{
 struct adau1373 *VAR_4 = FUNC_1(VAR_2);

 switch (VAR_3) {
 case 130:
  break;
 case 129:
  break;
 case 128:
  FUNC_0(VAR_4->regmap, VAR_0,
   VAR_1, VAR_1);
  break;
 case 131:
  FUNC_0(VAR_4->regmap, VAR_0,
   VAR_1, 0);
  break;
 }
 return 0;
}
