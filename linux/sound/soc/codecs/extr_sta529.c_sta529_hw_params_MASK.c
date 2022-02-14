
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_soc_component*,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_9,
  struct snd_pcm_hw_params *VAR_10,
  struct snd_soc_dai *VAR_11)
{
 struct snd_soc_component *VAR_12 = VAR_11->component;
 int VAR_13, VAR_14, VAR_15;
 int VAR_16;

 switch (FUNC_2(VAR_10)) {
 case 16:
  VAR_13 = 1;
  VAR_16 = 0;
  break;
 case 24:
  VAR_13 = 2;
  VAR_16 = 1;
  break;
 case 32:
  VAR_13 = 3;
  VAR_16 = 2;
  break;
 default:
  FUNC_0(VAR_12->dev, "Unsupported format\n");
  return -VAR_2;
 }

 switch (FUNC_1(VAR_10)) {
 case 8000:
 case 11025:
  VAR_14 = 0;
  VAR_15 = 2;
  break;
 case 16000:
 case 22050:
  VAR_14 = 1;
  VAR_15 = 0;
  break;

 case 32000:
 case 44100:
 case 48000:
  VAR_14 = 2;
  VAR_15 = 0;
  break;
 default:
  FUNC_0(VAR_12->dev, "Unsupported rate\n");
  return -VAR_2;
 }

 if (VAR_9->stream == VAR_5) {
  FUNC_3(VAR_12, VAR_8, VAR_3,
    VAR_13 << 6);
  FUNC_3(VAR_12, VAR_8, VAR_0,
    VAR_16 << 4);
  FUNC_3(VAR_12, VAR_6, VAR_4,
    VAR_14 << 4);
 } else {
  FUNC_3(VAR_12, VAR_7, VAR_3,
    VAR_13 << 6);
  FUNC_3(VAR_12, VAR_7, VAR_0,
    VAR_16 << 4);
  FUNC_3(VAR_12, VAR_6, VAR_1,
    VAR_15 << 2);
 }

 return 0;
}
