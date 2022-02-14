
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_widget {int dummy; } ;
struct snd_soc_dapm_context {TYPE_1__* card; } ;
struct TYPE_2__ {int dapm_mutex; } ;


 scalar_t__ FUNC_0 (struct snd_soc_dapm_widget*) ;
 int FUNC_1 (struct snd_soc_dapm_widget*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 struct snd_soc_dapm_widget* FUNC_4 (struct snd_soc_dapm_context*,struct snd_soc_dapm_widget const*) ;

int FUNC_5(struct snd_soc_dapm_context *VAR_1,
 const struct snd_soc_dapm_widget *VAR_2,
 int VAR_3)
{
 struct snd_soc_dapm_widget *VAR_4;
 int VAR_5;
 int VAR_6 = 0;

 FUNC_2(&VAR_1->card->dapm_mutex, VAR_0);
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_4 = FUNC_4(VAR_1, VAR_2);
  if (FUNC_0(VAR_4)) {
   VAR_6 = FUNC_1(VAR_4);
   break;
  }
  VAR_2++;
 }
 FUNC_3(&VAR_1->card->dapm_mutex);
 return VAR_6;
}
