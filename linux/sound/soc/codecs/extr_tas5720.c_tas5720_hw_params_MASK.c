
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 unsigned int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_3,
        struct snd_pcm_hw_params *VAR_4,
        struct snd_soc_dai *VAR_5)
{
 struct snd_soc_component *VAR_6 = VAR_5->component;
 unsigned int VAR_7 = FUNC_1(VAR_4);
 bool VAR_8;
 int VAR_9;

 switch (VAR_7) {
 case 44100:
 case 48000:
  VAR_8 = 0;
  break;
 case 88200:
 case 96000:
  VAR_8 = 1;
  break;
 default:
  FUNC_0(VAR_6->dev, "unsupported sample rate: %u\n", VAR_7);
  return -VAR_0;
 }

 VAR_9 = FUNC_2(VAR_6, VAR_1,
      VAR_2, VAR_8);
 if (VAR_9 < 0) {
  FUNC_0(VAR_6->dev, "error setting sample rate: %d\n", VAR_9);
  return VAR_9;
 }

 return 0;
}
