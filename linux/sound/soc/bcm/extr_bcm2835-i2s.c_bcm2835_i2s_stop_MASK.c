
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct snd_soc_dai {int active; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct bcm2835_i2s_dev {int fmt; int i2s_regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bcm2835_i2s_dev*) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct bcm2835_i2s_dev *VAR_5,
  struct snd_pcm_substream *VAR_6,
  struct snd_soc_dai *VAR_7)
{
 uint32_t VAR_8;

 if (VAR_6->stream == VAR_3)
  VAR_8 = VAR_1;
 else
  VAR_8 = VAR_2;

 FUNC_1(VAR_5->i2s_regmap,
   VAR_0, VAR_8, 0);


 if (!VAR_7->active && !(VAR_5->fmt & VAR_4))
  FUNC_0(VAR_5);
}
