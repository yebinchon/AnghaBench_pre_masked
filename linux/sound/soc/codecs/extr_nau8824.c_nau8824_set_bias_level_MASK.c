
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct nau8824 {int regmap; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (struct nau8824*) ;
 int FUNC_1 (int ,int ,int,int) ;
 int FUNC_2 (struct snd_soc_component*) ;
 struct nau8824* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_4,
 enum snd_soc_bias_level VAR_5)
{
 struct nau8824 *VAR_6 = FUNC_3(VAR_4);

 switch (VAR_5) {
 case 130:
  break;

 case 129:
  break;

 case 128:
  if (FUNC_2(VAR_4) == 131) {

   FUNC_0(VAR_6);
  }
  break;

 case 131:
  FUNC_1(VAR_6->regmap,
   VAR_2, 0x3ff, 0x3ff);
  FUNC_1(VAR_6->regmap,
   VAR_3,
   VAR_0 | VAR_1, 0);
  break;
 }

 return 0;
}
