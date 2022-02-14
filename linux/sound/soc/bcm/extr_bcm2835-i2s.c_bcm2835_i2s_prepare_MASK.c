
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct bcm2835_i2s_dev {int i2s_regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct bcm2835_i2s_dev*,int,int) ;
 int FUNC_1 (int ,int ,int*) ;
 struct bcm2835_i2s_dev* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_5,
  struct snd_soc_dai *VAR_6)
{
 struct bcm2835_i2s_dev *VAR_7 = FUNC_2(VAR_6);
 uint32_t VAR_8;







 FUNC_1(VAR_7->i2s_regmap, VAR_0, &VAR_8);

 if (VAR_5->stream == VAR_4
   && !(VAR_8 & VAR_2))
  FUNC_0(VAR_7, 1, 0);
 else if (VAR_5->stream == VAR_3
   && (VAR_8 & VAR_1))
  FUNC_0(VAR_7, 0, 1);

 return 0;
}
