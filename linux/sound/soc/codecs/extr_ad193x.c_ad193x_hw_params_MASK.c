
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct ad193x_priv {int sysclk; int regmap; } ;


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
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct ad193x_priv*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (int ,int ,int ,int) ;
 struct ad193x_priv* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_11,
  struct snd_pcm_hw_params *VAR_12,
  struct snd_soc_dai *VAR_13)
{
 int VAR_14 = 0, VAR_15 = 0;
 struct snd_soc_component *VAR_16 = VAR_13->component;
 struct ad193x_priv *VAR_17 = FUNC_3(VAR_16);


 switch (FUNC_1(VAR_12)) {
 case 16:
  VAR_14 = 3;
  break;
 case 20:
  VAR_14 = 1;
  break;
 case 24:
 case 32:
  VAR_14 = 0;
  break;
 }

 switch (VAR_17->sysclk) {
 case 12288000:
  VAR_15 = VAR_6;
  break;
 case 18432000:
  VAR_15 = VAR_7;
  break;
 case 24576000:
  VAR_15 = VAR_8;
  break;
 case 36864000:
  VAR_15 = VAR_9;
  break;
 }

 FUNC_2(VAR_17->regmap, VAR_5,
       VAR_10, VAR_15);

 FUNC_2(VAR_17->regmap, VAR_2,
       VAR_3,
       VAR_14 << VAR_4);

 if (FUNC_0(VAR_17))
  FUNC_2(VAR_17->regmap, VAR_0,
       VAR_1, VAR_14);

 return 0;
}
