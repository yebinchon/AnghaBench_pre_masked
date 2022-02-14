
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8988_priv {int regmap; } ;
struct snd_soc_component {int dummy; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;






 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_soc_component*) ;
 struct wm8988_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ) ;
 int FUNC_5 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_1,
     enum snd_soc_bias_level VAR_2)
{
 struct wm8988_priv *VAR_3 = FUNC_3(VAR_1);
 u16 VAR_4 = FUNC_4(VAR_1, VAR_0) & ~0x1c1;

 switch (VAR_2) {
 case 130:
  break;

 case 129:

  FUNC_5(VAR_1, VAR_0, VAR_4 | 0x00c0);
  break;

 case 128:
  if (FUNC_2(VAR_1) == 131) {
   FUNC_1(VAR_3->regmap);


   FUNC_5(VAR_1, VAR_0, VAR_4 | 0x1c1);


   FUNC_0(100);
  }


  FUNC_5(VAR_1, VAR_0, VAR_4 | 0x0141);
  break;

 case 131:
  FUNC_5(VAR_1, VAR_0, 0x0000);
  break;
 }
 return 0;
}
