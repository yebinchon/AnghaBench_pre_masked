
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_jack_zone {int list; } ;
struct snd_soc_jack {int jack_zones; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

int FUNC_2(struct snd_soc_jack *VAR_0, int VAR_1,
     struct snd_soc_jack_zone *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  FUNC_0(&VAR_2[VAR_3].list);
  FUNC_1(&(VAR_2[VAR_3].list), &VAR_0->jack_zones);
 }
 return 0;
}
