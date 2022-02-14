
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct fsl_asrc_pair* private_data; } ;
struct fsl_asrc_pair {int dummy; } ;


 int VAR_0 ;






 int FUNC_0 (struct fsl_asrc_pair*) ;
 int FUNC_1 (struct fsl_asrc_pair*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1, int VAR_2,
    struct snd_soc_dai *VAR_3)
{
 struct snd_pcm_runtime *VAR_4 = VAR_1->runtime;
 struct fsl_asrc_pair *VAR_5 = VAR_4->private_data;

 switch (VAR_2) {
 case 130:
 case 131:
 case 132:
  FUNC_0(VAR_5);
  break;
 case 129:
 case 128:
 case 133:
  FUNC_1(VAR_5);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
