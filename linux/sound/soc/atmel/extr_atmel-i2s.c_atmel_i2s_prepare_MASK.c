
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct atmel_i2s_dev {int regmap; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 struct atmel_i2s_dev* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_4,
        struct snd_soc_dai *VAR_5)
{
 struct atmel_i2s_dev *VAR_6 = FUNC_2(VAR_5);
 bool VAR_7 = (VAR_4->stream == VAR_3);
 unsigned int VAR_8, VAR_9 = 0;

 if (VAR_7) {
  FUNC_1(VAR_6->regmap, VAR_1, &VAR_9);
  if (VAR_9 & VAR_2) {





   FUNC_0(VAR_6->dev, "RXRDY is set\n");
   FUNC_1(VAR_6->regmap, VAR_0, &VAR_8);
  }
 }

 return 0;
}
