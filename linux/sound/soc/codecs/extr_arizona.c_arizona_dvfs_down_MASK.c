
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct arizona_priv {unsigned int dvfs_reqs; int dvfs_lock; int dvfs_cached; } ;


 int FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct arizona_priv* FUNC_3 (struct snd_soc_component*) ;

int FUNC_4(struct snd_soc_component *VAR_0, unsigned int VAR_1)
{
 struct arizona_priv *VAR_2 = FUNC_3(VAR_0);
 unsigned int VAR_3;
 int VAR_4 = 0;

 FUNC_1(&VAR_2->dvfs_lock);

 VAR_3 = VAR_2->dvfs_reqs;
 VAR_2->dvfs_reqs &= ~VAR_1;

 if (!VAR_2->dvfs_cached && VAR_3 && !VAR_2->dvfs_reqs)
  VAR_4 = FUNC_0(VAR_0);

 FUNC_2(&VAR_2->dvfs_lock);
 return VAR_4;
}
