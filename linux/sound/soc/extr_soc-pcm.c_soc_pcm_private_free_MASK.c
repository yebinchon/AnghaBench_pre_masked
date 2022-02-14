
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int delayed_work; } ;
struct snd_pcm {struct snd_soc_pcm_runtime* private_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_pcm*) ;

__attribute__((used)) static void FUNC_2(struct snd_pcm *VAR_0)
{
 struct snd_soc_pcm_runtime *VAR_1 = VAR_0->private_data;


 FUNC_0(&VAR_1->delayed_work);
 FUNC_1(VAR_0);
}
