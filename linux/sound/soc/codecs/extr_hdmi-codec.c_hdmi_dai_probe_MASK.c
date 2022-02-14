
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_dapm_route {char* sink; int source; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_dai {struct hdmi_codec_daifmt* playback_dma_data; int component; TYPE_2__* driver; } ;
struct hdmi_codec_daifmt {int dummy; } ;
struct TYPE_3__ {int stream_name; } ;
struct TYPE_4__ {TYPE_1__ playback; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hdmi_codec_daifmt* FUNC_0 (int,int ) ;
 struct snd_soc_dapm_context* FUNC_1 (int ) ;
 int FUNC_2 (struct snd_soc_dapm_context*,struct snd_soc_dapm_route*,int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_2)
{
 struct snd_soc_dapm_context *VAR_3;
 struct hdmi_codec_daifmt *VAR_4;
 struct snd_soc_dapm_route VAR_5 = {
  .sink = "TX",
  .source = VAR_2->driver->playback.stream_name,
 };
 int VAR_6;

 VAR_3 = FUNC_1(VAR_2->component);
 VAR_6 = FUNC_2(VAR_3, &VAR_5, 1);
 if (VAR_6)
  return VAR_6;

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_2->playback_dma_data = VAR_4;
 return 0;
}
