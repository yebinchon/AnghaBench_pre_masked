
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_enum {int dummy; } ;
struct snd_soc_dapm_update {int dummy; } ;
struct snd_soc_dapm_context {struct snd_soc_card* card; } ;
struct snd_soc_card {int dapm_mutex; struct snd_soc_dapm_update* update; } ;
struct snd_kcontrol {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_soc_card*,struct snd_kcontrol*,int,struct soc_enum*) ;
 int FUNC_3 (struct snd_soc_card*) ;

int FUNC_4(struct snd_soc_dapm_context *VAR_1,
 struct snd_kcontrol *VAR_2, int VAR_3, struct soc_enum *VAR_4,
 struct snd_soc_dapm_update *VAR_5)
{
 struct snd_soc_card *VAR_6 = VAR_1->card;
 int VAR_7;

 FUNC_0(&VAR_6->dapm_mutex, VAR_0);
 VAR_6->update = VAR_5;
 VAR_7 = FUNC_2(VAR_6, VAR_2, VAR_3, VAR_4);
 VAR_6->update = ((void*)0);
 FUNC_1(&VAR_6->dapm_mutex);
 if (VAR_7 > 0)
  FUNC_3(VAR_6);
 return VAR_7;
}
