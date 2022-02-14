
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct ak4641_priv {int sysclk; int playback_fs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 struct ak4641_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_3,
     struct snd_pcm_hw_params *VAR_4,
     struct snd_soc_dai *VAR_5)
{
 struct snd_soc_component *VAR_6 = VAR_5->component;
 struct ak4641_priv *VAR_7 = FUNC_3(VAR_6);
 int VAR_8 = FUNC_2(VAR_4), VAR_9 = 256;
 u8 VAR_10;

 if (VAR_8)
  VAR_9 = VAR_7->sysclk / VAR_8;
 else
  return -VAR_1;


 switch (VAR_9) {
 case 1024:
  VAR_10 = (0x2 << 5);
  break;
 case 512:
  VAR_10 = (0x1 << 5);
  break;
 case 256:
  VAR_10 = (0x0 << 5);
  break;
 default:
  FUNC_1(VAR_6->dev, "Error: unsupported fs=%d\n", VAR_9);
  return -VAR_1;
 }

 FUNC_4(VAR_6, VAR_0, (0x3 << 5), VAR_10);


 if (VAR_3->stream == VAR_2) {
  VAR_7->playback_fs = VAR_8;
  FUNC_0(VAR_6);
 }

 return 0;
}
