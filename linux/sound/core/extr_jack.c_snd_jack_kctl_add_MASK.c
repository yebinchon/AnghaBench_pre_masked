
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_jack_kctl {int list; } ;
struct snd_jack {int kctl_list; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct snd_jack *VAR_0, struct snd_jack_kctl *VAR_1)
{
 FUNC_0(&VAR_1->list, &VAR_0->kctl_list);
}
