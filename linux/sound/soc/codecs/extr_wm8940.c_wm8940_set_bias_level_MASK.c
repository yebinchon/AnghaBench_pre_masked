
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8940_priv {int regmap; } ;
struct snd_soc_component {int dev; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_soc_component*) ;
 struct wm8940_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ) ;
 int FUNC_5 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_2,
     enum snd_soc_bias_level VAR_3)
{
 struct wm8940_priv *VAR_4 = FUNC_3(VAR_2);
 u16 VAR_5;
 u16 VAR_6 = FUNC_4(VAR_2, VAR_1) & 0x1F0;
 int VAR_7 = 0;

 switch (VAR_3) {
 case 130:

  VAR_6 |= (1 << 2) | (1 << 3);

  VAR_5 = FUNC_4(VAR_2, VAR_0);
  VAR_7 = FUNC_5(VAR_2, VAR_0, VAR_5 | 0x2);
  if (VAR_7)
   break;

  VAR_7 = FUNC_5(VAR_2, VAR_1, VAR_6 | 0x1);
  break;
 case 129:

  VAR_6 |= (1 << 2) | (1 << 3);
  VAR_7 = FUNC_5(VAR_2, VAR_1, VAR_6 | 0x1);
  break;
 case 128:
  if (FUNC_2(VAR_2) == 131) {
   VAR_7 = FUNC_1(VAR_4->regmap);
   if (VAR_7 < 0) {
    FUNC_0(VAR_2->dev, "Failed to sync cache: %d\n", VAR_7);
    return VAR_7;
   }
  }


  VAR_6 |= (1 << 2) | (1 << 3);

  VAR_7 = FUNC_5(VAR_2, VAR_1, VAR_6 | 0x2);
  break;
 case 131:
  VAR_7 = FUNC_5(VAR_2, VAR_1, VAR_6);
  break;
 }

 return VAR_7;
}
