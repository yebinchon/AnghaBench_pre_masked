
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int component; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct rk3328_codec_priv {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;




 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (int ,int ,int,unsigned int) ;
 struct rk3328_codec_priv* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_12,
       struct snd_pcm_hw_params *VAR_13,
       struct snd_soc_dai *VAR_14)
{
 struct rk3328_codec_priv *VAR_15 =
  FUNC_2(VAR_14->component);
 unsigned int VAR_16 = 0;

 switch (FUNC_0(VAR_13)) {
 case 131:
  VAR_16 = VAR_4;
  break;
 case 130:
  VAR_16 = VAR_5;
  break;
 case 129:
  VAR_16 = VAR_6;
  break;
 case 128:
  VAR_16 = VAR_7;
  break;
 default:
  return -VAR_11;
 }
 FUNC_1(VAR_15->regmap, VAR_0, VAR_8, VAR_16);

 VAR_16 = VAR_9 | VAR_2;
 FUNC_1(VAR_15->regmap, VAR_1,
      VAR_10 | VAR_3, VAR_16);

 return 0;
}
