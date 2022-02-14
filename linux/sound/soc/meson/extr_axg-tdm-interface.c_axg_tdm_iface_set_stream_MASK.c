
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct axg_tdm_stream {void* channels; void* width; int physical_width; int mask; } ;
struct axg_tdm_iface {unsigned int slot_width; int rate; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 void* FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 void* FUNC_5 (struct snd_pcm_hw_params*) ;
 struct axg_tdm_stream* FUNC_6 (struct snd_soc_dai*,struct snd_pcm_substream*) ;
 struct axg_tdm_iface* FUNC_7 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_1,
        struct snd_pcm_hw_params *VAR_2,
        struct snd_soc_dai *VAR_3)
{
 struct axg_tdm_iface *VAR_4 = FUNC_7(VAR_3);
 struct axg_tdm_stream *VAR_5 = FUNC_6(VAR_3, VAR_1);
 unsigned int VAR_6 = FUNC_2(VAR_2);
 unsigned int VAR_7 = FUNC_5(VAR_2);


 VAR_4->rate = FUNC_4(VAR_2);


 if (FUNC_0(VAR_5->mask) < VAR_6) {
  FUNC_1(VAR_3->dev, "not enough slots for channels\n");
  return -VAR_0;
 }

 if (VAR_4->slot_width < VAR_7) {
  FUNC_1(VAR_3->dev, "incompatible slots width for stream\n");
  return -VAR_0;
 }


 VAR_5->physical_width = FUNC_3(VAR_2);
 VAR_5->width = FUNC_5(VAR_2);
 VAR_5->channels = FUNC_2(VAR_2);

 return 0;
}
