
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int num_codecs; struct snd_soc_dai** codec_dais; int card; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct odroid_priv {unsigned int be_sample_rate; int lock; int sclk_i2s; int clk_i2s_bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned int) ;
 unsigned int FUNC_1 (struct snd_pcm_hw_params*) ;
 struct odroid_priv* FUNC_2 (int ) ;
 int FUNC_3 (struct snd_soc_dai*,int ,unsigned int,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_2,
          struct snd_pcm_hw_params *VAR_3)
{
 struct snd_soc_pcm_runtime *VAR_4 = VAR_2->private_data;
 struct odroid_priv *VAR_5 = FUNC_2(VAR_4->card);
 unsigned int VAR_6, VAR_7, VAR_8;
 unsigned long VAR_9;
 int VAR_10;

 switch (FUNC_1(VAR_3)) {
 case 64000:
  VAR_6 = 196608001U;
  VAR_8 = 384;
  break;
 case 44100:
 case 88200:
  VAR_6 = 180633609U;
  VAR_8 = 512;
  break;
 case 32000:
 case 48000:
 case 96000:
  VAR_6 = 196608001U;
  VAR_8 = 512;
  break;
 default:
  return -VAR_0;
 }

 VAR_10 = FUNC_0(VAR_5->clk_i2s_bus, VAR_6 / 2 + 1);
 if (VAR_10 < 0)
  return VAR_10;






 VAR_7 = FUNC_1(VAR_3) * VAR_8 + 2;

 VAR_10 = FUNC_0(VAR_5->sclk_i2s, VAR_7);
 if (VAR_10 < 0)
  return VAR_10;

 if (VAR_4->num_codecs > 1) {
  struct snd_soc_dai *VAR_11 = VAR_4->codec_dais[1];

  VAR_10 = FUNC_3(VAR_11, 0, VAR_7,
          VAR_1);
  if (VAR_10 < 0)
   return VAR_10;
 }

 FUNC_4(&VAR_5->lock, VAR_9);
 VAR_5->be_sample_rate = FUNC_1(VAR_3);
 FUNC_5(&VAR_5->lock, VAR_9);

 return 0;
}
