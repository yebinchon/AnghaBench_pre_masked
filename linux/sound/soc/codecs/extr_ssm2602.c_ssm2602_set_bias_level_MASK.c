
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssm2602_priv {int clk_out_pwr; int regmap; } ;
struct snd_soc_component {int dummy; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int FUNC_0 (int ,int ,int,int) ;
 struct ssm2602_priv* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_4,
     enum snd_soc_bias_level VAR_5)
{
 struct ssm2602_priv *VAR_6 = FUNC_1(VAR_4);

 switch (VAR_5) {
 case 130:

  FUNC_0(VAR_6->regmap, VAR_3,
   VAR_2 | VAR_0 | VAR_1,
   VAR_6->clk_out_pwr);
  break;
 case 129:
  break;
 case 128:

  FUNC_0(VAR_6->regmap, VAR_3,
   VAR_2 | VAR_0 | VAR_1,
   VAR_0 | VAR_1);
  break;
 case 131:

  FUNC_0(VAR_6->regmap, VAR_3,
   VAR_2, VAR_2);
  break;

 }
 return 0;
}
