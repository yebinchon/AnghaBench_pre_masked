
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_route {char* control; int sink; int source; } ;
struct snd_soc_dapm_context {TYPE_1__* card; int dev; } ;
struct TYPE_2__ {int dapm_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,char*,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct snd_soc_dapm_context*,struct snd_soc_dapm_route const*) ;

int FUNC_4(struct snd_soc_dapm_context *VAR_1,
       const struct snd_soc_dapm_route *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5, VAR_6 = 0;

 FUNC_1(&VAR_1->card->dapm_mutex, VAR_0);
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_5 = FUNC_3(VAR_1, VAR_2);
  if (VAR_5 < 0) {
   FUNC_0(VAR_1->dev, "ASoC: Failed to add route %s -> %s -> %s\n",
    VAR_2->source,
    VAR_2->control ? VAR_2->control : "direct",
    VAR_2->sink);
   VAR_6 = VAR_5;
  }
  VAR_2++;
 }
 FUNC_2(&VAR_1->card->dapm_mutex);

 return VAR_6;
}
