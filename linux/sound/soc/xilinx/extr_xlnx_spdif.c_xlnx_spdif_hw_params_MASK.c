
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spdif_dev_data {scalar_t__ base; int aclk; } ;
struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct spdif_dev_data* FUNC_1 (int ) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_6,
    struct snd_pcm_hw_params *VAR_7,
    struct snd_soc_dai *VAR_8)
{
 u32 VAR_9, VAR_10, VAR_11;
 struct spdif_dev_data *VAR_12 = FUNC_1(VAR_8->dev);

 VAR_10 = FUNC_0(VAR_12->aclk, VAR_2 * VAR_0 *
        FUNC_2(VAR_7));

 switch (VAR_10) {
 case 4:
  VAR_11 = 0;
  break;
 case 8:
  VAR_11 = 1;
  break;
 case 16:
  VAR_11 = 2;
  break;
 case 24:
  VAR_11 = 3;
  break;
 case 32:
  VAR_11 = 4;
  break;
 case 48:
  VAR_11 = 5;
  break;
 case 64:
  VAR_11 = 6;
  break;
 default:
  return -VAR_1;
 }

 VAR_9 = FUNC_3(VAR_12->base + VAR_5);
 VAR_9 &= ~VAR_3;
 VAR_9 |= VAR_11 << VAR_4;
 FUNC_4(VAR_9, VAR_12->base + VAR_5);

 return 0;
}
