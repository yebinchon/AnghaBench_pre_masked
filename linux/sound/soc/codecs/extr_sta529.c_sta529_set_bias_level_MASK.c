
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta529 {int regmap; } ;
struct snd_soc_component {int dummy; } ;
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
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_soc_component*) ;
 struct sta529* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_10, enum
  snd_soc_bias_level VAR_11)
{
 struct sta529 *VAR_12 = FUNC_2(VAR_10);

 switch (VAR_11) {
 case 130:
 case 129:
  FUNC_3(VAR_10, VAR_8, VAR_5,
    VAR_7);
  FUNC_3(VAR_10, VAR_9, VAR_2,
    VAR_1);
  break;
 case 128:
  if (FUNC_1(VAR_10) == 131)
   FUNC_0(VAR_12->regmap);
  FUNC_3(VAR_10, VAR_8,
     VAR_5, VAR_6);

  FUNC_3(VAR_10, VAR_8, VAR_3,
    VAR_4);
  FUNC_3(VAR_10, VAR_9, VAR_2,
    VAR_0);
  break;
 case 131:
  break;
 }

 return 0;

}
