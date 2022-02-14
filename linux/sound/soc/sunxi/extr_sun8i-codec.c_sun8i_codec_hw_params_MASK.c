
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sun8i_codec {int regmap; } ;
struct snd_soc_dai {int component; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;


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
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (int ,int ,int ,int) ;
 struct sun8i_codec* FUNC_4 (int ) ;
 int FUNC_5 (struct sun8i_codec*,int ,int) ;
 int FUNC_6 (struct snd_pcm_hw_params*) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_12,
     struct snd_pcm_hw_params *VAR_13,
     struct snd_soc_dai *VAR_14)
{
 struct sun8i_codec *VAR_15 = FUNC_4(VAR_14->component);
 int VAR_16, VAR_17;
 u8 VAR_18;





 FUNC_3(VAR_15->regmap, VAR_0,
      VAR_6,
      VAR_5);

 VAR_18 = FUNC_5(VAR_15, FUNC_2(VAR_13), 16);
 FUNC_3(VAR_15->regmap, VAR_0,
      VAR_2,
      VAR_18 << VAR_1);

 VAR_17 = FUNC_7(FUNC_0(VAR_13),
         FUNC_1(VAR_13));
 if (VAR_17 < 0)
  return VAR_17;

 FUNC_3(VAR_15->regmap, VAR_0,
      VAR_4,
      VAR_17 << VAR_3);

 VAR_16 = FUNC_6(VAR_13);
 if (VAR_16 < 0)
  return VAR_16;

 FUNC_3(VAR_15->regmap, VAR_7,
      VAR_9,
      VAR_16 << VAR_8);
 FUNC_3(VAR_15->regmap, VAR_7,
      VAR_11,
      VAR_16 << VAR_10);

 return 0;
}
