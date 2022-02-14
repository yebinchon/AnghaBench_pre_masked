
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct adav80x {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 struct snd_soc_dapm_context* FUNC_1 (struct snd_soc_component*) ;
 struct adav80x* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_dapm_context*,char*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_2)
{
 struct snd_soc_dapm_context *VAR_3 = FUNC_1(VAR_2);
 struct adav80x *VAR_4 = FUNC_2(VAR_2);


 FUNC_3(VAR_3, "PLL1");
 FUNC_3(VAR_3, "PLL2");


 FUNC_0(VAR_4->regmap, VAR_1, 0x20);

 FUNC_0(VAR_4->regmap, VAR_0, 0x6);

 return 0;
}
