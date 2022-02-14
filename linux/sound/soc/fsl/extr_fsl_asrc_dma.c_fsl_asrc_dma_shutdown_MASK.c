
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct fsl_asrc_pair* private_data; } ;
struct fsl_asrc_pair {size_t index; struct fsl_asrc* asrc_priv; } ;
struct fsl_asrc {struct fsl_asrc_pair** pair; } ;


 int FUNC_0 (struct fsl_asrc_pair*) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_0)
{
 struct snd_pcm_runtime *VAR_1 = VAR_0->runtime;
 struct fsl_asrc_pair *VAR_2 = VAR_1->private_data;
 struct fsl_asrc *VAR_3;

 if (!VAR_2)
  return 0;

 VAR_3 = VAR_2->asrc_priv;

 if (VAR_3->pair[VAR_2->index] == VAR_2)
  VAR_3->pair[VAR_2->index] = ((void*)0);

 FUNC_0(VAR_2);

 return 0;
}
