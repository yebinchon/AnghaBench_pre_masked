
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {scalar_t__ active; } ;
struct snd_pcm_substream {int dummy; } ;
struct bcm2835_i2s_dev {int i2s_regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bcm2835_i2s_dev*,struct snd_pcm_substream*,struct snd_soc_dai*) ;
 int FUNC_1 (struct bcm2835_i2s_dev*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 struct bcm2835_i2s_dev* FUNC_3 (struct snd_soc_dai*) ;

__attribute__((used)) static void FUNC_4(struct snd_pcm_substream *VAR_2,
  struct snd_soc_dai *VAR_3)
{
 struct bcm2835_i2s_dev *VAR_4 = FUNC_3(VAR_3);

 FUNC_0(VAR_4, VAR_2, VAR_3);


 if (VAR_3->active)
  return;


 FUNC_2(VAR_4->i2s_regmap, VAR_0,
   VAR_1, 0);





 FUNC_1(VAR_4);
}
