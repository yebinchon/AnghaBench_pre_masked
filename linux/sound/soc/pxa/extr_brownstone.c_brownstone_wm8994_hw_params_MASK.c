
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {struct snd_soc_dai* cpu_dai; struct snd_soc_dai* codec_dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_soc_dai*,int ,int ,int,int) ;
 int FUNC_2 (struct snd_soc_dai*,int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_4,
           struct snd_pcm_hw_params *VAR_5)
{
 struct snd_soc_pcm_runtime *VAR_6 = VAR_4->private_data;
 struct snd_soc_dai *VAR_7 = VAR_6->codec_dai;
 struct snd_soc_dai *VAR_8 = VAR_6->cpu_dai;
 int VAR_9, VAR_10, VAR_11;

 if (FUNC_0(VAR_5) > 11025) {
  VAR_9 = FUNC_0(VAR_5) * 512;
  VAR_11 = FUNC_0(VAR_5) * 256;
  VAR_10 = FUNC_0(VAR_5) * 64;
 } else {
  VAR_9 = FUNC_0(VAR_5) * 1024;
  VAR_11 = FUNC_0(VAR_5) * 512;
  VAR_10 = FUNC_0(VAR_5) * 64;
 }

 FUNC_2(VAR_8, VAR_1, VAR_9, 0);
 FUNC_1(VAR_8, VAR_2, 0, VAR_9, VAR_11);
 FUNC_1(VAR_8, VAR_0, 0, VAR_9, VAR_10);


 FUNC_2(VAR_7, VAR_3, VAR_11, 0);

 return 0;
}
