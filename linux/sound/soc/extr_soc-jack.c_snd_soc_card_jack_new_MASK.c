
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_jack_pin {int dummy; } ;
struct snd_soc_jack {int jack; int notifier; int jack_zones; int pins; struct snd_soc_card* card; int mutex; } ;
struct snd_soc_card {int snd_card; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char const*,int,int *,int,int) ;
 int FUNC_4 (struct snd_soc_jack*,unsigned int,struct snd_soc_jack_pin*) ;

int FUNC_5(struct snd_soc_card *VAR_0, const char *VAR_1, int VAR_2,
 struct snd_soc_jack *VAR_3, struct snd_soc_jack_pin *VAR_4,
 unsigned int VAR_5)
{
 int VAR_6;

 FUNC_2(&VAR_3->mutex);
 VAR_3->card = VAR_0;
 FUNC_1(&VAR_3->pins);
 FUNC_1(&VAR_3->jack_zones);
 FUNC_0(&VAR_3->notifier);

 VAR_6 = FUNC_3(VAR_0->snd_card, VAR_1, VAR_2, &VAR_3->jack, 0, 0);
 if (VAR_6)
  return VAR_6;

 if (VAR_5)
  return FUNC_4(VAR_3, VAR_5, VAR_4);

 return 0;
}
