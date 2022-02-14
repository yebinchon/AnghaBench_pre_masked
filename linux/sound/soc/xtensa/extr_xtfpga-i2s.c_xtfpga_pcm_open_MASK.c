
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int cpu_dai; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {void* private_data; } ;


 void* FUNC_0 (int ,struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_substream*,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1)
{
 struct snd_pcm_runtime *VAR_2 = VAR_1->runtime;
 struct snd_soc_pcm_runtime *VAR_3 = VAR_1->private_data;
 void *VAR_4;

 FUNC_1(VAR_1, &VAR_0);
 VAR_4 = FUNC_0(VAR_3->cpu_dai, VAR_1);
 VAR_2->private_data = VAR_4;

 return 0;
}
