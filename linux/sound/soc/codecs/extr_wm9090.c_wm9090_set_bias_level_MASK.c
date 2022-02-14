
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm9090_priv {int regmap; } ;
struct snd_soc_component {int dummy; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_soc_component*) ;
 struct wm9090_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_6,
     enum snd_soc_bias_level VAR_7)
{
 struct wm9090_priv *VAR_8 = FUNC_3(VAR_6);

 switch (VAR_7) {
 case 130:
  break;

 case 129:
  FUNC_4(VAR_6, VAR_0, VAR_3,
        VAR_3);
  FUNC_4(VAR_6, VAR_2,
        VAR_1 |
        VAR_4,
        VAR_1 |
        1 << VAR_5);
  FUNC_0(1);
  break;

 case 128:
  if (FUNC_2(VAR_6) == 131) {

   FUNC_1(VAR_8->regmap);
  }





  FUNC_4(VAR_6, VAR_2,
        VAR_1 | VAR_4, 0);
  FUNC_4(VAR_6, VAR_0,
        VAR_3, 0);
  break;

 case 131:
  break;
 }

 return 0;
}
