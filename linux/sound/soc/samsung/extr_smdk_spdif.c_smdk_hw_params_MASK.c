
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {struct snd_soc_dai* cpu_dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (struct snd_soc_dai*,int ,unsigned long,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_3,
  struct snd_pcm_hw_params *VAR_4)
{
 struct snd_soc_pcm_runtime *VAR_5 = VAR_3->private_data;
 struct snd_soc_dai *VAR_6 = VAR_5->cpu_dai;
 unsigned long VAR_7, VAR_8;
 int VAR_9, VAR_10;

 switch (FUNC_0(VAR_4)) {
 case 44100:
  VAR_7 = 45158400;
  break;
 case 32000:
 case 48000:
 case 96000:
  VAR_7 = 49152000;
  break;
 default:
  return -VAR_0;
 }




 VAR_10 = 512;
 VAR_8 = FUNC_0(VAR_4) * VAR_10;


 VAR_9 = FUNC_1(VAR_7, VAR_8);
 if (VAR_9 < 0)
  return VAR_9;


 VAR_9 = FUNC_2(VAR_6, VAR_2,
     VAR_8, VAR_1);
 if (VAR_9 < 0)
  return VAR_9;

 return VAR_9;
}
