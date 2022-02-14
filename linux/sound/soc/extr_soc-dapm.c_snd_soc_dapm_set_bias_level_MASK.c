
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {struct snd_soc_card* card; } ;
struct snd_soc_card {int (* set_bias_level ) (struct snd_soc_card*,struct snd_soc_dapm_context*,int) ;int (* set_bias_level_post ) (struct snd_soc_card*,struct snd_soc_dapm_context*,int) ;struct snd_soc_dapm_context dapm; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int FUNC_0 (struct snd_soc_dapm_context*,int) ;
 int FUNC_1 (struct snd_soc_card*,struct snd_soc_dapm_context*,int) ;
 int FUNC_2 (struct snd_soc_card*,struct snd_soc_dapm_context*,int) ;
 int FUNC_3 (struct snd_soc_card*,int) ;
 int FUNC_4 (struct snd_soc_card*,int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dapm_context *VAR_0,
           enum snd_soc_bias_level VAR_1)
{
 struct snd_soc_card *VAR_2 = VAR_0->card;
 int VAR_3 = 0;

 FUNC_4(VAR_2, VAR_1);

 if (VAR_2 && VAR_2->set_bias_level)
  VAR_3 = VAR_2->set_bias_level(VAR_2, VAR_0, VAR_1);
 if (VAR_3 != 0)
  goto out;

 if (!VAR_2 || VAR_0 != &VAR_2->dapm)
  VAR_3 = FUNC_0(VAR_0, VAR_1);

 if (VAR_3 != 0)
  goto out;

 if (VAR_2 && VAR_2->set_bias_level_post)
  VAR_3 = VAR_2->set_bias_level_post(VAR_2, VAR_0, VAR_1);
out:
 FUNC_3(VAR_2, VAR_1);

 return VAR_3;
}
