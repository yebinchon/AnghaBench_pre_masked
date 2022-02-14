
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_jack_kctl {int dummy; } ;
struct snd_jack {int card; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_jack*,struct snd_jack_kctl*) ;
 struct snd_jack_kctl* FUNC_1 (int ,char const*,int) ;

int FUNC_2(struct snd_jack *VAR_1, const char * VAR_2, int VAR_3)
{
 struct snd_jack_kctl *VAR_4;

 VAR_4 = FUNC_1(VAR_1->card, VAR_2, VAR_3);
 if (!VAR_4)
  return -VAR_0;

 FUNC_0(VAR_1, VAR_4);
 return 0;
}
