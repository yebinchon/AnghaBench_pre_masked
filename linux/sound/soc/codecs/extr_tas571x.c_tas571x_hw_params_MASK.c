
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tas571x_private {int format; int regmap; } ;
struct snd_soc_dai {int component; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (int ,int ,int ,int) ;
 struct tas571x_private* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_4,
        struct snd_pcm_hw_params *VAR_5,
        struct snd_soc_dai *VAR_6)
{
 struct tas571x_private *VAR_7 = FUNC_2(VAR_6->component);
 u32 VAR_8;

 switch (VAR_7->format & VAR_1) {
 case 128:
  VAR_8 = 0x00;
  break;
 case 130:
  VAR_8 = 0x03;
  break;
 case 129:
  VAR_8 = 0x06;
  break;
 default:
  return -VAR_0;
 }

 if (FUNC_0(VAR_5) >= 24)
  VAR_8 += 2;
 else if (FUNC_0(VAR_5) >= 20)
  VAR_8 += 1;

 return FUNC_1(VAR_7->regmap, VAR_3,
      VAR_2, VAR_8);
}
