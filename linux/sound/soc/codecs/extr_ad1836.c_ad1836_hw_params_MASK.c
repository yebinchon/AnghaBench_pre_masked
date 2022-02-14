
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int component; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct ad1836_priv {int regmap; } ;


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
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (int ,int ,int ,int) ;
 struct ad1836_priv* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_10,
  struct snd_pcm_hw_params *VAR_11,
  struct snd_soc_dai *VAR_12)
{
 struct ad1836_priv *VAR_13 = FUNC_2(VAR_12->component);
 int VAR_14 = 0;


 switch (FUNC_0(VAR_11)) {
 case 16:
  VAR_14 = VAR_6;
  break;
 case 20:
  VAR_14 = VAR_7;
  break;
 case 24:
 case 32:
  VAR_14 = VAR_8;
  break;
 default:
  return -VAR_9;
 }

 FUNC_1(VAR_13->regmap, VAR_3,
  VAR_4,
  VAR_14 << VAR_5);

 FUNC_1(VAR_13->regmap, VAR_0,
  VAR_1,
  VAR_14 << VAR_2);

 return 0;
}
