
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct ad193x_priv {unsigned int sysclk; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ,int) ;
 struct snd_soc_dapm_context* FUNC_1 (struct snd_soc_component*) ;
 struct ad193x_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_dapm_context*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_7,
  int VAR_8, unsigned int VAR_9, int VAR_10)
{
 struct snd_soc_component *VAR_11 = VAR_7->component;
 struct snd_soc_dapm_context *VAR_12 = FUNC_1(VAR_11);
 struct ad193x_priv *VAR_13 = FUNC_2(VAR_11);

 if (VAR_8 == VAR_4) {

  if (VAR_10 == VAR_6 || VAR_9 != 24576000)
   return -VAR_5;

  FUNC_0(VAR_13->regmap, VAR_0,
       VAR_3,
       VAR_2 |
       VAR_1);

  FUNC_3(VAR_12);
  return 0;
 }
 switch (VAR_9) {
 case 12288000:
 case 18432000:
 case 24576000:
 case 36864000:
  VAR_13->sysclk = VAR_9;
  return 0;
 }
 return -VAR_5;
}
