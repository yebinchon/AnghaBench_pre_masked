
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct mtk_base_afe {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ,int) ;
 struct mtk_base_afe* FUNC_1 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_7,
          int VAR_8,
          struct snd_soc_dai *VAR_9)
{
 struct mtk_base_afe *VAR_10 = FUNC_1(VAR_9);

 switch (VAR_8) {
 case 130:
 case 131:

  FUNC_0(VAR_10->regmap, VAR_0,
       VAR_1,
       0x1 << VAR_2);

  FUNC_0(VAR_10->regmap, VAR_3,
       VAR_5, 0x1 << VAR_6);
  break;
 case 129:
 case 128:

  FUNC_0(VAR_10->regmap, VAR_3,
       VAR_5, 0);

  FUNC_0(VAR_10->regmap, VAR_0,
       VAR_1,
       0);
  break;
 default:
  return -VAR_4;
 }

 return 0;
}
