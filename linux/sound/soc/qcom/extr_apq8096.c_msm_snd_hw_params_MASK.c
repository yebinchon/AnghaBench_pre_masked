
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct snd_soc_pcm_runtime {struct snd_soc_dai* cpu_dai; struct snd_soc_dai* codec_dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct snd_soc_dai*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (struct snd_soc_dai*,scalar_t__,scalar_t__*,scalar_t__,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_4,
        struct snd_pcm_hw_params *VAR_5)
{
 struct snd_soc_pcm_runtime *VAR_6 = VAR_4->private_data;
 struct snd_soc_dai *VAR_7 = VAR_6->codec_dai;
 struct snd_soc_dai *VAR_8 = VAR_6->cpu_dai;
 u32 VAR_9[VAR_1], VAR_10[VAR_2];
 u32 VAR_11 = 0, VAR_12 = 0;
 int VAR_13 = 0;

 VAR_13 = FUNC_1(VAR_7,
    &VAR_12, VAR_10, &VAR_11, VAR_9);
 if (VAR_13 != 0 && VAR_13 != -VAR_0) {
  FUNC_0("failed to get codec chan map, err:%d\n", VAR_13);
  goto end;
 } else if (VAR_13 == -VAR_0) {
  return 0;
 }

 if (VAR_4->stream == VAR_3)
  VAR_13 = FUNC_2(VAR_8, 0, ((void*)0),
        VAR_11, VAR_9);
 else
  VAR_13 = FUNC_2(VAR_8, VAR_12, VAR_10,
        0, ((void*)0));
 if (VAR_13 != 0 && VAR_13 != -VAR_0)
  FUNC_0("Failed to set cpu chan map, err:%d\n", VAR_13);
 else if (VAR_13 == -VAR_0)
  VAR_13 = 0;
end:
 return VAR_13;
}
