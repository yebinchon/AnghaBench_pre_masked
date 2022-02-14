
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8711_priv {int regmap; } ;
struct snd_soc_component {int dummy; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_soc_component*) ;
 struct wm8711_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ) ;
 int FUNC_4 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_2,
 enum snd_soc_bias_level VAR_3)
{
 struct wm8711_priv *VAR_4 = FUNC_2(VAR_2);
 u16 VAR_5 = FUNC_3(VAR_2, VAR_1) & 0xff7f;

 switch (VAR_3) {
 case 130:
  FUNC_4(VAR_2, VAR_1, VAR_5);
  break;
 case 129:
  break;
 case 128:
  if (FUNC_1(VAR_2) == 131)
   FUNC_0(VAR_4->regmap);

  FUNC_4(VAR_2, VAR_1, VAR_5 | 0x0040);
  break;
 case 131:
  FUNC_4(VAR_2, VAR_0, 0x0);
  FUNC_4(VAR_2, VAR_1, 0xffff);
  break;
 }
 return 0;
}
