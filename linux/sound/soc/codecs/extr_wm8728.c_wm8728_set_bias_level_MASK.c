
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8728_priv {int regmap; } ;
struct snd_soc_component {int dummy; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;






 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_soc_component*) ;
 struct wm8728_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ) ;
 int FUNC_4 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_1,
     enum snd_soc_bias_level VAR_2)
{
 struct wm8728_priv *VAR_3 = FUNC_2(VAR_1);
 u16 VAR_4;

 switch (VAR_2) {
 case 130:
 case 129:
 case 128:
  if (FUNC_1(VAR_1) == 131) {

   VAR_4 = FUNC_3(VAR_1, VAR_0);
   FUNC_4(VAR_1, VAR_0, VAR_4 & ~0x4);


   FUNC_0(VAR_3->regmap);
  }
  break;

 case 131:
  VAR_4 = FUNC_3(VAR_1, VAR_0);
  FUNC_4(VAR_1, VAR_0, VAR_4 | 0x4);
  break;
 }
 return 0;
}
