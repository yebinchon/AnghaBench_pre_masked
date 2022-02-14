
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {struct snd_soc_dai* cpu_dai; } ;
struct snd_soc_dai {int id; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_2)
{
 struct snd_soc_pcm_runtime *VAR_3 = VAR_2->private_data;
 struct snd_soc_dai *VAR_4 = VAR_3->cpu_dai;

 FUNC_1(&VAR_0);
 FUNC_0(VAR_4->id, &VAR_1);
 FUNC_2(&VAR_0);

 return 0;
}
