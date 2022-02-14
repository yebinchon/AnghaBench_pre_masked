
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlv320dac33_priv {int burst_bclkdiv; void* burst_rate; int fifo_size; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;


 void* FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 struct tlv320dac33_priv* FUNC_4 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_3,
      struct snd_pcm_hw_params *VAR_4,
      struct snd_soc_dai *VAR_5)
{
 struct snd_soc_component *VAR_6 = VAR_5->component;
 struct tlv320dac33_priv *VAR_7 = FUNC_4(VAR_6);


 switch (FUNC_2(VAR_4)) {
 case 44100:
 case 48000:
  break;
 default:
  FUNC_1(VAR_6->dev, "unsupported rate %d\n",
   FUNC_2(VAR_4));
  return -VAR_2;
 }

 switch (FUNC_3(VAR_4)) {
 case 16:
  VAR_7->fifo_size = VAR_0;
  VAR_7->burst_rate = FUNC_0(VAR_7->burst_bclkdiv, 32);
  break;
 case 32:
  VAR_7->fifo_size = VAR_1;
  VAR_7->burst_rate = FUNC_0(VAR_7->burst_bclkdiv, 64);
  break;
 default:
  FUNC_1(VAR_6->dev, "unsupported width %d\n",
   FUNC_3(VAR_4));
  return -VAR_2;
 }

 return 0;
}
