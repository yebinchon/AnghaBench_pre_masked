
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {int num_codecs; int dev; struct snd_soc_dai** codec_dais; } ;
struct snd_soc_dai {TYPE_1__* component; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_soc_dai*,int,int,int,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_4,
 struct snd_pcm_hw_params *VAR_5)
{
 struct snd_soc_pcm_runtime *VAR_6 = VAR_4->private_data;
 int VAR_7 = 0, VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_6->num_codecs; VAR_8++) {
  struct snd_soc_dai *VAR_9 = VAR_6->codec_dais[VAR_8];

  if (!FUNC_2(VAR_9->component->name, VAR_2)) {
   VAR_7 = FUNC_1(VAR_9, 0x30, 3, 8, 16);
   if (VAR_7 < 0) {
    FUNC_0(VAR_6->dev, "DEV0 TDM slot err:%d\n", VAR_7);
    return VAR_7;
   }
  }
  if (!FUNC_2(VAR_9->component->name, VAR_3)) {
   VAR_7 = FUNC_1(VAR_9, 0xC0, 3, 8, 16);
   if (VAR_7 < 0) {
    FUNC_0(VAR_6->dev, "DEV1 TDM slot err:%d\n", VAR_7);
    return VAR_7;
   }
  }
  if (!FUNC_2(VAR_9->component->name, VAR_0)) {
   VAR_7 = FUNC_1(VAR_9,
       0x03, 3, 8, 24);
   if (VAR_7 < 0) {
    FUNC_0(VAR_6->dev,
      "DEV0 TDM slot err:%d\n", VAR_7);
    return VAR_7;
   }
  }
  if (!FUNC_2(VAR_9->component->name, VAR_1)) {
   VAR_7 = FUNC_1(VAR_9,
       0x0C, 3, 8, 24);
   if (VAR_7 < 0) {
    FUNC_0(VAR_6->dev,
      "DEV0 TDM slot err:%d\n", VAR_7);
    return VAR_7;
   }
  }
 }

 return 0;
}
