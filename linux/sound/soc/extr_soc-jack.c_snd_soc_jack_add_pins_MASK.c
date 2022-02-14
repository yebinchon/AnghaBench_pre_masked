
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_jack_pin {int mask; int pin; int list; } ;
struct snd_soc_jack {int jack; int pins; TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct snd_soc_jack*,int ,int ) ;

int FUNC_5(struct snd_soc_jack *VAR_1, int VAR_2,
     struct snd_soc_jack_pin *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if (!VAR_3[VAR_4].pin) {
   FUNC_1(VAR_1->card->dev, "ASoC: No name for pin %d\n",
    VAR_4);
   return -VAR_0;
  }
  if (!VAR_3[VAR_4].mask) {
   FUNC_1(VAR_1->card->dev, "ASoC: No mask for pin %d"
    " (%s)\n", VAR_4, VAR_3[VAR_4].pin);
   return -VAR_0;
  }

  FUNC_0(&VAR_3[VAR_4].list);
  FUNC_2(&(VAR_3[VAR_4].list), &VAR_1->pins);
  FUNC_3(VAR_1->jack, VAR_3[VAR_4].pin, VAR_3[VAR_4].mask);
 }





 FUNC_4(VAR_1, 0, 0);

 return 0;
}
