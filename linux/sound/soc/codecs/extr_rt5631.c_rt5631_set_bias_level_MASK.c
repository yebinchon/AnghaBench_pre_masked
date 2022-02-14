
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct rt5631_priv {int regmap; } ;
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
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct snd_soc_component*) ;
 struct rt5631_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_6 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_component *VAR_9,
   enum snd_soc_bias_level VAR_10)
{
 struct rt5631_priv *VAR_11 = FUNC_4(VAR_9);

 switch (VAR_10) {
 case 130:
 case 129:
  FUNC_5(VAR_9, VAR_3,
   VAR_6 | VAR_7,
   VAR_6 | VAR_7);
  break;

 case 128:
  if (FUNC_3(VAR_9) == 131) {
   FUNC_5(VAR_9, VAR_4,
    VAR_8 | VAR_1,
    VAR_8 | VAR_1);
   FUNC_0(80);
   FUNC_5(VAR_9, VAR_4,
    VAR_0,
    VAR_0);
   FUNC_1(VAR_11->regmap, 0);
   FUNC_2(VAR_11->regmap);
  }
  break;

 case 131:
  FUNC_6(VAR_9, VAR_2, 0x0000);
  FUNC_6(VAR_9, VAR_3, 0x0000);
  FUNC_6(VAR_9, VAR_4, 0x0000);
  FUNC_6(VAR_9, VAR_5, 0x0000);
  break;

 default:
  break;
 }

 return 0;
}
