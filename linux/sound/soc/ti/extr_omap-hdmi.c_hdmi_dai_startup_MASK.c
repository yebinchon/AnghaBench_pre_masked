
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {int runtime; } ;
struct hdmi_audio_data {int current_stream_lock; struct snd_pcm_substream* current_stream; int dssdev; TYPE_1__* ops; int dma_data; } ;
struct TYPE_2__ {int (* audio_startup ) (int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct hdmi_audio_data* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ,int) ;
 int FUNC_5 (struct snd_soc_dai*,struct snd_pcm_substream*,int *) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_3,
       struct snd_soc_dai *VAR_4)
{
 struct hdmi_audio_data *VAR_5 = FUNC_0(VAR_3);
 int VAR_6;




 VAR_6 = FUNC_4(VAR_3->runtime, 0,
      VAR_1, 128);
 if (VAR_6 < 0) {
  FUNC_1(VAR_4->dev, "Could not apply period constraint: %d\n",
   VAR_6);
  return VAR_6;
 }
 VAR_6 = FUNC_4(VAR_3->runtime, 0,
      VAR_0, 128);
 if (VAR_6 < 0) {
  FUNC_1(VAR_4->dev, "Could not apply buffer constraint: %d\n",
   VAR_6);
  return VAR_6;
 }

 FUNC_5(VAR_4, VAR_3, &VAR_5->dma_data);

 FUNC_2(&VAR_5->current_stream_lock);
 VAR_5->current_stream = VAR_3;
 FUNC_3(&VAR_5->current_stream_lock);

 VAR_6 = VAR_5->ops->audio_startup(VAR_5->dssdev, VAR_2);

 if (VAR_6) {
  FUNC_2(&VAR_5->current_stream_lock);
  VAR_5->current_stream = ((void*)0);
  FUNC_3(&VAR_5->current_stream_lock);
 }

 return VAR_6;
}
