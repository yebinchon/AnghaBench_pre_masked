
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct cs35l33_private {int regmap; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int FUNC_0 (int ,int ,unsigned int*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct cs35l33_private* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_7,
      enum snd_soc_bias_level VAR_8)
{
 unsigned int VAR_9;
 struct cs35l33_private *VAR_10 = FUNC_2(VAR_7);

 switch (VAR_8) {
 case 130:
  break;
 case 129:
  FUNC_1(VAR_10->regmap, VAR_5,
        VAR_3, 0);
  FUNC_1(VAR_10->regmap, VAR_0,
        VAR_2, 0);
  break;
 case 128:
  FUNC_1(VAR_10->regmap, VAR_5,
        VAR_3, VAR_3);
  FUNC_0(VAR_10->regmap, VAR_1, &VAR_9);
  FUNC_3(1000, 1100);
  if (VAR_9 & VAR_4)
   FUNC_1(VAR_10->regmap, VAR_0,
         VAR_2, VAR_2);
  break;
 case 131:
  break;
 default:
  return -VAR_6;
 }

 return 0;
}
