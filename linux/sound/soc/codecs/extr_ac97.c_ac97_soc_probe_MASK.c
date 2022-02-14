
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_component {TYPE_1__* card; } ;
struct snd_ac97_template {int dummy; } ;
struct snd_ac97_bus {int dummy; } ;
struct snd_ac97 {int dummy; } ;
struct TYPE_2__ {int snd_card; } ;


 int FUNC_0 (struct snd_ac97_template*,int ,int) ;
 int FUNC_1 (int ,int ,int ,int *,struct snd_ac97_bus**) ;
 int FUNC_2 (struct snd_ac97_bus*,struct snd_ac97_template*,struct snd_ac97**) ;
 int FUNC_3 (struct snd_soc_component*,struct snd_ac97*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_1)
{
 struct snd_ac97 *VAR_2;
 struct snd_ac97_bus *VAR_3;
 struct snd_ac97_template VAR_4;
 int VAR_5;


 VAR_5 = FUNC_1(VAR_1->card->snd_card, 0, VAR_0,
      ((void*)0), &VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_0(&VAR_4, 0, sizeof(struct snd_ac97_template));
 VAR_5 = FUNC_2(VAR_3, &VAR_4, &VAR_2);
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_3(VAR_1, VAR_2);

 return 0;
}
