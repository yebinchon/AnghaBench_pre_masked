
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int card; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct hdmi_audio_data {int dummy; } ;


 struct hdmi_audio_data* FUNC_0 (int ) ;

__attribute__((used)) static
struct hdmi_audio_data *FUNC_1(struct snd_pcm_substream *VAR_0)
{
 struct snd_soc_pcm_runtime *VAR_1 = VAR_0->private_data;

 return FUNC_0(VAR_1->card);
}
