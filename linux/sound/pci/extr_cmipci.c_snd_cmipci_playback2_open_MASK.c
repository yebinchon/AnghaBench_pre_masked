
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_2__ {int channels_max; int rates; int rate_max; } ;
struct snd_pcm_runtime {TYPE_1__ hw; } ;
struct cmipci {int max_channels; int chip_version; int open_mutex; scalar_t__ can_multi_ch; int * opened; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cmipci*,int ,struct snd_pcm_substream*) ;
 TYPE_1__ VAR_12 ;
 int FUNC_3 (struct snd_pcm_runtime*,int ,int ,int *) ;
 int FUNC_4 (struct snd_pcm_runtime*,int ,int ,int) ;
 struct cmipci* FUNC_5 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_13)
{
 struct cmipci *VAR_14 = FUNC_5(VAR_13);
 struct snd_pcm_runtime *VAR_15 = VAR_13->runtime;
 int VAR_16;

 if ((VAR_16 = FUNC_2(VAR_14, VAR_1, VAR_13)) < 0)
  return VAR_16;
 VAR_15->hw = VAR_12;
 FUNC_0(&VAR_14->open_mutex);
 if (! VAR_14->opened[VAR_0]) {
  if (VAR_14->can_multi_ch) {
   VAR_15->hw.channels_max = VAR_14->max_channels;
   if (VAR_14->max_channels == 4)
    FUNC_3(VAR_15, 0, VAR_3, &VAR_8);
   else if (VAR_14->max_channels == 6)
    FUNC_3(VAR_15, 0, VAR_3, &VAR_9);
   else if (VAR_14->max_channels == 8)
    FUNC_3(VAR_15, 0, VAR_3, &VAR_10);
  }
 }
 FUNC_1(&VAR_14->open_mutex);
 if (VAR_14->chip_version == 68) {
  VAR_15->hw.rates |= VAR_5 |
         VAR_6;
  VAR_15->hw.rate_max = 96000;
 } else if (VAR_14->chip_version == 55) {
  VAR_16 = FUNC_3(VAR_15, 0,
   VAR_4, &VAR_11);
  if (VAR_16 < 0)
   return VAR_16;
  VAR_15->hw.rates |= VAR_7;
  VAR_15->hw.rate_max = 128000;
 }
 FUNC_4(VAR_15, VAR_2, 0, 0x10000);
 return 0;
}
