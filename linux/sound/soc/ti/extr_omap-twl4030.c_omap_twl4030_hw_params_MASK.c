
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_soc_pcm_runtime*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_6,
 struct snd_pcm_hw_params *VAR_7)
{
 struct snd_soc_pcm_runtime *VAR_8 = VAR_6->private_data;
 unsigned int VAR_9;

 switch (FUNC_0(VAR_7)) {
 case 2:
  VAR_9 = VAR_3 |
   VAR_5 |
   VAR_1;
  break;
 case 4:
  VAR_9 = VAR_2 |
   VAR_4 |
   VAR_1;
  break;
 default:
  return -VAR_0;
 }

 return FUNC_1(VAR_8, VAR_9);
}
