
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct hdmi_audio_data {int dssdev; TYPE_1__* ops; struct snd_pcm_substream* current_stream; } ;
struct TYPE_2__ {int (* audio_start ) (int ) ;int (* audio_stop ) (int ) ;} ;


 int VAR_0 ;






 int FUNC_0 (int) ;
 struct hdmi_audio_data* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_1, int VAR_2,
       struct snd_soc_dai *VAR_3)
{
 struct hdmi_audio_data *VAR_4 = FUNC_1(VAR_1);
 int VAR_5 = 0;

 FUNC_0(VAR_4->current_stream != VAR_1);

 switch (VAR_2) {
 case 130:
 case 131:
 case 132:
  VAR_5 = VAR_4->ops->audio_start(VAR_4->dssdev);
  break;
 case 129:
 case 128:
 case 133:
  VAR_4->ops->audio_stop(VAR_4->dssdev);
  break;
 default:
  VAR_5 = -VAR_0;
 }
 return VAR_5;
}
