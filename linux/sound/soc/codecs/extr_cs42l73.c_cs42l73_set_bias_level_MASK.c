
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct cs42l73_private {int shutdwn_delay; int regmap; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct snd_soc_component*) ;
 struct cs42l73_private* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*,int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_4,
      enum snd_soc_bias_level VAR_5)
{
 struct cs42l73_private *VAR_6 = FUNC_4(VAR_4);

 switch (VAR_5) {
 case 130:
  FUNC_5(VAR_4, VAR_0, VAR_1, 0);
  FUNC_5(VAR_4, VAR_3, VAR_2, 0);
  break;

 case 129:
  break;

 case 128:
  if (FUNC_3(VAR_4) == 131) {
   FUNC_1(VAR_6->regmap, 0);
   FUNC_2(VAR_6->regmap);
  }
  FUNC_5(VAR_4, VAR_3, VAR_2, 1);
  break;

 case 131:
  FUNC_5(VAR_4, VAR_3, VAR_2, 1);
  if (VAR_6->shutdwn_delay > 0) {
   FUNC_0(VAR_6->shutdwn_delay);
   VAR_6->shutdwn_delay = 0;
  } else {
   FUNC_0(15);


  }
  FUNC_5(VAR_4, VAR_0, VAR_1, 1);
  break;
 }
 return 0;
}
