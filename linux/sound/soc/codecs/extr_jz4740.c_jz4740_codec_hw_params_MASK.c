
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct snd_soc_dai {int component; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct jz4740_codec {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (int ,int ,int ,int) ;
 struct jz4740_codec* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_4,
 struct snd_pcm_hw_params *VAR_5, struct snd_soc_dai *VAR_6)
{
 struct jz4740_codec *VAR_7 = FUNC_2(VAR_6->component);
 uint32_t VAR_8;

 switch (FUNC_0(VAR_5)) {
 case 8000:
  VAR_8 = 0;
  break;
 case 11025:
  VAR_8 = 1;
  break;
 case 12000:
  VAR_8 = 2;
  break;
 case 16000:
  VAR_8 = 3;
  break;
 case 22050:
  VAR_8 = 4;
  break;
 case 24000:
  VAR_8 = 5;
  break;
 case 32000:
  VAR_8 = 6;
  break;
 case 44100:
  VAR_8 = 7;
  break;
 case 48000:
  VAR_8 = 8;
  break;
 default:
  return -VAR_0;
 }

 VAR_8 <<= VAR_2;

 FUNC_1(VAR_7->regmap, VAR_3,
    VAR_1, VAR_8);

 return 0;
}
