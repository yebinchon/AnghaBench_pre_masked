
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* codec_dai; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_2__ {struct snd_soc_component* component; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int ,int ,unsigned int) ;
 int FUNC_3 (struct snd_soc_component*,int ,int ,unsigned int,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_8,
    struct snd_pcm_hw_params *VAR_9)
{
 struct snd_soc_pcm_runtime *VAR_10 = VAR_8->private_data;
 struct snd_soc_component *VAR_11 = VAR_10->codec_dai->component;
 unsigned int VAR_12;
 int VAR_13;

 switch (FUNC_1(VAR_9)) {
 case 8000:
 case 12000:
 case 16000:

  VAR_12 = 49152000U;
  break;
 case 11025:

  VAR_12 = 45158400U;
  break;
 default:
  FUNC_0(VAR_11->dev, "Not supported sample rate: %d\n",
   FUNC_1(VAR_9));
  return -VAR_3;
 }

 VAR_13 = FUNC_2(VAR_11, VAR_7,
        VAR_2,
        VAR_4,
        VAR_12);
 if (VAR_13 < 0) {
  FUNC_0(VAR_11->dev, "Failed to set FLL2 source: %d\n", VAR_13);
  return VAR_13;
 }

 VAR_13 = FUNC_2(VAR_11, VAR_6,
        VAR_2,
        VAR_4,
        VAR_12);
 if (VAR_13 < 0) {
  FUNC_0(VAR_11->dev, "Failed to start FLL2: %d\n", VAR_13);
  return VAR_13;
 }

 VAR_13 = FUNC_3(VAR_11, VAR_0,
           VAR_1,
           VAR_12,
           VAR_5);
 if (VAR_13 < 0) {
  FUNC_0(VAR_11->dev, "Failed to set ASYNCCLK source: %d\n", VAR_13);
  return VAR_13;
 }

 return 0;
}
