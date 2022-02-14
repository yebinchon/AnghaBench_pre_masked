
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8510_priv {int regmap; } ;
struct snd_soc_component {int dummy; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_soc_component*) ;
 struct wm8510_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ) ;
 int FUNC_5 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_5,
 enum snd_soc_bias_level VAR_6)
{
 struct wm8510_priv *VAR_7 = FUNC_3(VAR_5);
 u16 VAR_8 = FUNC_4(VAR_5, VAR_0) & ~0x3;

 switch (VAR_6) {
 case 130:
 case 129:
  VAR_8 |= 0x1;
  FUNC_5(VAR_5, VAR_0, VAR_8);
  break;

 case 128:
  VAR_8 |= VAR_1 | VAR_2;

  if (FUNC_2(VAR_5) == 131) {
   FUNC_1(VAR_7->regmap);


   FUNC_5(VAR_5, VAR_0, VAR_8 | 0x3);
   FUNC_0(100);
  }

  VAR_8 |= 0x2;
  FUNC_5(VAR_5, VAR_0, VAR_8);
  break;

 case 131:
  FUNC_5(VAR_5, VAR_0, 0);
  FUNC_5(VAR_5, VAR_3, 0);
  FUNC_5(VAR_5, VAR_4, 0);
  break;
 }

 return 0;
}
