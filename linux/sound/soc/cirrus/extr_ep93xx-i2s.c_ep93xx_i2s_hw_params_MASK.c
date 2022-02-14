
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int stream; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct ep93xx_i2s_info {int sclk; int lrclk; int mclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;



 int VAR_6 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (struct ep93xx_i2s_info*,int ) ;
 int FUNC_3 (struct ep93xx_i2s_info*,int ,unsigned int) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 unsigned int FUNC_5 (struct snd_pcm_hw_params*) ;
 struct ep93xx_i2s_info* FUNC_6 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_7,
    struct snd_pcm_hw_params *VAR_8,
    struct snd_soc_dai *VAR_9)
{
 struct ep93xx_i2s_info *VAR_10 = FUNC_6(VAR_9);
 unsigned VAR_11, VAR_12, VAR_13, VAR_14;
 int VAR_15;

 switch (FUNC_4(VAR_8)) {
 case 130:
  VAR_11 = VAR_3;
  break;

 case 129:
  VAR_11 = VAR_4;
  break;

 case 128:
  VAR_11 = VAR_5;
  break;

 default:
  return -VAR_0;
 }

 if (VAR_7->stream == VAR_6)
  FUNC_3(VAR_10, VAR_2, VAR_11);
 else
  FUNC_3(VAR_10, VAR_1, VAR_11);
 VAR_12 = FUNC_0(VAR_10->mclk) / FUNC_5(VAR_8);
 VAR_13 = 4;
 if (VAR_12 > (256 + 512) / 2) {
  VAR_14 = 128;
 } else {
  VAR_14 = 64;
  if (VAR_12 < (128 + 256) / 2)
   VAR_13 = 2;
 }

 VAR_15 = FUNC_1(VAR_10->sclk, FUNC_0(VAR_10->mclk) / VAR_13);
 if (VAR_15)
  return VAR_15;

 VAR_15 = FUNC_1(VAR_10->lrclk, FUNC_0(VAR_10->sclk) / VAR_14);
 if (VAR_15)
  return VAR_15;

 FUNC_2(VAR_10, VAR_7->stream);
 return 0;
}
