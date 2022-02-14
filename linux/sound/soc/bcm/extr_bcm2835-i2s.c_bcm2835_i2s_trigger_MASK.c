
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int stream; } ;
struct bcm2835_i2s_dev {int i2s_regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int FUNC_0 (struct bcm2835_i2s_dev*) ;
 int FUNC_1 (struct bcm2835_i2s_dev*,struct snd_pcm_substream*,struct snd_soc_dai*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 struct bcm2835_i2s_dev* FUNC_3 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_5, int VAR_6,
          struct snd_soc_dai *VAR_7)
{
 struct bcm2835_i2s_dev *VAR_8 = FUNC_3(VAR_7);
 uint32_t VAR_9;

 switch (VAR_6) {
 case 130:
 case 131:
 case 132:
  FUNC_0(VAR_8);

  if (VAR_5->stream == VAR_4)
   VAR_9 = VAR_1;
  else
   VAR_9 = VAR_2;

  FUNC_2(VAR_8->i2s_regmap,
    VAR_0, VAR_9, VAR_9);
  break;

 case 129:
 case 128:
 case 133:
  FUNC_1(VAR_8, VAR_5, VAR_7);
  break;
 default:
  return -VAR_3;
 }

 return 0;
}
