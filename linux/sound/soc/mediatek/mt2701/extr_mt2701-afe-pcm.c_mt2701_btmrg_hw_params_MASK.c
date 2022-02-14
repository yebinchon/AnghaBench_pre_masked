
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct mtk_base_afe {int regmap; int dev; } ;


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
 int VAR_11 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (int ,int ,int,int) ;
 struct mtk_base_afe* FUNC_3 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_12,
      struct snd_pcm_hw_params *VAR_13,
      struct snd_soc_dai *VAR_14)
{
 struct mtk_base_afe *VAR_15 = FUNC_3(VAR_14);
 int VAR_16;
 u32 VAR_17, VAR_18;

 VAR_16 = FUNC_1(VAR_13);

 if (VAR_16 != 8000 && VAR_16 != 16000) {
  FUNC_0(VAR_15->dev, "unsupported rate %d\n", VAR_16);
  return -VAR_11;
 }

 FUNC_2(VAR_15->regmap, VAR_6,
      VAR_8,
      VAR_7);

 VAR_17 = VAR_1 | VAR_2
       | VAR_5;
 VAR_18 = VAR_17;

 if (VAR_16 == 16000)
  VAR_17 |= VAR_3;

 VAR_18 |= VAR_3;

 FUNC_2(VAR_15->regmap, VAR_0, VAR_18, VAR_17);

 FUNC_2(VAR_15->regmap, VAR_0,
      VAR_4,
      VAR_4);
 FUNC_2(VAR_15->regmap, VAR_6,
      VAR_10,
      VAR_10);
 FUNC_2(VAR_15->regmap, VAR_6,
      VAR_9,
      VAR_9);
 return 0;
}
