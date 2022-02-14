
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct cx2072x_priv {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int) ;
 struct snd_soc_dapm_context* FUNC_1 (struct snd_soc_component*) ;
 struct cx2072x_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_4 (struct snd_soc_dapm_context*) ;
 int FUNC_5 (struct snd_soc_dapm_context*) ;

__attribute__((used)) static void FUNC_6(struct snd_soc_component *VAR_6)
{
 struct cx2072x_priv *VAR_7 = FUNC_2(VAR_6);
 struct snd_soc_dapm_context *VAR_8 = FUNC_1(VAR_6);


 FUNC_0(VAR_7->regmap, VAR_3, 0x1f);


 FUNC_0(VAR_7->regmap, VAR_5, 0x12 << 24);


 FUNC_0(VAR_7->regmap, VAR_4, 0x80);


 FUNC_0(VAR_7->regmap, VAR_2, 0x73);


 FUNC_0(VAR_7->regmap, VAR_0, 0x300);


 FUNC_0(VAR_7->regmap, VAR_1, 0);

 FUNC_4(VAR_8);

 FUNC_3(VAR_8, "PORTD");
 FUNC_3(VAR_8, "Headset Bias");
 FUNC_3(VAR_8, "PortD Mic Bias");

 FUNC_5(VAR_8);
}
