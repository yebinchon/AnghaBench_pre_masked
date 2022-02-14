
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct arizona_priv {int dvfs_cached; int dvfs_lock; int dvfs_reqs; } ;




 int FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct arizona_priv* FUNC_4 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_5 (int ) ;

int FUNC_6(struct snd_soc_dapm_widget *VAR_0,
      struct snd_kcontrol *VAR_1, int VAR_2)
{
 struct snd_soc_component *VAR_3 = FUNC_5(VAR_0->dapm);
 struct arizona_priv *VAR_4 = FUNC_4(VAR_3);
 int VAR_5 = 0;

 FUNC_2(&VAR_4->dvfs_lock);

 switch (VAR_2) {
 case 129:
  if (VAR_4->dvfs_reqs)
   VAR_5 = FUNC_1(VAR_3);

  VAR_4->dvfs_cached = 0;
  break;
 case 128:




  VAR_4->dvfs_cached = 1;

  if (VAR_4->dvfs_reqs)
   VAR_5 = FUNC_0(VAR_3);
  break;
 default:
  break;
 }

 FUNC_3(&VAR_4->dvfs_lock);
 return VAR_5;
}
