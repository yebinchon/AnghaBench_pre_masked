
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct adav80x {int regmap; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int VAR_0 ;
 unsigned int VAR_1 ;




 int FUNC_0 (int ,int ,unsigned int,unsigned int) ;
 struct adav80x* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_2,
  enum snd_soc_bias_level VAR_3)
{
 struct adav80x *VAR_4 = FUNC_1(VAR_2);
 unsigned int VAR_5 = VAR_1;

 switch (VAR_3) {
 case 130:
  break;
 case 129:
  break;
 case 128:
  FUNC_0(VAR_4->regmap, VAR_0, VAR_5,
   0x00);
  break;
 case 131:
  FUNC_0(VAR_4->regmap, VAR_0, VAR_5,
   VAR_5);
  break;
 }

 return 0;
}
