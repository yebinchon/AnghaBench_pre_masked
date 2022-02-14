
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int link_list; struct snd_pcm_group* group; } ;
struct snd_pcm_group {int substreams; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct snd_pcm_substream *VAR_0,
     struct snd_pcm_group *VAR_1)
{
 VAR_0->group = VAR_1;
 FUNC_0(&VAR_0->link_list, &VAR_1->substreams);
}
