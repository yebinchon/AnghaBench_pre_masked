
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct hdmi_audio_data {int current_stream_lock; struct snd_pcm_substream* current_stream; int dssdev; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* audio_shutdown ) (int ) ;} ;


 int FUNC_0 (int) ;
 struct hdmi_audio_data* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct snd_pcm_substream *VAR_0,
         struct snd_soc_dai *VAR_1)
{
 struct hdmi_audio_data *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_2->current_stream != VAR_0);

 VAR_2->ops->audio_shutdown(VAR_2->dssdev);

 FUNC_2(&VAR_2->current_stream_lock);
 VAR_2->current_stream = ((void*)0);
 FUNC_3(&VAR_2->current_stream_lock);
}
