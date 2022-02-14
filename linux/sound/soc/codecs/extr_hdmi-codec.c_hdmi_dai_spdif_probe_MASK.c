
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct hdmi_codec_daifmt* playback_dma_data; } ;
struct hdmi_codec_daifmt {int fmt; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_1)
{
 struct hdmi_codec_daifmt *VAR_2 = VAR_1->playback_dma_data;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_2 = VAR_1->playback_dma_data;
 VAR_2->fmt = VAR_0;

 return 0;
}
