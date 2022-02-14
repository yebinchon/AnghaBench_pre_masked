
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct fsl_asrc_pair* private_data; } ;
struct fsl_asrc_pair {scalar_t__ pos; } ;


 scalar_t__ FUNC_0 (struct snd_pcm_substream*) ;
 scalar_t__ FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct snd_pcm_substream *VAR_1 = VAR_0;
 struct snd_pcm_runtime *VAR_2 = VAR_1->runtime;
 struct fsl_asrc_pair *VAR_3 = VAR_2->private_data;

 VAR_3->pos += FUNC_1(VAR_1);
 if (VAR_3->pos >= FUNC_0(VAR_1))
  VAR_3->pos = 0;

 FUNC_2(VAR_1);
}
