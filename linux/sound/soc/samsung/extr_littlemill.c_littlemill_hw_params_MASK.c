
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {struct snd_soc_dai* codec_dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (char*,int) ;
 int VAR_4 ;
 int FUNC_2 (struct snd_soc_dai*,int ,int ,int,int) ;
 int FUNC_3 (struct snd_soc_dai*,int ,int,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_5,
    struct snd_pcm_hw_params *VAR_6)
{
 struct snd_soc_pcm_runtime *VAR_7 = VAR_5->private_data;
 struct snd_soc_dai *VAR_8 = VAR_7->codec_dai;
 int VAR_9;

 VAR_4 = FUNC_0(VAR_6);

 VAR_9 = FUNC_2(VAR_8, VAR_1,
      VAR_2, 32768,
      VAR_4 * 512);
 if (VAR_9 < 0) {
  FUNC_1("Failed to start FLL: %d\n", VAR_9);
  return VAR_9;
 }

 VAR_9 = FUNC_3(VAR_8,
         VAR_3,
         VAR_4 * 512,
         VAR_0);
 if (VAR_9 < 0) {
  FUNC_1("Failed to set SYSCLK: %d\n", VAR_9);
  return VAR_9;
 }

 return 0;
}
