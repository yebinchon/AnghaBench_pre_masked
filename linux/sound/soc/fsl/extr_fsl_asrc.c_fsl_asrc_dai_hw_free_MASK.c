
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct fsl_asrc_pair* private_data; } ;
struct fsl_asrc_pair {int dummy; } ;


 int FUNC_0 (struct fsl_asrc_pair*) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_0,
    struct snd_soc_dai *VAR_1)
{
 struct snd_pcm_runtime *VAR_2 = VAR_0->runtime;
 struct fsl_asrc_pair *VAR_3 = VAR_2->private_data;

 if (VAR_3)
  FUNC_0(VAR_3);

 return 0;
}
